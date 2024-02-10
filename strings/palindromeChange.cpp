// Given a palindromic string of lowercase English letters palindrome,
//  replace exactly one character with any lowercase English letter so that the resulting string is not a palindrome
// and that it is the lexicographically smallest one possible.
// Return the resulting string. If there is no way to replace a character to make it not a palindrome, return an empty string.

// // //Example-1

// //     Input: palindrome = "abccba"
// //     Output: "aaccba"

// // Explanation: There are many ways to make "abccba" not a palindrome, such as "zbccba", "aaccba", and "abacba".

// // Of all the ways, "aaccba" is the lexicographically smallest.

// // Example-2

// //     Input: palindrome = "a"
// //     Output: ""

// // Explanation: There is no way to replace a single character to make "a" not a palindrome, so return an empty string.

// // Example-3

// //     Input: palindrome = "aa"
// //     Output: "ab"

// // Example-4

// //     Input: palindrome = "aba"
// //     Output: "abb"/

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string palindrome;
//     cin >> palindrome;

//     if (palindrome[1] > palindrome[0])
//     {
//         if (palindrome[2] != palindrome[0])
//         {
//             palindrome[1] = 'a';
//         }
//         else
//         {
//             palindrome[2] = 'b';
//         }
//     }

//     else if (palindrome[1] == palindrome[0])
//     {
//         if (palindrome[0] == 'a' && palindrome[2] != 'a')
//         {
//             palindrome[1] = 'b';
//         }
//         //failed for  aaa aaaaaa -->aba abaaa
//         else
//         {
//             palindrome[0] = 'a';
//         }
//     }
//     else
//     {
//         if (palindrome[2] != 'a')
//         {
//             palindrome[0] = 'a';
//         }
//         else
//         {
//             palindrome[1] = 'b';
//         }
//     }
//     cout<<"converted : "<<palindrome<<" ";
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string palindrome;
    cin>>palindrome;
    for(int i=0; i<palindrome.size()/2; i++){
        if(palindrome[i]!='a'){
            palindrome[i]='a';
            cout<<palindrome;
            return 0;
        }
    }
    palindrome[palindrome.size()-1]='b';
    cout<<palindrome;
    return 0;
}
