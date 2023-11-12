#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int>vect;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            vect.push_back(val);
        }

        unordered_map<int, int> ump;

        // store in the map
        for (int i = 0; i <n; i++)
        {
            ump[vect[i]]++;
        }

        int len = ump.size();

        // for (auto i : ump)
        // {
        //     cout << i.first << " " << i.second << endl;
        // }

        if ((n-len) % 2 != 0)
        {
            cout<<(len - 1)<<endl;
        }
        else
        {
            cout << len << endl;
        }
    }

    return 0;
}