//sample input 125  . sample O/p 2:05
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int minute, hour = 0;
    cout << "enter minute : ";
    cin >> minute;
    hour = minute / 60;
    int min;
    min = minute % 60;
    string ch;
    if (min < 9 && min > 0)
    {
       ch = to_string(min);
        ch = '0' + ch;
    }
    string hr = to_string(hour);
    cout<< hr + ':' + ch;
   
}