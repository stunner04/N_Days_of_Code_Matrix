#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        vector<int> ans;
        multimap<int, int> mp; // uses multimap it can have non unique keys.
        for (int i = 0; i < mat.size(); i++)
        {
            int sum1 = 0;
            for (int j = 0; j < mat[0].size(); j++)
            {
                sum1 += mat[i][j];
            }
            // use the sum1 as key and index as value to already sum1 keys get sorted.
            mp.emplace(sum1, i);
        }
        auto it = mp.begin();
        for (int i = 0; i < k; i++)
        {
            ans.push_back(it->second);
            it++;
        }
        return ans;
    }
};

// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/?envType=daily-question&envId=2023-09-18