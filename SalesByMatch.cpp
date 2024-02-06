#include <bits/stdc++.h>
using namespace std;

int sockMerchant(int n, vector<int> ar)
{
    int count = 0, Pair = 0;
    for (int i = 0; i < n; i++)
    {
        int arr;
        cin >> arr;
        ar.push_back(arr);
    }
    vector<int> tmp(n);
    for (int i = 0; i < ar.size(); i++)
    {
        for (int j = 0; j < ar.size(); j++)
        {
            if (ar.at(i) == ar.at(j))
            {
                count++;
                tmp[j] = 0;
            }
        }
        tmp[i] = count;
        count = 0;
    }
    for (int i = 0; i < n; i++)
        Pair += (tmp[i] / 2);
    // cout<<"In";
    cout << Pair;
    return 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar;
    sockMerchant(n, ar);
    return 0;
}
