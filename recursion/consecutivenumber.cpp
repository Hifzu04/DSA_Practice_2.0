#include<iostream>
using namespace std;

// for n=10 , print 1,2,3,4,5,6,7,8,9,10
//also for n =10 , print 10 9 8 7 6 5 4 3 2 1

void consecutive(int n){
    //base case
    if (n==0){
        return;
    }
    cout<<n<<" ";
    
    consecutive(n-1);
}
void revconsecutive(int n){
    //base case
    if (n==0){
        return;
    }
    revconsecutive(n-1);
    cout<<n<<" ";
}



int main(){
    int n ;
    cin>>n;
    cout<<endl;
    consecutive(n);
    cout<<endl;
    revconsecutive(n);
    return 0;
}