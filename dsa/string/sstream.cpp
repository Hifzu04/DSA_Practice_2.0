#include<iostream>
#include<sstream>
using namespace std;
int main(){
    stringstream ss;
     string str =  "55";
     ss << str;
     int val;
     ss >> val;
     cout<<val+2;  // 57
    
    
    int num = 100;
    ss<<num;
    string val ;
    ss>> val;
    cout<<val+"2" <<endl;    //1002


}