#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1692/problem/A

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b, c, d;
        cin>>a>>b>>c>>d;

        int front = 0;
        
        // b
        if(a < b)
        {
            front++;
        }

        // b
        if(a < c)
        {
            front++;
        }

        // b
        if(a < d)
        {
            front++;
        }

        cout<<front<<endl;
    }

    return 0;
}