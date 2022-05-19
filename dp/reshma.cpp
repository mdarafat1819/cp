#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main()
{
    int tc,kk=1;
    cin>>tc;
    while(tc--)
    {
        ll n,m,ans=0,i,j,k,l,b=0;
        string s;
        cin>>n;
        ll a[n],nn=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)nn++;
        }
        for(i=0;i<n;i++)
        {
            if(i<nn)a[i]=(-1)*abs(a[i]);
            else a[i]=abs(a[i]);
        }
        if(std::is_sorted(a,a+n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}