#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,countt=0,a[10]= {4,7,47,74,447,744,477,774,474,747};
    cin>>n;
    for(i=0; i<10; i++)
    {
        if(n==a[i] || n%a[i]==0)
        {
            cout<<"YES"<<endl;
            break;
        }
        else
            countt++;
    }
    if(countt==10)
        cout<<"NO"<<endl;
}
