#include<bits/stdc++.h>
using namespace std;
main()
{
    long long n,k,mid,ans;
    cin>>n>>k;
    if(n%2==0)
        mid=n/2;
    else
        mid=(n/2)+1;

    if(k<=mid)
        ans=(k*2)-1;
    else
        ans=(k-mid)*2;

    cout<<ans<<endl;
}
