#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    int ans=0,l =s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='H')
           {
               ans=1;
               break;
           }
        else if(s[i]=='Q')
           {
               ans=1;
               break;
           }
        else if(s[i]=='9')
           {
               ans=1;
               break;
           }
    }


    if(ans==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

