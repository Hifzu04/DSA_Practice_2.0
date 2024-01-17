/*The Planet Earth is under a threat from the aliens of the outer space and your task is to defeat an enemy who is N steps above you
 (assume yourself to be at ground level i.e. at the 0th level).
 You can take jumps in power of 2.
 In order to defeat the enemy as quickly as possible you have to reach the Nth step in minimum moves possible.
Input Format
In the function an integer is passed.
Output Format
Return an integer representing minimum jumps.

Sample Input
    7
Sample Output
    3
Explanation
    0 -> 4 -> 6 -> 7
Algorithm
    min no of jumpus in power of two to reach N is same as min no of set bits. iein 7(binary 111) three set bits.
*/

int minJumps(int n)
{
    // Min jumps is same as no of setBits in N.
    int count = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            count++;
        }
        n= n>>1;
    }
    return count;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the level of enemy from earth in int : " << endl;

    cin >> n;

    cout << "we can reach to enemy in minimum " << minJumps(n) << " steps";
}