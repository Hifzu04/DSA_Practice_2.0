#include<iostream>
using namespace std;
//to check whether an array is sorted or not?

bool issorted(int *arr,int n){
    //base case
    if (n==0 || n==1){      //if size of an array is zero or one, then it's already sorted.
        return true;
    }
    if (arr[0]>arr[1]){
        return false;
    }
    else{
        bool answer = issorted(arr +1, n-1);
        return answer;
    }
    

}

int main(){
    int n=5;
    int arr[n] = {1,2,3,8,8,8};
    bool answer = issorted(arr  , n);
    if(answer){
        cout<<"yes array is sorted"<<endl;
    }
    else{
        cout<<"not sorted "<<endl;
    }
    return 0;
    
}