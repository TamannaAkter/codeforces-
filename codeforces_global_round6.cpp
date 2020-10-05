#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,f,x;
    cin>>a>>b>>c>>d>>e>>f;
    if(e<f)
    {
     if(b<=c && b<=d)
        cout<<(f*b)<<endl;
     else if(c<=b && c<=d)
        cout<<(f*c)<<endl;
     else
        cout<<(f*d)<<endl;
    }
    if(e>f)
    {
        if(a<=d)
            cout<<(e*a)<<endl;
        else
            cout<<(e*d)<<endl;
    }


    return 0;
}
