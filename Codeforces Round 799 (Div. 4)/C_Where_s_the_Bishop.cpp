#include<bits/stdc++.h>
using namespace std;

// cout<<"Find the Position of the BISHOP in chess board"<<endl;
// https://codeforces.com/contest/1692/problem/C

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        // get the chess board
        char chess[9][9];

        for(int i=1; i<= 8; i++)
        {
            for(int j =1; j<= 8; j++)
            {
                cin>>chess[i][j];
            }
        }

        // perform the operations
        // For the Operations we have to move the in the Four diagonals direction in one level
        // 1. check wheather we are standing there is the position of the Bishop
        // 2. check in the upper left diagonal
        // 3. check in the upper right diagonal
        // 4. check in the bottom left diagonal
        // 5. check in the bottom right diagonal

        // for row
        for(int i=1; i<= 8; i++)
        {
            for(int j =1; j<= 8; j++)
            {
                // check valid condition
                if(chess[i][j]=='#' && chess[i-1][j-1]=='#' && chess[i+1][j-1]=='#' && chess[i-1][j+1]=='#' && chess[i+1][j+1]=='#')
                {
                    // print the position of the bishop
                    cout<<i<<" "<<j<<endl;
                }
            }            
        }
    }
    
    return 0;
}