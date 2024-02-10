#include <bits/stdc++.h>
using namespace std;
vector<int> stringsearch (string big,  string small){
    vector<int>result {};
    int index  = big.find(small);
    if(index == -1){
        return result;
    }
    while(index != -1){
        result.push_back(index);
        index = big.find(small, index+1);
    
    }
    return result;
}
int main()
{
    string bigstring = "cricket is my fav game because in cricket lots of phy cricket. my";
    string smallstring;
    cin>>smallstring;
    vector<int> result = stringsearch(bigstring, smallstring);
    for(int hrk : result){
        cout<<hrk << " ";
    }

}
