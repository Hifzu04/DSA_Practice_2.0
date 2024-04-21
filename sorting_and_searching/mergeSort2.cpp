// dsa idea : parteek Narang. implemented by Me

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &input, int s, int e)
{

    
   
    int md = (s + e) / 2;
    int j = md+1;
    int i = s;

    // a temp array to store sorted array for every recursive call
    vector<int> temp;

    while (i <= md and j<= e)
    {
        if (input[i] <= input[j])
        {
            temp.push_back(input[i++]);
        }
        else
        {
            temp.push_back(input[j++]);
        }
    }
    // copy the remaing element left while the  while-loop got breaked.
    while(i<=md ){
        temp.push_back(input[i++]);
    }
    while (j<=e)
    {
        temp.push_back(input[j++]);
    }
    

    //copy back the temp to original array
    int k=0;
    for(int st = s ; st<=e ; st++){
        input[st] = temp[k++];
    }

}

void divide(vector<int> &input, int s, int e)
{
    int mid = (s + e) / 2;

    // base case
    if (s >= e)
    {
        return;
    }

    // divde them form mid (recursively);
    divide(input, s, mid);
    divide(input, mid + 1, e);

    // merge and them after reacing base case
    return merge(input, s, e);
}

int main()
{
    vector<int> input{10, 5, 2, 0, 7, 6, 4,11,9,8,3,2,2};
    int start = 0;
    int end = input.size() - 1;
    // int mid = start+end/2;
    divide(input, start, end);

    for (auto it : input)
    {
        cout << it <<" ";
    }
}