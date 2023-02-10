#include <bits/stdc++.h>

using namespace std;
string minWindow(string s, string t)
{

    // declare window variables
    int i = 0, j = 0;

    int len = INT_MAX; // to store the length of minimum window
    int startIdx = 0;
    string result; // finally return  s.substr(startIdx,len)

    // create freq. map
    unordered_map<char, int> mp;
    for (int i = 0; i < t.length(); i++)
        mp[t[i]]++;

    int count = mp.size(); // unique no of char

    while (j < s.length())
    {
        // do calculation

        if (mp.find(s[j]) != mp.end())
        {
            mp[s[j]]--;
            if (mp[s[j]] == 0)
                count--;
        }

        if (count > 0) // we still have unique char left ,so slide j
            j++;

        else if (count == 0) // when all unique char are used , count == 0 , we have a candidate
        {
            if (j - i + 1 < len) // if we get a smaller window size , update min len and derive ans
            {
                len = min(len, j - i + 1);
                startIdx = i;
                result = s.substr(startIdx, len);
            }

            while (count == 0) // trying to minimize the window size even after getting a potential candidate
            {
                if (mp.find(s[i]) == mp.end()) // couldn't find in freq map , we can remove the char safely
                {
                    i++;

                    if (j - i + 1 < len) // if we get a smaller window size , update min len and derive ans
                    {
                        len = min(len, j - i + 1);
                        startIdx = i;
                        result = s.substr(startIdx, len);
                    }
                }

                else // if found in map , increment the frq of char
                {
                    mp[s[i]]++;
                    if (mp[s[i]] == 1) // we only need to increment the count  when freq become one , we dont have an ans here
                    {
                        i++;
                        count++;
                    }
                    else // have extra char left , we can remove the char safely
                    {
                        i++;
                        if (j - i + 1 < len) // if we get a smaller window size , update min len and derive ans
                        {
                            len = min(len, j - i + 1);
                            startIdx = i;
                            result = s.substr(startIdx, len);
                        }
                    }
                }
            }
            j++;
        }
    }

    return (len == INT_MAX ? "" : result);
}
int main()
{
    string s = "totmtaptat";
    string s1 = "tta";
    cout << minWindow(s, s1);
    return 0;
}