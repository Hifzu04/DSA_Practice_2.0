#include <iostream>
#include <vector>
using namespace std;
// write all the possible permutation of a string. for eg for  abc : abc , acb , bac.....3!

void permutationString(string str, int index, vector<string>& finalAns)
{
   // base case
   if (index == str.length())
   {
      finalAns.push_back(str);
      return;
   }
    
  for(int i=index ; i<str.length() ; i++)
   {
      swap(str[index] , str[i]);
      //finalAns.push_back(str);
      permutationString(str, index+1 , finalAns );
      // Backtrack: Restore the original string by swapping back
      swap(str[index], str[i]);
   }
}

int main()
{
   string str = "abc";
   int index = 0;
   vector<string> finalAns;
 
   permutationString(str, index, finalAns);
   for (const string& it : finalAns)
   {
      cout << it << " ";
   }
}