#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int start, int end)
{
    // base case
    if (start > end)
    {
        return true;
    }

    if (str[start] == str[end])
    {
         isPalindrome(str, start + 1, end - 1);
        return isPalindrome;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    cin>> str;
    bool ans = isPalindrome(str, 0, str.length() - 1);

    if (ans)
    {
        cout << "Yes , it is palindrome" << endl;
    }
    else
    {
        cout << "no , its not ";
    }

    return 0;
}