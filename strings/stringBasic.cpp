#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (char ch : s)
    {
        cout << ch << "*";
    }


    // taking multiple string from the usr

    vector<string> str;
    int n = 5;
    string k;

    while (n--)
    {
        getline(cin, k);
        str.push_back(k);
        n--;
    }

    for (string x : str)
    {
        cout << x << "--";
    }
    return 0;
}
