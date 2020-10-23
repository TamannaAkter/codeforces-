#include<bits/stdc++.h>
using namespace std;
main()
{
   string s,x="hello";
   int i,l,j=0,ans=0;
   cin>>s;
   l=s.length();
   for(i=0;i<l;i++)
   {
       if(s[i]==x[j])
       {
           j++;
           ans++;
       }
   }
   if(ans==5)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
