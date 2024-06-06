/*
alogrithm : 1) choose a pivot (last element) 
2) partition : placing the pivot to its correct posn
and swapping the element smaller than pivot to its left(right automatically ).
3) recursive call : on either side of the pivot element which will do step 2 in each call
T.C : O(NlogN)
*/

#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&vec , int s , int e){
    int pivot = vec[e];
    int i = s-1;
    
    //keep swapping the elemet to the left ,if it is smaller the pivot(last elemet)
    for(int j= s; j<e ; j++){
        if(vec[j]<pivot){
            i++;
            swap(vec[j],vec[i]);
        }
    }
    //when j==pivot , swap the pivot to its correct posn(at the posn where all element on the left of pivot are smaller than pivot).
    swap(vec[e], vec[i+1]);

    //return index of pivot ie partitioned element
    return i+1 ;
    
}


void quickSort(vector<int>&vec , int s , int e){
    //base case 
    if(s>=e){
        return;
    }
    //int pivot = vec[e];
    //step 2
    int pivot =  partition(vec, s , e);

    //step 3
    quickSort(vec, s , pivot-1);
    quickSort(vec , pivot+1 , e);

    

}

int main(){
    vector<int>vec{10,5,2,0,7,6,4,9};
    int s = 0 ; 
    int e = vec.size()-1;
    quickSort(vec , s, e);

    for(int x: vec){
        cout << x <<" ";
    }
    return 0;
    
}