#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int bottom = matrix.size() - 1;
    int right = matrix[0].size() - 1;
    int top = 0, left = 0;
    vector<int> result;

    while (top <= bottom && left <= right)
    {
        for (int i = top; i <= right; i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;
        for (int j = top; j <= bottom; j++)
        {
            result.push_back(matrix[j][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int k = right; k >= left; k--)
            {
                result.push_back(matrix[bottom][k]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int h = bottom; h >= top; h--)
            {
                result.push_back(matrix[h][left]);
            }
            left++;
        }
    }
    for (int x : result) {
        cout << x << " ";
    }
}
