/*you're given a list of n strings , concatenate them togather in some order such 
that the resulting string would be lexicographically smallest concatenation
INPUT 
3 
c 
cb 
cba
OUTPUT cbacbc (cba cb c)

algo : create custom compare function  to comapare and return concatenaton of x before y , or y before x.
for exmaple : for this array : {"a" , "ab" , "aba"};
sort(arr , arr+3 )  (without comparetor) => o/p aababa (a ab aba )
sort(arr , arr+3 , compare) => o/p aabaab (a aba ab ) //lexicographiclly smaller string first                  

*/

#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
 bool comparebro(string x , string y){
     return x+y < y+x ;
     //if x+y < y+x => return string x ie x will come first in order of sorting.
     //else => return string y , ie y will come first in order of sorting.
 }
int main(){
    string arr[] = {"a" , "ab" , "aba"};
    int n = 3;
    sort(arr, arr+n, comparebro );

    for(auto s: arr ){
        //order of resulting string
        cout<<s<<" "; 
        cout<<endl;
        //resulting string
        cout<<s;
    }
}