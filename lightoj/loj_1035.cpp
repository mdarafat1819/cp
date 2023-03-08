#include <bits/stdc++.h>

using namespace std;

int primes[] = {2, 3, 5, 7};
int prime_fact[101][101];

void solve()
{
    int n, flag = 0;
    cin>>n;
    cout<<n<<" = ";
    for(int i = 2; i <= 100; i++) {
        if(prime_fact[n][i]) {
            if(flag == 0) {
                cout<<i<<" ("<<prime_fact[n][i]<<")";
                flag = 1;
            }
            else cout<<" * "<<i<<" ("<<prime_fact[n][i]<<")";
        }
    }
    cout<<endl;
}

int main()
{
    //freopen("D:\\c++\\cp\\input.txt", "r", stdin);
    //freopen("D:\\c++\\cp\\output.txt", "w", stdout);

    //int t; cin>>t; while(t--)

    for(int i = 2; i <= 100; i++) {
        int curr_num = i;
        for(int j = 0; j < 4; j++) {
            while(!(curr_num % primes[j])) {
                prime_fact[i][primes[j]]++;
                curr_num /= primes[j];
            }
        }
        prime_fact[i][curr_num]++;
    }

    for(int i = 2; i <= 100; i++) {
        for(int j = 2; j <= 100; j++) {
            prime_fact[i][j] += prime_fact[i-1][j];
        }
    }

    cout<<prime_fact[3][3]<<endl;


     int t, cs = 1; cin>>t; while(cs <= t) cout<<"Case "<<cs<<": ", cs++,
     solve();

    return 0;
}