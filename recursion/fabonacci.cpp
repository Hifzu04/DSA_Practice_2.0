/*
Write a code for getting the nth term of fibonacci series. 
 i.e 0 1 1 2 3 5 8 
 Find 6th term ie 8(indexing from zero)
 recursive function = f(n) = f(n-1) + f(n-2) 
 */

#include<iostream>
using namespace std;
int fabonacci(int n){
   if(n==1){
    return 1;
   }
   if(n==0){
    return 0; 
   }

   int answer = fabonacci(n-1) + fabonacci(n-2);

   return answer;

}
int main(){
    int n;
    cin>>n;
    int ans =fabonacci(n);
    cout<<ans;
    return 0;
}