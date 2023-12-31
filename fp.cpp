#include <iostream>
#include<vector>

using namespace std;

bool ascendingCompare(int a, int b)
{
    return a > b;
}
bool descendingCompare(int a, int b)
{
    return a < b;
}



void bubbleSort(vector<int> arr, bool (*compareFuncPtr)(int, int))
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (compareFuncPtr(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return;
}

void showList(vector<int> arr)
{
    cout << "sorted list:  ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> arr{6, 5, 4, 3, 2};
    // function pointer
    bool (*compareFuncPtr)(int, int) = ascendingCompare;
    bubbleSort(arr, compareFuncPtr);
    showList(arr);

    cout << endl;
    
    arr = {20, 30, 40, 50, 60};
    // function pointer
    compareFuncPtr = descendingCompare;
    bubbleSort(arr, compareFuncPtr);
    showList(arr);

    return 0;
}
