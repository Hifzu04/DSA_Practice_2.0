#include <iostream>
#include <vector>
using namespace std;
// return all the subset(power set) of an array (num of subset : 2^N)
// algorithm is most imp

void subSet(vector<int> set, vector<vector<int>> &powerSet, vector<int> eachSubset, int index)
{

    //base case
    if (index == set.size())
    {
        powerSet.push_back(eachSubset);
        return;
    }

    //exclude wala case..
    subSet(set, powerSet, eachSubset, index + 1);

    //include wala case..
    int elemet = set[index];
    eachSubset.push_back(elemet);
    subSet(set, powerSet, eachSubset, index + 1);
}

int main()
{
    vector<int> set{1, 2, 3};

    //for whole power set(as final answer);
    vector<vector<int>> powerSet;

    //for each subset.
    vector<int> eachSubset;
    int index = 0;
    subSet(set, powerSet, eachSubset, index);

    // it is vector itself...
    for (auto vctr : powerSet)
    {
        for (auto it : vctr)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}