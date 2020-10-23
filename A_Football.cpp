#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[100];
    int l,i,coun=0,coun1=0;
    cin>>s;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]== '0' && s[i+1]=='0' && s[i+2]== '0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0')
            coun=1;
        else if(s[i]=='1' && s[i+1]=='1' && s[i+2]== '1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1')
            coun1=1;

    }
    if(coun==1 || coun1==1)
    {
        cout<<"YES"<<endl;

    }
    else
        cout<<"NO"<<endl;
}
