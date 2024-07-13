#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n);
bool ratinMaze(int **arr, int x, int y, int n, int **solArr);

int main() {
    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

    int **solArr = new int *[n];
    for (int i = 0; i < n; i++) {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            solArr[i][j] = 0;
        }
    }

    if (ratinMaze(arr, 0, 0, n, solArr)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists." << endl;
    }

    // Cleanup
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        delete[] solArr[i];
    }
    delete[] arr;
    delete[] solArr;

    return 0;
}

bool isSafe(int **arr, int x, int y, int n) {
    return (x < n && y < n && arr[x][y] == 1);
}

bool ratinMaze(int **arr, int x, int y, int n, int **solArr) {
    // Check if (x, y) is the destination
    if (x == n - 1 && y == n - 1) {
        solArr[x][y] = 1;
        return true;
    }

    // Check if it's safe to move to (x, y)
    if (isSafe(arr, x, y, n)) {
        solArr[x][y] = 1; // Mark the cell as part of the solution path

        // Move down
        if (ratinMaze(arr, x + 1, y, n, solArr)) {
            return true;
        }
        
        // Move right
        if (ratinMaze(arr, x, y + 1, n, solArr)) {
            return true;
        }
        
        // Backtrack
        solArr[x][y] = 0;
        return false;
    }

    return false;
}
