#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the string: ";
    string str;
    cin >> str;
     
    for (int i = 0; i < str.length() ; i++)
    {
        string p ;
        for (int j = i; j < str.length() ; j++)
        {
            
            p+= str[j];
            cout<<p<<" ";
        }
    }
}