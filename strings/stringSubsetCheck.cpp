// to check whether a string contian its subset ie computer --> ptr
#include <iostream>
#include <string>
using namespace std;
bool isSubset(string s1, string s2)
{
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    while (i >=0 and j >= 0)
    {
        if (s1[i] == s2[j])
        {
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    if (j == -1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    string set;
    string subset;
    cout << "enter sting ";
    cin >> set;
    cout << "enter subset";
    cin >> subset;
    cout << isSubset(set, subset);
}