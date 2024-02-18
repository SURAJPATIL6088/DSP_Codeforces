#include <bits/stdc++.h>
using namespace std;

// using sort method
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        string name = "Timur";
        sort(name.begin(), name.end());

        sort(str.begin(), str.end());

        if(name == str)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}