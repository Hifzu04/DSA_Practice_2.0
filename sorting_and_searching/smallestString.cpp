/*you're given a list of n strings , concatenate them togather in some order such 
that the resulting string would be lexicographically smallest concatenation
INPUT 
3 
c 
cb 
cba
OUTPUT cbacbc (cba cb c)

*/

#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
bool compare(string x , string y){
    return x+y < y+x ;
}
int main(){
    string arr[] = {"a" , "ab" , "aba"};
    int n = 3;
    sort(arr, arr+n , compare);

    for(auto s: arr ){
        cout<<s; 
    }
}