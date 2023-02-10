#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums1 = {1, 6, 9, 10};
    vector<int> nums2 = {5, 6, 7};
    vector<int> vec(nums1.size() + nums2.size());
    int i = 0;
    int j = 0;
    int k = 0;
    int n = nums1.size();
    int m = nums2.size();
    while (i < n && j < m)
    {
        if (nums1[i] < nums2[j])
        {
            vec[k] = nums1[i];
            k++;
            i++;
        }
        if (nums2[j] < nums1[i])
        {
            vec[k] = nums2[j];
            k++;

            j++;
        }
        if (nums2[j] == nums1[i])
        {
            vec[k] = nums2[j];
            k++;
            vec[k] = nums1[i];
            k++;
            i++;
            j++;
        }
    }
    while (i < n)
    {
        vec[k] = nums1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        vec[k] = nums2[j];
        k++;

        j++;
    }
    for (auto i : vec)
    {
        cout << i << endl;
    }
    return 0;
}