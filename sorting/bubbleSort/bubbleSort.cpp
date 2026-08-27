# include <iostream>
# include <vector>

std::vector<int> bubbleSort(std::vector<int> arr);
void printArr(std::vector<int> arr);

int main()
{
    std::vector<int> unsorted = {5,4,3,2,1};
   std::vector<int> sorted = bubbleSort(unsorted);
    printArr(sorted);
}

std::vector<int> bubbleSort(std::vector<int> arr)
{
    // The algorithm bubbles elements all down array into it's spot
    // after each completion of an inner loop an element is sorted

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    } return arr;
}

void printArr(std::vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << ' ';
    }
}