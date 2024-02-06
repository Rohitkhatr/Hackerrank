#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int x1, int v1, int x2, int v2) {
    for(int i = 1; i <= 100000000; i++){
        x1 += v1;
        x2 += v2;
        if(x1 != x2){
            if(i == 100000000)
                cout<<"NO";
            else
                continue;            
        }
        else{
            cout<<"YES";
            break;
        }
    }
    return "Kangaroo";
}

int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    kangaroo(x1, v1, x2, v2);
    return 0;
}
