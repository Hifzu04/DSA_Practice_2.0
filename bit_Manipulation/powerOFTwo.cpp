/* to check whether a number is power of two or not 
 recall any number which is power of two has 1 following by zeroes. ie 2 = 10 , 4= 100 , 8 = 1000 , 16 = 10000
 let n =16
 so n-1 = 0001 now  if n & (n-1) ==0 then powr of two
*/

#include<iostream>
using namespace std;
void PowerOFTwo(int &n){
    if((n & (n-1)) == 0 ){
        cout<<" Yes given number is power of Two";

    }
    else{
        cout<<"given number is not power of two";
    }

}
int main(){
    int n ;
    cin >> n;
    PowerOFTwo(n);

}