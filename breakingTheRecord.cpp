#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> scores;
    for (int i = 0; i < n; i++)
    {
        int arr;
        cin >> arr;
        scores.push_back(arr);
    }
    int score1 = 0, score2 = 0, max = 0, min = INT32_MAX;
    for (int i = 0; i < scores.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (scores[j] < scores[i] && scores[j] > max)
            {
                cout << scores[i] << endl;
                max = scores[i];
                score1++;
            }
            int lower = scores[0];
            if (scores[i] < lower && scores[i] < min)
            {
                // cout << "\t" << scores[i] << " " << i << endl;
                min = scores[i];
                score2++;
            }
        }
    }
    cout << score1 << " " << score2;
}