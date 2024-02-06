#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 6;
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= 0; j--)
            if (i <= j)
                cout << " ";
            else
                cout << "#";
        cout << endl;
    }
}