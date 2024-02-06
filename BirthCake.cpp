#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr;
    cin>>n;
    vector<int> vec;
    for(int i = 0; i<n; i++){
        cin >> arr;
        vec.insert(vec.begin() + i, arr);
    }
    long max = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (max < vec[i])
        {
            max = vec[i];
        }
    }
    int count=0;
    for(int i =0; i<vec.size(); i++){
        if(max == vec[i])
        count++;
    }
    cout<<count;    
}