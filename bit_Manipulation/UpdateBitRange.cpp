/* given N = 101010100010
 M = 100110
 i=2 and j = 6
 update m  from 2 to 6vpositon  of N.
algo : mask :  clear N from bit 2 to 6 . =>  N | (M<<i) */

#include <iostream>
using namespace std;

void clearbit(int &n, int i, int j)
{
    int a = (~0) << (j + 1); // 11111111... << 4 => ....111110000
    int b = (1 << i) - 1;    // (00000....1 << 1) -1 => (00000....10) -1 = ...0000000001
    int mask = a | b;        //.....1111110000 | ...0000001 => ...1111110001
    n = n & mask;            // ...00001111 & ...10001  => .....0000001
}
void updateBit(int &n, int i, int j, int m)
{
    clearbit(n, i, j);
    int mask = m << i;
    n = n | mask;
}

int main()
{
    int n = 15; // 1111
    int i = 1, j = 3;
    int m = 2; //...0010
    updateBit(n, i, j, m);
    cout << n << endl;
    return 0;
}