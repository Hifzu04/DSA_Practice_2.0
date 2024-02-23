#include <iostream>
using namespace std;

bool binarySearch(int *arr, int key, int start, int end)
{
    int mid = (start + end) / 2;

    //base 
    if (arr[mid] == key)
    {
        return 1;
    }

    
    if (arr[mid] > key)
    {
        //end = mid - 1;
        bool rearrange = binarySearch(arr, key, start, mid-1);
        return rearrange;
    }
    else
    {
        //start = mid + 1;
        bool rearrange = binarySearch(arr, key, mid+1, end);
        return rearrange;
    }
}

int main()
{
    int n = 10;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cout << "enter the element which you want to search." << endl;
    cin >> key;
    int start = 0;
    int end = n - 1;
    bool answer = binarySearch(arr, n, key, start, end);
    if (answer)
    {
        cout << "yes present";
    }
    else
    {
        cout << "not found";
    }
}