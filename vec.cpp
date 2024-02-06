#include <bits/stdc++.h>

using namespace std;

void compareTriplets(int arr1[], int arr2[], int result[])
{
    result[0] = 0;
    result[1] = 0;
    for (int i = 0; i < 3; i++)
    {
        if (arr1[i] > arr2[i])
        {
            result[0] += 1;
        }
        if (arr1[i] < arr2[i])
        {
            result[1] += 1;
        }
    }
    cout << result[0] << " " << result[1];
}

int main()
{
    int arr1[3], arr2[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> arr2[i];
    }
    int result[2];
    compareTriplets(arr1, arr2, result);
    return 0;
}
