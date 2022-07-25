#include <bits/stdc++.h>
using namespace std;

int main()
{
    // converting the string to lower to upper case
    // string s = "ajdalksjg";
    // for (int i = 0; i < s.length(); i++)
    // {
    // if (s[i] >= 'a' && s[i] <= 'z')
    // s[i] -= 32;
    // }
    // cout << s << endl;
    // cout << 'a' - 'A' << endl;
    // converting the string to lower case
    // for(int i=0;i<s.size();i++){
    // if(s[i] >= 'A'  && s[i] <= 'Z')
    // s[i] += 32;
    // }
    // cout<<s<<endl;
    // USING BUILT IN FUNCTION TO UPPER AND LOWER THE FUNCTIONS
    // string st = "ashish";
    // transform(st.begin(), st.end(), st.begin(), :: toupper);
    // cout<<st<<endl;
    // transform(st.begin(),st.end(), st.begin(), :: tolower);
    // cout<<st<<endl;
    // FINDING THE GREATEST OF THE STRING
    // string str = "9685433481";
    // sort(str.begin(), str.end(), greater<int>());
    // cout<<str<<endl;
    // sort(str.begin(), str.end());
    // cout<<str<<endl;
    string s = "ashishhhhdarekar";
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    return 0;
}