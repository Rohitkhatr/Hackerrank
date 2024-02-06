#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char s[10];
    cin>>s;
    if (s[8] == 'A')
    {
        if (s[0] == '1' && s[1] == '2')
            s[0] = s[1] = '0';
    }
    else
    {
        if (s[1] == '8')
        {
            s[0] = '2';
            s[1] = '0';
        }
        else if (s[2] == '9')
        {
            s[0] = '2';
            s[1] = '1';
        }
        else if (!(s[0] == '1' && s[1] == '2'))
        {
            s[0] += 1;
            s[1] += 2;
        }
    }
    s[8] = '\0';
    puts(s);
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string tim = "07:05:45PM";
//     string tim2 = "";
//     string tim3 = "";
//     for (int i = 0; i < tim.length(); i++)
//     {
//         if (tim[i] == ':')
//         {
//             for (int j = i; j < tim.length(); j++)
//             {

//             }
//             break;
//         }
//         else
//             tim2.push_back(tim[i]);
//     }
//     cout << tim2 << endl;
//     cout << tim3;
//     int n = stoi(tim2);
//     n += 12;
//     cout << n;
//     tim2 = to_string(n);
//     cout << tim2;
//     for (int i = 0; i < tim3.length(); i++)
//         tim2.push_back(tim3[i]);
// }