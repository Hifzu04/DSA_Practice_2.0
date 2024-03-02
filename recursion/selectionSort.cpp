#include <isotream>
using namespace std;


//method 1 (without recursion)
//repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 
 
void selectionSort(int arr[] , int n){
    int i , j, min_idx;
    for(i =0; i<n-1 ; i++){
        for(j=i+1 ; i<n-1 ; j++){
            
        }
    }
}

int main(){ 
int n;
cin>>n ;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
selectionSort(arr , n);

for(int i =0; i<n ; i++){
    cout<<arr[i]<<" ";
}

}