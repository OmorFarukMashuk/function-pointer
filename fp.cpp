#include <iostream>

using namespace std;

bool ascendingCompare(int a, int b)
{
    return a > b;
}
bool descendingCompare(int a, int b)
{
    return a < b;
}

int main()
{
    int arr[] = {6, 5, 4, 3, 2};
    int arrLen = end(arr) - begin(arr);


    //function pointer 
    bool (*compareFuncPtr)(int, int) = descendingCompare;

    for (int i = 0; i < arrLen; i++)
    {
        for (int j = 0; j < arrLen - i - 1; j++)
        {
            if (compareFuncPtr(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "sorted list:  ";

    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
