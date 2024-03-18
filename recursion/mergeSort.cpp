

#include <iostream>
#include <vector>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + e / 2

    //create two array 
    int len1 = (mid - s) + 1;
    int len2 = end - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    //store element
    int k = s; 
    for(int i = 0; i<len1 ; i++){
        first[i] = arr[k++];
    }
    int k = mid+1; 
    for(int i = 0; i<len2 ; i++){
        second[i] = arr[k++];
    }

    //merge them 
    int index1 =0 ;   //index of first created array
    int index2= 0 ;   //index of second created array
    int mainArrayIndex = s;

    //merging
    while(index1 <len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    

}

void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2

    // keep dividing left part
    mergesort(arr, s, mid);

    // keep dividing right part
    mergesort(arr, mid + 1, e);

    // now merge them in sorted order
    merge(arr, s, e);
}

int main()
{
    int arr[10] = {8, 3, 2, 7, 5, 4, 0, 1, 9, 6};
    int n = 10;
    int mergesort(arr, 0, n - 1);
}
