#include <iostream>
using namespace std;
// // const int n = 3;
// int name(int arr[][3], int n)
// {
// }

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << i << "]"
                 << "[" << j << "] -> ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << arr[i][j];
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) == (n - 1))
            {
                cout << arr[i][j];
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || (i + j) == (n - 1))
            {
                cout << arr[i][j] << "  ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    // cout<<arr[0][2]<<" "<<arr[1][1]<<" "<<arr[2][0];
    cout<<(15 - 111);
    return 0;
}