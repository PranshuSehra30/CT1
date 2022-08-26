#include <bits/stdc++.h>
using namespace std;
int main()
{
 // try catch block  to handle errors
    try {
//   number of elemnts in array
     int n;
    cin >> n;
    int arr[n];
//      taking array intput
    for (auto &it : arr)
        cin >> it;
//  creatinng a map of int to vector<int> to store the locations of previous sum
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
        
        
        
    }
    catch () {
 
    }
   

    return 0;
}
