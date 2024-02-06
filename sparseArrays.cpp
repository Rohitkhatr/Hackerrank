#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> matchingString(vector<string> stringList, vector<string> quries)
{
    vector<int> result(quries.size());
    for (int i = 0; i < quries.size(); i++)
    {
        for (int j = 0; j < stringList.size(); j++)
        {
            if (quries[i] == stringList[j])
            {
                result[i]++;
            }
        }
    }
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";

    return result;
}

int main()
{
    vector<string> stringList;
    vector<string> quries;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string arr;
        cin >> arr;
        stringList.push_back(arr);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string arr;
        cin >> arr;
        quries.push_back(arr);
    }
    matchingString(stringList, quries);
}