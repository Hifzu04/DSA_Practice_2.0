#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> input, int visited[][4], int startX, int startY) // Corrected array bounds
{
    if (startX < 0 || startY < 0 || input[startX][startY] == 0 || visited[startX][startY] == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void ratMovement(vector<vector<int>> input, int visited[][4], string output, int startX, int startY, vector<string> &outputVector)
{
    // base case
    if (startX == input.size() - 1 and startY == input.size() - 1)
    {
        outputVector.push_back(output);
        return;
    }

    visited[startX][startY] = 1;

    //left movement
    int newX = startX;
    int newY = startY - 1; // Corrected movement
    if (newY >= 0 && isSafe(input, visited, newX, newY))
    {
        output += 'L';
        ratMovement(input, visited, output, newX, newY, outputVector);
        //backtracking
        output.pop_back();
    }

    //right movement
    newX = startX;
    newY = startY + 1; // Corrected movement
    if (newY < input.size() && isSafe(input, visited, newX, newY))
    {
        output += 'R';
        ratMovement(input, visited, output, newX, newY, outputVector);
        //backtracking
        output.pop_back();
    }

    //up movement
    newX = startX - 1; // Corrected movement
    newY = startY;
    if (newX >= 0 && isSafe(input, visited, newX, newY))
    {
        output += 'U';
        ratMovement(input, visited, output, newX, newY, outputVector);
        //backtracking
        output.pop_back();
    }

    //down movement
    newX = startX + 1; // Corrected movement
    newY = startY;
    if (newX < input.size() && isSafe(input, visited, newX, newY))
    {
        output += 'D';
        ratMovement(input, visited, output, newX, newY, outputVector);
        //backtracking
        output.pop_back();
    }

    //empty the visited marks after a path gets fully covered for new path
    visited[startX][startY] = 0;
}


int main()
{
    vector<vector<int>> input{
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
    // create a visited vector with all elment zero for condition 3 of algorithm.
    int visited[input.size() + 1][4] = {0}; // Corrected array bounds

    string output = "";
    int startX = 0;
    int startY = 0;
    vector<string> outputVector;

    ratMovement(input, visited, output, startX, startY, outputVector);

    for (auto element : outputVector)
    {
        cout << element << " ";
    }

    return 0;
}
