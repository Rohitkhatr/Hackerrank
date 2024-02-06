#include <bits/stdc++.h>

using namespace std;

void countingDistanse(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    for (int i = 0; i < apples.size(); i++)
        apples[i] += a;

    for (int i = 0; i < apples.size(); i++)
        oranges[i] += b;

    for (int i = 0; i < apples.size(); i++)
    {
        if (apples[i] >= s && apples[i] <= t)
            cout << apples[i]<<endl;
    }

    for (int i = 0; i < oranges.size(); i++)
    {
        if (oranges[i] >= s && oranges[i] <= t)
            cout << oranges[i]<<endl;
    }
}

int main()
{
    int s, t, a, b, m, n, arr;
    cin >> s >> t >> a >> b >> m >> n;
    vector<int> apples;
    vector<int> oranges;
    for (int i = 0; i < m; i++)
    {
        cin >> arr;
        apples.push_back(arr);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr;
        oranges.push_back(arr);
    }
    countingDistanse(s, t, a, b, apples, oranges);
    return 0;
}
