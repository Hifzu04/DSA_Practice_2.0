// find a^n  in tc logn.
// let 3^5 => 3^101 (suppose binary) => 1*base^4 * 0*base^2 * 1*base^1 = 3^5.
// 3^100 => 3^1100100 (TC in 8 itearation only)
// keep increasing power 1 2 4 8 16

#include <iostream>
using namespace std;

int exponentiaton(int base, int n)
{
    int answer = 1;
    while (n > 0)
    {
        int last_bit = n & 1; // acessing last bit.
        if (last_bit)
        {
            answer = answer * base;
        }
        base = base * base; // squaring the base in each iteration.
        n = n >> 1;         // right shifting n one place in each iteration.
    }
    return answer;
}

int main()
{
    int n;
    int base;
    cout << "enter base and power resp" << endl;
    cin >> base >> n;
    cout << exponentiaton(base, n);
}