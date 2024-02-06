#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pos = 0, neg = 0, zero = 0;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos++;

        if (arr[i] < 0)
            neg++;

        if (arr[i] == 0)
            zero++;
    }
    cout << setprecision(7) << pos / n << endl
         << neg / n << endl
         << zero / n;
}