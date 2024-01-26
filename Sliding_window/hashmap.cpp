//use to get the frequency of a number in a list

#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int arr[10] = {8,9,2,0,5,0,7,6,9,7};
    unordered_map<int,int>mpp;      //initailly for each key its value is zero
    for(int i=0; i<10; i++){
        mpp[arr[i]]++;          //frequency  
    }
    cout<<mpp[8]<<endl;     //o/p 1   it means 8 is +nt once
    cout<<mpp[9]<<endl;     //o/p 2   it means 9 is +nt twice

    for(auto it: mpp){
        cout<<"the element "<<it.first<<"is +nt "<<it.second<<" times"<<endl;
    }
    
}

