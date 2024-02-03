/*
Given an unsorted array of integers, find the number of subarrays having sum exactly equal to a given number k.
Sample Input
    arr = {10, 2, -2, -20, 10}
    K = -10
Sample Output
3
Explanation
10 + 2 - 2 + -20 = 10
-20 + 10 = -10
2 + -2 + -20 + 10 = -10
Expected Complexity
Linear
Hint : You may require a hashmap.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // brute force. O(N)^2.
    int arr[5] = {10, 2, -2, -20, 10};
    int k = -10;
    int count = 0;
    int sum = 0;
    int j = 0;
    for (int i = 0; i < 5; i++)
    {

        while (sum > k && j < 5)
        {
            sum += arr[j];
            j++;
            if (sum == k)
            {
                count++;
                j = i;
                sum = 0;
            }
        }
        
    }
    cout << "num of subarray with sum == k is " << count << endl;
}

//solve the equatuin