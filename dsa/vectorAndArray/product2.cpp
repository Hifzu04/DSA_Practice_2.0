#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>left = {1,1,1,1,1};
    vector<int>right ={1,1,1,1,1};
    vector<int>vec = {1,2,3,4,5};
    for(int i=1 ; i<left.size() ; i++){
        left[i]*= vec[i-1]*left[i-1];
        //left = {1,1,2,6,24};
        
    }
    for(int  i=3; i>=0; i--){
        right[i]*= vec[i+1]*right[i+1];
        //right = {120,60,20,5,1}
    }
    for(int i=0; i<5; i++){
        vec[i] = left[i]*right[i];
        cout<<vec[i]<<" ";
    }    
    
}