//first visit ratInMaze.cpp.


#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& input, vector<vector<int>>& visited, int x, int y, int N) {
    return (x >= 0 && x < N && y >= 0 && y < N && input[x][y] == 1 && visited[x][y] == 0);
}

void ratMovement(vector<vector<int>>& input, vector<vector<int>>& visited, string path, int x, int y, int N, vector<string>& output) {
    // If rat reaches the destination
    if (x == N - 1 && y == N - 1) {
        output.push_back(path);
        return;
    }

    // Mark the current cell as visited
    visited[x][y] = 1;

    // Directions: Down, Right, Up, Left
    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    char dir[] = {'D', 'R', 'U', 'L'};

    // Try all possible directions
    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        char newDir = dir[i];

        if (isSafe(input, visited, newX, newY, N)) {
            path.push_back(newDir);
            ratMovement(input, visited, path, newX, newY, N, output);
            path.pop_back(); // Backtrack
        }
    }

    // Mark the current cell as unvisited for other paths
    visited[x][y] = 0;
}

int main() {
    vector<vector<int>> input{
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int N = input.size();
    vector<vector<int>> visited(N, vector<int>(N, 0)); // Initialize visited matrix with zeros

    string path = "";
    vector<string> output;

    ratMovement(input, visited, path, 0, 0, N, output);

    // Print the output paths
    for (const auto& p : output) {
        cout << p << " ";
    }
    
    return 0;
}
