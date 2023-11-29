#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<utility>
using namespace std;

pair<int, int > min_diff(vector<int>a1, vector<int>a2){
    sort(a2.begin(), a2.end());
    int minm = INT_MAX;
    int p;
    int q;


    for(int x: a1){
        //binary search the iterator of the element just greater than x.
        auto it = lower_bound(a2.begin(), a2.end(), x) - a2.begin();
        if(it>=1 and x-a2[it-1]<minm ){
            minm = x-a2[it-1];
            p = a2[it-1];
            q= x;

        }
        if(it!= a2.size() and a2[it]-x < minm){
            minm = a2[it]-x;
            p= a2[it];
            q= x;
        }
       
    }
     return {p , q}; 

}


int main(){
    vector<int > a1= {23,5,10,17,30};
    vector<int> a2 = {26,134,135,14,19};
    pair<int , int > result = min_diff(a1, a2);
    cout<<result.first<<" "<<result.second<<endl;
    return 0;

}