#include <iostream>
#include <string>
#include <vector>
//tokanisation usig sstream function.
#include <sstream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    stringstream ss(str);
    string token;
    vector<string>tokens;
    while (getline(ss, token , ' ')){
        tokens.push_back(token);

    }
    for(auto token:tokens){
        cout<<token<<",";
    }
    cout<<endl;

}