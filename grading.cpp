#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> grades;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr;
        cin >> arr;
        grades.push_back(arr);
    }
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] > 37)
        {
            if ((grades[i] + 2) % 5 == 0 || (grades[i] + 1) % 5 == 0)
            {
                if ((grades[i] + 2) % 5 == 0)
                    cout << (grades[i] + 2) << endl;
                else
                    cout << (grades[i] + 1) << endl;
            }
            else
                cout << grades[i] << endl;
        }
        else
        {
            cout << grades[i] << endl;
        }
    }
    return 0;
}
