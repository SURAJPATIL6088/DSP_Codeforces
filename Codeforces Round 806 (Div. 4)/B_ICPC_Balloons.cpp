#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string str;
        cin>>str;

        // count the occurence of each character in the map
        unordered_map<char, int>ump;
        for(int i=0; i<n; i++)
        {
            ump[str[i]]++;
        }

        int counter = 0;
        int size= ump.size();
        for(auto it : ump)
        {
            counter += it.second;
        }

        cout<<(counter + size)<<endl;
    }

    
    return 0;
}