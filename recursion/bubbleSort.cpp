// send highest element in the rightmost place  in each loop.
#include <iostream>
using namespace std;

int bubbleSort(int arr, int len)
{
    // base case
    if (len == 0)
    {
        return arr;
    }
    if (len == 1)
    {
        return arr;
    }

    // ek loop solve karlo.
    for (int i = 0; i < len - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    //for rest loop, recursive call 
    bubbleSort(arr, len-1);
}

int main()
{
    int arr[10] = {8, 9, 2, 0, 5, 0, 7, 6, 9, 7};
    int solution[10] = bubbleSort(arr, arr.length());
    for (int i = 0; i < 10; i++)
    {
        cout << solution[i];
    }
}