#include<bits/stdc++.h>
using namespace std;
main()
{
    double n,m,a,x,y;
    while(cin>>n>>m>>a)
   {
        x=ceil(n/a);
        y=ceil(m/a);
        cout<<(long long)x*(long long)y<<endl;
   }
}
