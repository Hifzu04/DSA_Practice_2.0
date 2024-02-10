// Sample Input

//     This is SO MUCH FUN!

// Sample Output

//     This Is So Much Fun!
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // cap: 65-90   lower Case: 97-122
    string sentence;
    getline(cin, sentence);
    cout << sentence.length();
    for (int i = 0; i < sentence.length() - 1; i++)
    {
        
        if (sentence[i] >= 'A' && sentence[i] <= 'Z')
        {
            sentence[i] += 32;
        }
    }
    for (int i = 0; i < sentence.length() - 1; i++)
    {
        if (sentence[i] == ' ')
        {
            sentence[i + 1] -= 32;
        }
    }
    if (sentence[0] >= 'a' && sentence[0] <= 'z')
    {
        sentence[0] -= 32;
    }

    cout << sentence;
}
