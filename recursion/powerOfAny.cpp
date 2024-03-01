// if a is even
//      b^a = b^(a/2) * b^(a/2)
//  if a is odd
//       b^a =  b * b^(a/2) * b^(a/2)

#include <iostream>
using namespace std;

int power(int base, int expo)
{
    // base case
    if (expo == 0)
    {
        return 1;
    }
    if (expo == 1)
    {
        return base;
    }
    // recursive call- untill reaches base case
    int ans = power(base, expo / 2);

    if (expo % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return base * ans * ans;
    }
}

int main()
{
    int base, expo;
    cin >> base >> expo;

    int answer = power(base, expo);
    cout << answer << endl;
}