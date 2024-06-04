/*Given an array containing integers, u neeed to count the total number of inversions
Inversion : two element form an inversion, if a[i]< a[j] and i < j
sample input [0,5,2,3,1]
sample output 5

divide and conquer algorithm(as merge sort)
tc O(Nlogn)
 */

#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &array, int s, int e)
{
    int i = s;
    int m = s + (e - s) / 2;
    int j = m + 1;
    vector<int> temp;
    int cnt = 0;
    while (i <= m and j <= e)
    {
        if (array[i] < array[j])
        {
            temp.push_back(array[i]);
            i++;
        }
        else
        {
            cnt += (m - i + 1);
            temp.push_back(array[j]);
            j++;
        }
    }
    // copy the remaining elementgh
    while (i <= m)
    {
        temp.push_back(array[i++]);
    }
    while (j <= e)
    {
        temp.push_back(array[j++]);
    }

    // copy back the element from temp to original array
    int k = 0;
    for (int idx = s; idx <= e; idx++)
    {
        array[idx] = temp[k++];
    }
    return cnt;
}

int inversion_count(vector<int> &array, int s, int e)
{
    // base case
    if (s >= e)
    {
        return 0;
    }
    int mid = s + (e - s) / 2; // if mid = s+e/2 => shows segementaion fault
    int c1 = inversion_count(array, s, mid);
    int c2 = inversion_count(array, mid + 1, e);   
    int ci = merge(array, s, e);
    return c1 + c2 + ci;
}

int main()
{
    vector<int> arr = {0, 5, 2, 3, 1};
    int s = 0;
    int e = arr.size() - 1;
    cout << inversion_count(arr, s, e) << endl;
    return 0;
}