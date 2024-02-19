
/*input : 125
   output : one two five*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;


//simple approach 
/*int main(){
    string arr[10] = { "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" };
    int digit; 
    stack <string>mystack;
    cin>>digit;
    while(digit>0){
         int ans = digit%10;
         mystack.push(arr[ans]);
         //cout<<str[ans]<<" ";
         digit = digit/10;
    }
    //used stack data str to print in lifo order
    while(!mystack.empty()){
        cout<<mystack.top()<<" ";
        mystack.pop();
    }

    return 0;

}  */


//recursion approach

void saydigits(int n , string arr[] ){

    if(n==0){
        return;
    }
     int ans = n%10;
    // cout<<arr[ans]<<" ";    //rev order.
     n= n/10;

     saydigits(n,arr);
    cout<<arr[ans]<<" ";



}
int main (){
    int n;
    cin>>n;
    string arr[10] = { "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" };
    saydigits(n, arr);

    

}