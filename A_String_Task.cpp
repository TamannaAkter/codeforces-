#include<bits/stdc++.h>
using namespace std;
main()
{
    char str[101];
    int l,i;
    cin>>str;
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!= 'Y' && str[i]!= 'y' && str[i]!= 'A' && str[i]!='a' && str[i]!='E' && str[i]!='e' && str[i]!='I' && str[i]!='i' && str[i]!='O' && str[i]!='o' && str[i]!='U' && str[i]!='u')
        {
            if(str[i]<='Z')
            {
                str[i]+=32;

            }cout<<"."<<str[i];
        }

    }
    cout<<endl;

}
