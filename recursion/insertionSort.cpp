#include<iostream>
using namespace std;

void insertionSort(int arr[] , int n ){
    int temp, j;
    for(int i = 1 ; i<n ; i++){
      temp = arr[i];
      j = i-1; 
      while(temp<arr[j] && j>=0){
        swap(arr[j+1] , arr[j]);
        //temp = arr[j-1];
        j--;
        
      } 
    }
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
    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}