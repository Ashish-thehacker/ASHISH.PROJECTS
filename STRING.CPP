#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    // string s1 = "fam";
    // string s2 = "ily";
    // s1.append(s2);
    // cout<<s1<<endl;
    // cout<<s1 +s2<<endl;
    // s1 = s1+ s2;
    // cout<<s1[2]<<endl;
    // cin>>str;
    // string s1(10, 'A');
    // getline(cin, str);
    // cout<<str<<endl;
    // cout<<str;
    // string abc = "adskhiuehjfasl ladsgah lksakdgakshg";
    // abc.clear();
    // cout<<abc;
    // string a = "abc";
    // string b = "abc";
    // cout<< a.compare(b)<<endl;
    // if(!a.compare(b)){
    // cout<<"strings are equal";
    // }
    // a.clear();
    // cout<<a<<endl;
    // if(!a.empty())
    // cout<<"String is empty";
    // string g = "list is mine";
    // g.erase(3, 3);
    // cout<<g;
    // cout<<g.find("mine")<<endl;
    // g.insert(2, "lol");
    // cout<<g<<endl;
    // cout<<g.size()<<endl;
    // cout<<g.length()<<endl;
    string a = "SGSITS.ASHISH";
   /*  for(int i=a.length(); i>=0; i--)
    cout<<a[i];    */
    string b = a.substr(6, 7);
    cout<<b<<endl;
    string s = "786";
    int x = stoi(s); 
    // string to integer

    cout<< x+300<<endl;
    cout<< to_string(x) + "2"<<endl;// to string adds number or integer to the string 
    // SORTING 
    string s5 = "asjdgalaeegiohqrg";
    sort(s5.begin(), s5.end()); 
    cout<<s5<<endl;
    // UPPER CASE 
    string str = "ashishdarekar";
    // convert into upper case
   /* for(int i=0;i<str.size();i++){
        if(str[i] >= 'a' &&  str[i] <= 'z')
        str[i] = str[i] - 32;
    }
    cout<<str<<endl;
    */
    string sot = "assign";
    transform(sot.begin(), sot.end(), sot.begin(), :: toupper);
    cout<<sot<<endl;

    // CONVERT INTO LOWER CASE
    /* string st = "ASHISH DAREKAR";
    for(int i=0; i<str.size();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        st[i] += 32;
    }
    cout<<st<<endl;
    */
    string sf = "ASSIGN";
    transform(sf.begin(),sf.end(),sf.begin(), :: tolower);
    cout<<sf<<endl;

    // NUMERIC STRING IN DECREASING ORDER 
    string t = "9685433481";
    sort(t.begin(), t.end(), greater<int>());
    cout<<t<<endl;
    sort(t.begin(), t.end() );
    cout<<t<<endl;
    // counting the frequency of the array
    string ash = "aaashish";
    int freq[26]; //initialize the array
    // iterate over the array
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }
    // moving through starting to ending point and increasing the frequency of the array
    // it works like counting loop
    for(int i=0;i<ash.size();i++){
        freq[ash[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    
    for(int i=0;i<26;i++)
    {
        if(freq[i] >= maxF){
            maxF = freq[i];
            ans = i + 'a';
        }
    }
     cout<<maxF<<" "<<ans<<endl;
return 0;
}