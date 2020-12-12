#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,x,countt,ans=0;
     cin>>n;
     vector<int>a;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        a.push_back(x);
    }
    for(int i=0; i<=n; i++)
    {   countt=1;
        for(int j=i+1; j<n; j++)
        {

            if(a[i]<=a[j])
            {
                countt++;
                i++;
            }
            else
                break;
        }

     if(countt>ans)
        ans=countt;

    }


        cout<<ans<<endl;


}
