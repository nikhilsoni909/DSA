#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    node *next[26];
    bool end;
    node()
    {
        for (int i = 0; i < 26; i++)
        {
            next[i] = NULL;
        }
        end = false;
    }
};
class Trie
{
private:
    node *root;

public:
    Trie()
    {
        root = new node();
    }
    void insert(string &s)
    {
        node *it = root;
        for (auto c : s)
        {
            if (!it->next[c - 'a'])
            {
                it->next[c - 'a'] = new node();
            }
            it = it->next[c - 'a'];
        }
        it->end = true;
    }
    void printall(node *it, string s, vector<string> &res, string curr)
    {
        {
            if (it == NULL)
            {
                return;
            }
            if (it->end)
            {
                res.push_back(curr);
            }
            for (int i = 0; i < 26; i++)
            {
                if (it->next[i])
                {
                    printall(it->next[i], s, res, curr + char('a' + i));
                }
            }
        }
    }
    void find(string &s)
    {
        node *it = root;
        for (auto c : s)
        {
            if (!it->next[c - 'a'])
            {
                cout << "no suggestions";
                insert(s);
                return;
            }
            it = it->next[c - 'a'];
        }
        vector<string> res;
        printall(it, s, res, "");
        for (auto c : res)
        {
            cout << s << c << "\n";
        }
    }
};

int main()
{
    Trie t;
    int n;
    cin >> n;
    vector<string> a(n);
    for (auto &i : a)
    {
        cin >> i;
        t.insert(i);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        t.find(s);
    }

    return 0;
}