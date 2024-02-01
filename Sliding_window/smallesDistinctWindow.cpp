/*
Smallest Distinct Window

Given a string, find the smallest window (substring) 
which contains all distinct characters of the given input string.

Sample Inputs

    aabcbcdbcaaad
    aaaa

Sample Outputs

    dbca
    a

Explanation : The smallest window is "dbca" as it contains all
 the distinct letters from input string. Similarly for the second case the answer should be 'a'.
*/
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
string Smallestwindow(string str){
    //storing the elemet in a hasmap
    unordered_map<char,int>mpp;
    string uniqueestr;
    for(char ch: str){
        mpp[ch]++;
        if (uniqueestr.find(ch) == -1)
        {
         uniqueestr +=ch;
        }
        
    }
    
     return uniqueestr;
     
}
int main(){
    string str;
    cin>>str;
    cout<<Smallestwindow(str)<<endl;
}

