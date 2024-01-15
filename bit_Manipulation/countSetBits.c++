//110101 => o/p 4 (total 4 sets bit)
#include <iostream>
using namespace std;
/*
first approach

algo : if (n & 1) == 1   count++ ; keep removing last bit in each iteration using n>>1;
time complexity : O (N)
*/
int cntSetBit1(int n)
{
    int count = 0;
    while (n > 0)
    {
        int p= n&1;
        if (p==1)
        {
            count++;
        }
        n=n >> 1;
    }
    return count; 
}
//2nd approach : TC = log(N);
// algo : keep doing n & n-1 . it'll become zero in as no of iteration as no of sets bits present.
// total time is number of iteration occured.
int cntSetBit2(int n){
    int count =0;
    while(n>0){
        n = n &(n-1);
        count++;
    }
    return count ; 
}



int main()
{
    int n;
    cin >> n;
    cout << cntSetBit1(n) << endl;
    cout<<cntSetBit2(n)<<endl;
}


