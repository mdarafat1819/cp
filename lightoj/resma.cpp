#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define N 100
vector<bool> pr(N+1,true);
vector<int>pv;
vector<int>fac[N+1];
int v[105][101];
void sieve()
{
   pv.pb(2);
   for(int i=3;i*i<=N;i+=2)
   {
       if(pr[i])
       {
           for(int j=i*i;j<=N;j+=i)pr[j]=false;
       }
   }
   for(int i=3;i<=N;i+=2) if(pr[i])pv.pb(i);


}

void fact()
{

    memset(v,0,sizeof(v));
    for(int i=2;i<101;i++)
        {
           int x=i;
           for(int j=0;j<101;j++)v[i][j]=v[i-1][j];

           for(int j=0;pv[j]<=x;j++)
           {


               int y=pv[j];
               if(x%y==0)
               {

                   while(x%y==0)
                   {
                      x/=y;

                      v[i][pv[j]]++;
                   }
                  // cout<<i<<"="<<v[i][pv[j]]<<" ";
               }
           }
           //cout<<endl;
        }


}
void print(int n, int Case)
{
    cout<<"Case "<<Case<<": "<<n<<" = ";
    int f=0;
    for(int i=2;i<101;i++)
    {
        if(f==0 && v[n][i]>0)
        {
            cout<<i<<" ("<<v[n][i]<<")";
            f=1;
        }
        else if(v[n][i]>0)cout<<" * "<<i<<" ("<<v[n][i]<<")";
    }
    cout<<endl;
}
int main()
{
    freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    freopen("D:\\c++\\cp\\output.txt", "w", stdout);
    
    sieve();
    fact();
    int t=1,Case=1; cin>>t;
    
    while(t--)
    {
        int n,x;
        cin>>n;
        print(n, Case);
        Case++;

    }
}
