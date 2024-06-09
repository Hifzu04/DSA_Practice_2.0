/*given an empty string containing many empty chars in between , find index of a particular string */

#include <iostream>
#include <string>
using namespace std;

int sparseSearch(string str[], int n, string element)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        int mid = (i + j) / 2;

        if (str[mid] == "")
        {
            int mid_left = mid - 1;
            int mid_right = mid + 1;
            // update the mid point to the nearest non empty string
            while (true)
            {
                if (mid_left < i && mid_right > j)
                {
                    return -1;
                }
                else if (str[mid_left] != "" && mid_left >= i)
                {
                    mid = mid_left;
                    break;
                }
                else if (str[mid_right] != "" && mid_right <= j)
                {
                    mid = mid_right;
                    break;
                }
                mid_left--;
                mid_right++;
            }
        }

        if(str[mid] == element)
        {
            return mid;
        }
        else if(element < str[mid])
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return -1;
}
int main()
{
    string str[] = {"ai", "", "", "bat", "", "", "cat", "cow", "", "", "dog", ""};
    int n = 12;
    string element;
    cin >> element;
    int index = sparseSearch(str, n, element);
    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}