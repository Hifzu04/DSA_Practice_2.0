#include <iostream>
using namespace std;

int partitionAndPivot(int arr[], int s, int e)
{
    // doubt : original array won't change??
    // pivot selection
    int pivot = arr[s];
    // placing pivot at its correct positon
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // lhs and rhs arrangemet wrt pivot
    // in lhs of pivot do all the element smaller than that
    // in rhs of pivot do all the element larger than that
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        /*if(arr[j]<=pivot and arr[i]>=pivot){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
        if(arr[i]<=pivot and arr[j]<=pivot){
            i++;
        }
        if(arr[i]>=pivot and arr[j]>=pivot){
            j--;
        }*/

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    // return index of pivit after it gets at postion of partition (correct position)
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // select pivot and arrange all element less than and greater that pivot on lhs and rhs of pivot then  do patrition.
    int partition = partitionAndPivot(arr, s, e);

    // do the same case for lhs  and rhs of the pivoted element.
    quickSort(arr, s, partition - 1);
    quickSort(arr, partition + 1, e);
}

int main()
{
    int arr[13] = {9, 76, 3, 76, 5, 76, 9, 1, 2, 0, 33, 45,8};
    int size = 13;
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < 13; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}