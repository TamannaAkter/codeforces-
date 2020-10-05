#include<iostream>
using namespace std;
main()
{
    unsigned long long n,p,x,y,sum=0,avg,ans;
    unsigned long long m=1000000007;
    cin>>n;
    p=n;
    while(n--)
    {
        cin>>x>>y;
        ans=((x%m)*(inv(y)%m)+m)%m;
        sum=sum+ans;
    }
    avg=sum/p;
    cout<<avg<<endl;
}
