/*
Sliding Window Maximum
Given an array of integers and an integer K, 
return a vector containing  maximum for each and every contiguous subarray of size k.
Constraints:
-10000<=A[i]<=10000, where 0<i<size of array
K>0
Sample Input
    K = 3
    input = {1, 2, 3, 1, 4, 5, 2, 3, 6}
Sample Output
    output = {3,3,4,5,5,5,6}
Explanation
Maximum of 1, 2, 3 is 3
Maximum of 2, 3, 1 is 3
Maximum of 3, 1, 4 is 4
and so on .......
Note - The optimized solution involves use of deque (doubly ended queue)
*/


#include <iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> MaxOfConsecutiveThree(vector<int>&vec , int len){
    vector<int>resultVector;
    int maxm;
    for(int i=0; i<len-2 ; ++i){
        maxm = max(vec[i], max(vec[i+1], vec[i+2]));
        
        resultVector.push_back(maxm);        

    }
    return resultVector;


}

int main(){
    vector<int>vec;
    int len;
    cout<<"enter the size of vector"<<endl;
    cin>>len;
    for(int i=0; i<len; i++ ){
        int element;
        cin>>element;
        vec.push_back(element);
    }
    cout<<"solution is :  ";
    vector<int>vecsol = MaxOfConsecutiveThree(vec , len);
    for(int elmt : vecsol){
        cout<<elmt<<" ";

    }

}