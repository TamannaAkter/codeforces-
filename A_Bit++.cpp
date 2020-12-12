#include<bits/stdc++.h>
using namespace std;
int main(){

int n,sum=0;
string s;
cin>>n;
while(n--)
{
    cin>>s;
    for(int i=0;i<3;i++)
    {
        if((s[i]=='+' && s[i+1]=='+' && s[i+2]=='X') || (s[i]=='X' && s[i+1]=='+' && s[i+2]=='+'))
             sum+=1;
        else if ((s[i]=='-' && s[i+1]=='-' && s[i+2]=='X') || (s[i]=='X' && s[i+1]=='-' && s[i+2]=='-'))
             sum-=1;
    }
}
cout<<sum<<endl;
}
