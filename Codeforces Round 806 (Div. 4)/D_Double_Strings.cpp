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

        string str[n];
        map<string, bool>mp;

        // store each string in the map 
        // it will only store the unique occurences of the string
        for(int i=0; i<n; i++)
        {
            cin>>str[i];
            mp[str[i]] = true;
        }

        // make the main string in the sub-parts upto the particular length
        for(int i =0; i<n; i++)
        {
            bool check = false;
            for(int j =1 ; j<str[i].length(); j++)
            {
                // if string str = abab
                // prefix_part = ab  (0, j)
                // suffix_part = ab  (j, str[i].len-j)
                string prefix_part = str[i].substr(0, j);
                string suffix_part = str[i].substr(j, str[i].length()-j);

                // check there is already present the preffix and suffix part if there then set as true
                if(mp[prefix_part] && mp[suffix_part])
                {
                    check = true;
                }
            }

            // print the result
            cout<<check;
        }

        cout<<endl;
    }
    
    return 0;
}