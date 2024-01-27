/*
problem: to give substring from s1 which contain all the element from s2

i/p
s1=fizzbuzz
s2 = fuzz
o/p
fizzbu


input case2
s1 = hello_world
s2 = lol

output case 2
llo

i/p case 3 
s1 = hello
s2 = oel
o/p = ello
*/

#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

string result(string s1, string s2)
{
    int minm_idx = INT_MAX;
    int maxm_idx = 0;

    for (int i = 0; i < s2.length(); i++)
    {    
        int k =s1.find(s2[i]);
        if ( k != -1)
        {
            // store maxm idx of i from s1
            if (maxm_idx <k)
            {
                maxm_idx = k;
            }
            // store minm idx
            if (minm_idx > k)
            {
                minm_idx = k;
            }
        }
    }
    return s1.substr(minm_idx,maxm_idx-minm_idx+1);
}
int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    cout << result(s1, s2) << endl;
}