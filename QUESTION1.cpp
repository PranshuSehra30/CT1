#include <bits/stdc++.h>
using namespace std;
int lenOfLongSubarr(int arr[],int n,int k)
{

    unordered_map<int, int> um;
    int sum = 0, maxLen = 0;
    int startIndex = 0, endIndex = 0;

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];

        if (sum == k)
        {
            maxLen = i + 1;
            startIndex = 0;
            endIndex = i;
        }

        if (um.find(sum) == um.end())
            um[sum] = i;

        if (um.find(sum - k) != um.end())
        {

            if (maxLen < (i - um[sum - k]))
            {
                maxLen = i - um[sum - k];
                startIndex = um[sum - k] + 1;
                endIndex = i;
            }
        }
    }

    for (int i = startIndex; i <= endIndex; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return maxLen;
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (auto &it : arr)
        cin >> it;
    int target;
    cin >> target;

    lenOfLongSubarr(arr, n, target);
    return 0;
}
