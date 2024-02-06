#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<long> vec;
    long arr, n = 5;
    for (auto i = 0; i < n; i++)
    {
        cin >> arr;
        vec.insert(vec.begin() + i, arr);
    }
    cout << "\nVector ELements\n";
    for (auto i : vec)
        cout << i << "\t";

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr;
    //     vec.push_back(arr);
    // }
    long max = 0, min = INT32_MAX;
    // cout << (min < 0) << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        if (min > vec[i])
        {
            min = vec[i];
        }
        if (max < vec[i])
        {
            max = vec[i];
        }
    }
    int a = 0;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] == vec[i + 1])
            a++;
    }
    // cout << "{" << a << "}" << endl;
    long res1 = 0;
    long res2 = 0;
    int b = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (a == 4)
        {
            res1 += vec[i];
            b++;
            if (a == b)
                break;
        }
        else
        {
            if (max == vec[i])
            {
                continue;
            }
            else
                res1 += vec[i];
        }
    }
    b = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (a == 4)
        {
            res2 += vec[i];
            b++;
            if (a == b)
                break;
        }
        else
        {
            if (min == vec[i])
            {
                continue;
            }
            else
                res2 += vec[i];
        }
    }
    cout << res1 << " " << res2;
}