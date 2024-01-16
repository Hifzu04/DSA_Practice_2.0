
#include <iostream>
#include <vector>
using namespace std;
int decToBinary(int n)
{

    int pow = 1;
    int ans = 0;
    while (n > 0)
    {
        int rem = n % 2;

        n = n / 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decToBinary(n) << endl;
}