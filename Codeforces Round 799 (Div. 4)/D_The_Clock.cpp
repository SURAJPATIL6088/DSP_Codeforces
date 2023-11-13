#include<bits/stdc++.h>
using namespace std;

// https://codeforces.com/contest/1692/problem/D

// Observations From the Tutorials
// 1. convert the given string (HH:MM) in minutes
// 2. convert time (HH:MM) to minutes format.
// 3. then add the x time in above converted minutes
// 4. store all the minutes in set
// 5. then check the set values with the palindrome minutes 


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string time;
        cin>>time;

        int x;
        cin>>x;

        // for HH:MM to minutes
        int format[5]= {600, 60, 0, 10, 1};

        // set of the minutes when the palindrome occurs
        int palin_minutes[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

        int total_time = 0;
        
        for(int i=0; i<5; i++)
        {
            total_time += (int)(time[i] - '0') * format[i];
        }

        set<int>st;
        // calculate the minutes by adding the x minutes
        for(int i= 0; i<1440; i++)
        {
            st.insert(total_time);
            total_time += x;
            total_time %= 1440;
        }

        // check in the set of palindrome minutes if there then count
        int counter = 0;
        for(auto i : st)
        {
            for(int j =0; j<16; j++)
            {
                if(palin_minutes[j] == i)
                {
                    counter++;
                }
            }
        }

        cout<<counter<<endl;
    }
    
    return 0;
}