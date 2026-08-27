# include <iostream>
# include <vector>

template <typename T> T selectionSort(std::vector<T> arr)
{
    // first pointer is the element to be sorted
    // second pointer checks to find the min in the array
    // swap the min and first pointer position 
    for (int i = 0; i < arr.size(); i++)
       {
        int min_index = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_index])
                min_index = j; 
        }
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

        }
        return arr;
        
}

template <typename T> void printArr(std::vector<T> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << ' ';
    }
}

int main()
{   
    std::vector<bool> boolArr = {true, false, true, true, false};
    std::vector<int> intArr = {5,4,3,2,1,0};
    std::vector<char> charArr = {'C', 'B', 'A'};
    
    
    return 0;
}
