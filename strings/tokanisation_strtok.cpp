// tokanisation using strtok funciton. ie taking out the tokens  outof sentences.
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    char xyz[1000];
    cin.getline(xyz, 1000); // input : this is my name hrk

    cout << strtok(xyz, " ") << endl; // o/p: this
    // cout<<strtok(xyz," ")<<endl;   //o/P : this
    // cout<<strtok(xyz," ")<<endl;   //o/P : this

    cout << strtok(NULL, " ") << endl; // O/p is
    cout << strtok(NULL, " ") << endl; // O/p my
    cout << strtok(NULL, " ") << endl; // O/p name
    cout << strtok(NULL, " ") << endl; // O/p hrk

    // usign loop to tokanise the entire sentence
    char *token = strtok(xyz, " ");
    while (token != NULL)
    {
        cout << token << endl; // op ; my    name    i
        token = strtok(NULL, " ");
    }
    return 0;
}