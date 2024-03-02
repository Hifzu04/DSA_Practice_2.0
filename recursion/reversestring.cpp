// mobile --> elibom

#include <iostream>
#include <string>
using namespace std;
void reversestring(string &str, int i, int j) // pass by reference
{
    // base case 
    if (i > j)
    {
        return ;
        //Use return; to exit a function early, especially in functions with a return type of void.
    }
    //swap(str[i] , str[j]);
     char temp = str[i];
     str[i] = str[j];
     str[j] = temp;
    
    
    reversestring(str , i+1 , j-1);
    //return reversestring;
}
int main()

{
    string str;
    cin >> str;

    reversestring(str, 0, str.length() - 1);
    cout << str;
}