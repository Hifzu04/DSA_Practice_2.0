
#include<iostream>
using namespace std;

//factorial (n) = n* fact(n-1)


int factorial(int n){
    if(n==0)
    return 1;          //base case

    int smallerproblem = factorial(n-1);
    int biggerperblem= n *smallerproblem;   //

    return biggerperblem;

}

int main(){
    int n;
    cin>>n;
    int answer = factorial(n);
    cout<<answer<<endl;
}