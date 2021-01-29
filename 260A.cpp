#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,n,i;
    bool flag=true;
    cin>>a>>b>>n;
    for(int i=0;i<=9;i++)
    {
        long long int x=a*10+i;
        if(x%b==0)
        {
            flag=false;
            cout<<x;
            break;
        }
    }
    if(flag)
    cout<<-1;
    else
    {
        for(int i=2;i<=n;i++)
        cout<<0;
    }
    
}