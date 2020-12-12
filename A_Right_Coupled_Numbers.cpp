#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x,a,b,ans;
    cin>>n;
    while(n--)
    {
        cin>>x;
        ans=0;
        for(int i=1; i<=sqrt(x); i++)
        {
            if(x%i==0.0)
            {
                a=x/i;

                if((float)i/a>=0.5)
                {
                    ans=1;

                }


            }
        }
        cout<<ans<<endl;

    }
}
