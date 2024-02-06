#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n = 2, tmp = 0, temp;

    vector<int> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";

    for (int j = 1; j <= n; j++)
    {
        temp = arr[0];
        for (int i = 0; i < arr.size() - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[arr.size() - 1] = temp;
    }
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << "\t";
}