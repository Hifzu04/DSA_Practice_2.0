#include<iostream>
using namespace std;

// 2^n = 2 * 2^(n-1)

int powOFtwo(int n){
    if (n==0)
        return 1;
    
  /* int chotiProblem = powOFtwo(n-1);
  int badiProblem = 2* chotiProblem;
  return badiProblem;
  or */
   return 2*powOFtwo(n-1);
}
int main(){
    int n ; 
    cin>> n ;
    int answer = powOFtwo(n);
    cout<<answer;
}