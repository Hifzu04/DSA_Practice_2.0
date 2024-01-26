// unique substring (hashing method)
/*given a string, write a function to print lagrest unique substring
sample Inputs:
prateekbhaiya
aabcb

sample output
ekbhaiy
abc */

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string largest_substring(string str)
{
    int i = 0;
    int j = 0;
    int window_len = 0;
    int max_window_len = 0;
    int start_window = -1;
    unordered_map<char, int> m;
    while (j < str.length())
    {
        char ch = str[j];

        if (m.count(ch) and m[ch] >= i)
        {
            i = m[ch] + 1;
            window_len = j - i; 
        }
        // update the last occurance.
        m[ch] = j;
        window_len++;
        j++;
        // update the max  window len at every length.
        if (window_len > max_window_len)
        {
            max_window_len = window_len;
            start_window = i;
        }
    }
    return str.substr(start_window, max_window_len);
}
int main()
{
    string str;
    cin >> str;
    cout << largest_substring(str) << endl;
}