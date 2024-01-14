/* 
clear last i bits 
10101101100110101 when 1 =5  => 10101101100100000 
algo : ~0 = 111111111 =>mask : ~0 <<i => 1111110000
*/
#include<iostream>
using namespace std;
void clearlastIbits (int &n , int i) {
    int mask = (~0)<<i;
    n = n & mask;
}
int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the position number till where we need to clear"<<endl;
    int i;
    cin >>i;
    clearlastIbits(n ,i);
    cout<<n<<endl;
}

