#include <iostream>
#include<vector>

using namespace std;


void bubbleSortAscending(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return;
}
void bubbleSortDescending(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
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
    bubbleSortAscending(arr);
    showList(arr);

    cout << endl;
    
    arr = {20, 30, 40, 50, 60};
    bubbleSortDescending(arr);
    showList(arr);

    return 0;
}
