#include <iostream>
using namespace std;

// algo:The array is virtually split into a sorted and an unsorted part.
//  Values from the unsorted part are picked and placed in the correct position in the sorted part

// without recursion
/*void insertionSort(int arr[], int n)
{
  int temp, j;
  for (int i = 1; i < n; i++)
  {
    temp = arr[i];
    j = i - 1;
    while (temp < arr[j] && j >= 0)
    {
      swap(arr[j + 1], arr[j]);
      // temp = arr[j-1];
      j--;
    }
  }
}*/

// using recursion
void insertionSort(int arr[], int n, int i)
{
  //base case
   if(i==n){
    return;
   }
   

   //int i =1;
   int j = i-1;
   int temp = arr[i];
   while(temp<arr[j] && j>=0 ){
    swap(arr[j+1], arr[j]);
    j--;
   }

  insertionSort(arr , n, i+1);

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
  insertionSort(arr, n, 1);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}