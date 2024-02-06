#include <iostream>
#include <string>
using namespace std;
// Couldn't solved thhis question broooo !!!
int main()
{
    int a[] = {2, 6};
    int b[] = {24, 36};
    int c[1000];
    int a1 = 2, b1 = 2;
    for (int i = a[a1 - 1]; i <= b[0]; i++)
    {
        for (int j = 0; j < a1; j++)
        {
            for (int s = 0; s <= 1; s++)
            {
                if (a[j] % i == 0 && b[j] % i == 0)
                    cout << a[j] << " " << b[j] << " " << i << "\n";
            }
        }
    }
}