#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Count(vector<vector<int>> &m)
    {

        int zeroCount = 0, evenCount = 0;

        for (int i = 0; i < m.size(); i++)
        {
            for (int j = 0; j < m[0].size(); j++)
            {
                zeroCount = 0;
                if (m[i][j] == 1)
                {
                    if ((j + 1 < m[0].size()) && m[i][j + 1] == 0)
                        zeroCount++;
                    if ((j - 1 >= 0) && m[i][j - 1] == 0)
                        zeroCount++;
                    if ((i - 1 >= 0) && m[i - 1][j] == 0)
                        zeroCount++;
                    if ((i + 1 < m.size()) && m[i + 1][j] == 0)
                        zeroCount++;
                    if ((i - 1 >= 0 && j - 1 >= 0) && m[i - 1][j - 1] == 0)
                        zeroCount++;
                    if ((i - 1 >= 0 && j + 1 < m[0].size()) && m[i - 1][j + 1] == 0)
                        zeroCount++;
                    if ((i + 1 < m.size() && j - 1 >= 0) && m[i + 1][j - 1] == 0)
                        zeroCount++;
                    if ((i + 1 < m.size() && j + 1 < m[0].size()) && m[i + 1][j + 1] == 0)
                        zeroCount++;
                    if (zeroCount % 2 == 0 && zeroCount != 0)
                    {
                        evenCount++;
                    }
                }
            }
        }
        return evenCount;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        Solution ob;
        int ans = ob.Count(matrix);
        cout << ans << "\n";
    }
    return 0;
}

//https://practice.geeksforgeeks.org/problems/surround-the-1s2505/1