
// Write a function to perform basic string compression using the counts of repeated characters,
// also known as Run Length Encoding. 
// Let see one example,
// the input string "aaaabcccccaaa" would become "a4b1c5a3". 
// If the "compressed" string would not become smaller than the original string,
// your function should return the input string.
// You can assume the string has only uppercase and lowercase letters.
//  You may use the to_string(int) method to convert an integer into string.

// Sample Inputs

//     bbbaaaadexxxxxx
//     abc

// Sample Outputs

//     b3a4d1e1x6
//     abc
#include <iostream>
#include <string>
#include <array>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 1;
    bool flag =0;
    string compressedstring;
    for (int i = 1; i < 11; ++i)
    {
        if (str[i] == str[i - 1])
        {
            count++;
            flag=1;

        }
        else
        {
            compressedstring += str[i - 1] + to_string(count);
            count = 1;
        }
    }
    if(flag==0){
       cout<<str;
       return 0;
    }
    // if(str[9]!=str[8]){
    //     compressedstring+= str[9]+'1';
    // }
    cout << compressedstring;
}