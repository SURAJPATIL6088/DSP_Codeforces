#include<bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    if(s[0] != 'y' && s[0] != 'Y')
    {
        return false;
    }
    else if(s[1] != 'e' && s[1] != 'E')
    {
        return false;
    }
    else if(s[2] != 's' && s[2] != 'S')
    {
        return false;
    }

    return true;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        if(isValid(str))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}