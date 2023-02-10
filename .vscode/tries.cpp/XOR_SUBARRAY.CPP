#include <bits/stdc++.h>

using namespace std;
class TrieNode
{
public:
    TrieNode *next[2];
    TrieNode()
    {
        next[0] = NULL;
        next[1] = NULL;
    }
};
TrieNode *buildtrie(vector<int> &a)
{
    int n = a.size();
    TrieNode *root = new TrieNode();
    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        TrieNode *curr = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (curr->next[bit] == NULL)
            {
                curr->next[bit] = new TrieNode();
            }
            curr = curr->next[bit];
        }
    }
    return root;
}
int helper(TrieNode *root, vector<int> &a)
{
    int res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int num = a[i];
        TrieNode *it = root;
        int currmax = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = ((num >> i) & 1) ? 0 : 1;
            if (it->next[bit])
            {
                currmax <<= 1;
                currmax |= 1;
                it = it->next[bit];
            }
            else
            {
                currmax <<= 1;
                currmax |= 0;
                it = it->next[bit xor 1];
            }
        }
        res = max(res, currmax);
    }

    return res;
}
int main()
{
    vector<int> a = {3, 10, 5, 15, 2};
    TrieNode *root = buildtrie(a);
    cout << helper(root, a);
    return 0;
}