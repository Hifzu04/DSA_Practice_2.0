#include<iostream>
using namespace std;

int sumofarray(int *arr , int n){     //arr[]  or *arr
     if(n==0){
        return 0;
    }
    // if(n==1){
    //     return arr[0];
    // }
   


    int total_sum = arr[0] + sumofarray(arr+1, n-1);
    return total_sum;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;
    int answer = sumofarray(arr, n);
    cout<<answer<<endl;
}