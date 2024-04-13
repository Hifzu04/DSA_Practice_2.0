/*
 onsider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

Example 1:

Input:
N = 4
m[][] = {{1, 0, 0, 0},
{1, 1, 0, 1},
{1, 1, 0, 0},
{0, 1, 1, 1}}
Output:
DDRDRR DRDDRR

algorithm :
for each position, we can go any dirxn using recursion .
condition for the path to move : 1)posn inside the matrix, 2) posn[j][k] ==1 3) cant not get back or up if visited. otherwise infinit loop.
*/

#include <iostream>
#include <vector>
using namespace std;

bool conditioning(vector<vector<int>> input, int vistied[][], int startX, int startY)
{
    if (startX < 0 || startY < 0 || input[startX][startY] == 0 || vistied[startX][startY] == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

ratMovement(vector<vector<int>> input, int vistied[][], string output, int startX, int startY, vector<string> &outputVector)
{

    // initially rat is at 0,0

    // base case
    if (startX == input.size() - 1 and startY == input.size() - 1)
    {
        outputVector.push_back(output);
        return;
    }

    // left movement
    int newX = startX - 1;
    int newY = startY;
    if (conditioning((input, vistied[][], newX, newY)))
    {
    }    //fcukkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk

    if (condition == true)
    {
        // left movement
        ratMovement(input, vistied, output, startX - 1, startY, outputVector);
        output += 'L';
        vistied[startX][startY] = 1;
    }
}

int main()
{

    vector<vector<int>> input{
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
    // create a visited vector with all elment zero for condition 3 of algorithm.
    int visited[input.size() + 1][input.size() + 1] = {0};

    string output = " ";
    int startX = 0;
    int startY = 0;
    vector<string> outputVector;

    ratMovement(input, visited, output, startX, startY, tempVector)
}