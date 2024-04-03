#include <iostream>
#include <vector>
using namespace std;
// write all the possible permutation of a string. for eg for  abc : abc , acb , bac.....3!

void permutationString(string str, int index, vector<string>& finalAns, vector<string>tempAns)
{
   // base case
   if (index == str.length())
   {
      finalAns.push_back(tempAns);
      return;
   }
    cout<<str.length();

  for(int i=0 ; i<str.length() ; i++)
   {
      swap(str[index] , str[i]);
      tempAns.push_back(str);
      permutationString(str, index+1 , finalAns , tempAns);
      tempAns.pop_back();
   }
}

int main()
{
   string str = "abc";
   int index = 0;
   vector<string> finalAns;
   vector<string>tempAns;
   permutationString(str, index, finalAns, tempAns);
   for (auto it : finalAns)
   {
      cout << it << " ";
   }
}