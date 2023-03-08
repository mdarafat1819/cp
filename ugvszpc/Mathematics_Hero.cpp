#include <bits/stdc++.h>

#define SIZE 2000001
#define MOD 1000000007

using namespace std;
long long pod[SIZE];
int main()
{
    long long a, b; 
    cin>>a>>b; 
    long long sum = 0;
    for(long long i = 1; i <= b; i++) {
        pod[i] = 1;
    }
     
    for(long long i = 1; i <= b; i++) {
        for(long long j = i; j <= b; j += i) {
            pod[j] = (pod[j] * i);
            pod[j] = pod[j] % MOD;
        }
    }
    for(long long i = a; i <= b; i++) {
        sum += pod[i];
        sum = sum % MOD;
    }
    cout<<sum<<endl;
    return 0;
}