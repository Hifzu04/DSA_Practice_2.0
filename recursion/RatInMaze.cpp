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

bool isSafe(vector<vector<int>> input, int visited[][] , int startX, int startY)

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

void ratMovement(vector<vector<int>> input, int visited[][], string output, int startX, int startY, vector<string> &outputVector)
{

    // initially rat is at 0,0

    // base case
    if (startX == input.size() - 1 and startY == input.size() - 1)
    {
        outputVector.push_back(output);
        return;
    }

    
    
    vistied[startX][startY] = 1;


    //left movement
    int newX = --startX;
    int newY = startY;
    bool condition = isSafe((input, visited[][], newX, newY));
    if (condition == true)
    {
        output += 'L';
        
        ratMovement(input, visited, output, newX, newY, outputVector);
        //backtracking
        output.pop_back();
    }


    //right movement
    newX = --startX;
    newY = startY;
    condition = isSafe((input, visited[][], newX, newY));
    if (condition == true)
    {
        
        output += 'R';
        
        ratMovement(input, visited, output, newX, newY, outputVector);
        //backtracking
        output.pop_back();
    }

    //up movement
    newX = startX;
    newY = --startY;
     condition = isSafe((input, visited[][], newX, newY));
    if (condition == true)
    {
        
        output += 'U';
        
        ratMovement(input, visited, output, newX, newY, outputVector);
        //backtracking
        output.pop_back();
    }


    //down movement
    newX = startX;
    newY = ++startY;
    condition = isSafe((input, visited[][], newX, newY));
    if (condition == true)
    {
        
        output += 'D';
        
        ratMovement(input, visited, output, newX, newY, outputVector);
        //backtracking
        output.pop_back();
    }


    //empty the vistied marks after a path gets fully covered for new path 
    vistied[startX][startY] = 0;



    
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

    string output = "";
    int startX = 0;
    int startY = 0;
    vector<string> outputVector;

    ratMovement(input, visited, output, startX, startY, outputVector);

    for(auto element : outputVector){
        cout<<element<<" ";
    }

}