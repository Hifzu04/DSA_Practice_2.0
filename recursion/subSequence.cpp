#include<iostream>
#include<vector>
using namespace std;

void subSeq(string sequence,vector<string>& subsequence,string ans,int index){
    //jubb jubb base case reach ho, add kardo
    if(index>=3){
        subsequence.push_back(ans);
        return;
    }

    //// Exclude case: without adding the current element, move to the next index
    subSeq(sequence,subsequence,ans,index+1);

    //include case
    char curr = sequence[index];
    ans.push_back(curr);
    subSeq(sequence,subsequence,ans,index);

}


int main(){
    //input
    string sequence="abc";

    //our final answer will be stored in this.
    vector<string>subsequence;

    //each vector 
    string ans = " ";

    int index = 0;

    subSeq(sequence, subsequence, ans, index);

    // it is vector itself
    for (auto vctr : subsequence)
    {
        
            cout << vctr << " ";

      
    }
}