#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,t,l;
    cin>>n>>t;
    char s[n],temp;
    cin>>s;
    l=strlen(s);
    while(t--)
    {
        for(int i=0; i<(l-1);)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i+=2;
            }
            else
                i++;

        }
    }
    cout<<s<<endl;
}
