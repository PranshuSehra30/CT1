#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (auto &it : arr)
        cin >> it;

    map<int, vector<int>> m;
    int sum = 0;
    m[0] = {-1};

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        for (auto ind : m[sum])
        {
            for (int j = ind + 1; j <= i; j++)
            {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        m[sum].push_back(i);
    }

    return 0;
}
