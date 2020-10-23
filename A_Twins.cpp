#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,a[100],sum=0,ans=0,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    sum/=2;
    while(ans<=sum)
    {
        ++cnt;
        ans+=a[n-cnt];
    }
    cout<<cnt<<endl;

}
