#include <iostream>
using namespace std;
/*Given a ladder that contains 5 steps, and a child standing at Step 0 can take a maximum jump of 3 steps at every step of the ladder.
 The number of ways in which child can reach last step of the ladder is.
 output is 13.
 */

int distinct(int n)
{
    // base case
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    // if (n == 1)  no need for this
    //     return 1;

    //recursive relation    
    int answer = distinct(n-1)+distinct(n-2)+distinct(n-3);
    return answer;    
}

int main()
{
    int n = 6;
    int ans = distinct(n);
    cout << ans;
}