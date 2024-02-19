#include<bits/stdc++.h>
using namespace std;

// Problem Constraints
// For the sound to be a meowing, the string can only contain the letters 'm', 'e', 'o' and 'w', in either uppercase or lowercase. Also:

// string must start with non-empty sequence consisting only of characters 'm' or 'M'
// it must be immediately followed by non-empty sequence consisting only of characters 'e' or 'E'
// it must be immediately followed by non-empty sequence consisting only of characters 'o' or 'O'
// it must be immediately followed by non-empty sequence consisting only of characters 'w' or 'W', this sequence ends the string, after it immediately comes the string end

int main()
{
    int testcase;
    cin>>testcase;

    while(testcase--)
    {
        int n;
        cin>>n;

        string str;
        cin>>str;

        /*for (int i = 0; i < str.length(); ++i) 
        {
            str[i] = tolower(str[i]);
        }*/

        // We can use the Transform stl function to convert in the lower case
        transform(str.begin(), str.end(), str.begin(), ::tolower);

        str.erase(unique(str.begin(), str.end()), str.end());
        cout<<(str == "meow" ? "YES" : "NO")<<endl;
    }
    
    return 0;
}