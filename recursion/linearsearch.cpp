#include<iostream>
using namespace std;


bool linearsearch(int *arr , int key , int size){
    //base case     
    if(size==0){
        return 0;
    }


    
    if (arr[0]==key)
    {
         return true;
    } else{
        count++;
        
       bool remainingpart =  linearsearch(arr+1 , key , size-1);
       return remainingpart; 
    }
    
    
}


int main(){
    cout<<"enter array of size 10"<<endl;
    int arr[10];
    for(int i=0 ; i<10; i++){
        cin>>arr[i];
    }
    int n=10;
    cout<<"enter the key "<<endl;
    int key =2;
    cin>>key;
    bool answer = linearsearch(arr , key , n);
    if(answer){
        cout<<"Yes array is present";
    }else{
        cout<<"not found";
    }

}