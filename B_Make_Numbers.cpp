#include<bits/stdc++.h>
using namespace std;
main()
{
    int a[4],bin=0,dec=0,oct=0,hex=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        if(a[i]>= '0' && a[i]<='1')
            bin=1;

        else if(a[i]>= '0' && a[i]<='7')
            oct=1;
        else if((a[i]>= '0' && a[i]<='9')||(a[i]>='A' && a[i]<='F'))
            hex=1;
    }
    if(bin==1)
    {
     for(int i=0;i<4;i++)
    }
}
