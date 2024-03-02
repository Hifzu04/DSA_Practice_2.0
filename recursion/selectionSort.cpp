#include <iostream>
#include<climits>
using namespace std;


// repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list.
// method 1 (without recursion)
/*void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        // select the smallest
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // place the smallest selected element at the very beginning
        // by swapping
        if (min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
        }
    }
}*/

//method 2 , using recursion
void selectionSort(int arr[] , int n , int i ){
    //base case
    if(n==0){
        return ;
    }


     int min_index = i;
    //select smallest and place it on very frist position
    for(int j = i+1; j< n; j++){
        if(arr[j]<arr[min_index]){
            min_index= j;
        }

    }
    //place the min at left most 
    if(arr[min_index] != arr[i]){
        swap(arr[min_index] , arr[i]);
        
    }
    //do it for rest of the elemet 
    selectionSort(arr , n-1 , i+1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n , 0);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}