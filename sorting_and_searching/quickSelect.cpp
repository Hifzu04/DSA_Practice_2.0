/*
to find nth smallest elemnt.
approach 1 ) sort(say quick sort) and find 
optimised approach : select a pivot(last elemt). place it its correct postion. 
if (nth elemet < pivot )  => recursive  call the the left 
if(nth elemet > pivot ) => recursive call the the right
if(nth element == pivot) => :D 
*/  

#include<iostream>
#include<vector>
using namespace std;


//selecting the pivot and place it at its correct position.
int partioned(vector<int>&vec , int s , int e){
    int pivot = vec[e];
    int i = s-1;
    //all the smaller than pivot to leftmost posn.
    for(int j=s ; j<e; j++){
        if(vec[j]<pivot){
            i++;
            swap(vec[i], vec[j]);
        }
    }
    //pivot at its correct posn 
    swap(vec[i+1] , vec[e]);
    
    //pivot index at corrct position 
    return i+1;
}

int nthSmallest(vector<int>&vec , int s , int e, int key){
    // //base case, not needed
    //     if (s > e) {
    //     throw out_of_range("Key is out of bounds");
    // }
 


    int pivotidx = partioned(vec , s , e);

    //3 case
    if(key==pivotidx){
        return vec[pivotidx];
    }
    else if (key<pivotidx){
       return  nthSmallest(vec, s, pivotidx-1, key);
    }
    else{
        return nthSmallest(vec , pivotidx+1 , e , key);
    }

}

int main (){
    vector<int>vec{10,5,2,0,7,6,4};
    int key; 
    cin>>key;
    int ans = nthSmallest(vec , 0, vec.size()-1, key);
    cout<<ans<<endl;
    return 0;
}