#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    int l,i;
    cin>>s;
    l=s.length();
    for(i=0; i<l; i++)
    {
        if(s[i]=='.')
            cout<<"0";
        else if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<"1";
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<"2";
            i++;
        }

    }
    cout<<endl;
}
