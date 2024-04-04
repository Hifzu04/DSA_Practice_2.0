#include <iostream>
#include <vector>
using namespace std;

void permutationString(string str, int index, vector<string>& finalAns) {
    // Base case: If index reaches the end of the string, add the current permutation to finalAns
    if (index == str.length()) {
        finalAns.push_back(str);
        return;
    }

    for (int i = index; i < str.length(); i++) {
        // Swap characters at index and i
        swap(str[index], str[i]);
        // Recursively generate permutations for the remaining characters
        permutationString(str, index + 1, finalAns);
        // Backtrack: Restore the original string by swapping back
        swap(str[index], str[i]);
    }
}

int main() {
    string str = "abc";
    vector<string> finalAns;
    permutationString(str, 0, finalAns);

    // Output all permutations
    for (const string& permutation : finalAns) {
        cout << permutation << " ";
    }
    cout << endl;

    return 0;
}
