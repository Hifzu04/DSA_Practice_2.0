#include <iostream>
#include <vector>


using namespace std;
int main()
{

    int  product =1;
    vector<int>vec;
    for(int i=1; i<6; i++){
        vec.push_back(i);
    }
    for(int i=0; i<vec.size(); i++){
        product*=vec[i];
    }
    // cout<<product;
    for(int i=0 ; i<vec.size() ; i++){
        vec[i]= product/vec[i];
    }
        
    
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}
//sample input {1,2,3,4,5}
//sample output {120,60,40,30,24}
//Implement a function that takes in a vector of integers, and returns a vector of the same length, where each element in the output array is equal to the product of every other number in the input array. Solve this problem without using division
