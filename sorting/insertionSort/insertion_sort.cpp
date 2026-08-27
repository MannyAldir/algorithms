# include <iostream>
# include <string>
# include <vector>

std::vector<int> insertionSort(std::vector<int> arr);
void printArr(std::vector<int> arr);

int main(){
    std::vector<int> arr = {1,0,1,100,2,5,7,8,9};
    arr = insertionSort(arr);
    printArr(arr);
    return 0;
}

std::vector<int> insertionSort(std::vector<int> arr)
{
    // Assume the first element is sorted
    // Then the remaining n-1 elements are unsorted so we begin at the unsorted section
    // compare the current element to each element in the sorted section until it finds the position.
    // We will shift to the right and drop our target into place

    int size = arr.size();
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0)
        {
            
            if (temp < arr[j])
            {
                arr[j+1] = arr[j];
            }
            
            else
            {
                break;
            }

            j--;
        }
        arr[j + 1] = temp;

    } return arr;
}

void printArr(std::vector<int> arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    } return;
}



