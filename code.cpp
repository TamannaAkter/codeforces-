#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k1,k2,a[100],b[100],sum,sum1;
    cin>>t;
    while(t--)
    {
        sum=0;
        sum1=0;
        cin>>n>>k1>>k2;
        for(int i=0;i<k1;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<k2;i++)
        {
            cin>>b[i];
            sum1+=b[i];
        }
        if(sum>sum1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
