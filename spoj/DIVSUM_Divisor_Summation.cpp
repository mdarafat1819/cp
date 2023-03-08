#include <bits/stdc++.h>

#define SIZE 500001

using namespace std;

vector <int>primes;
bool marked[SIZE];

void sieve()
{
    for(int i = 3; i * i < SIZE; i += 2)
    {
        if(!marked[i])
            for(int j = i * i; j < SIZE; j += 2 * i)
                marked[j] = true;
    }
    primes.push_back(2);
    for(int i = 3; i < SIZE; i += 2)
        if(!marked[i]) primes.push_back(i);
}
int SOD(int n)
{

    int sum = 1, t_sum = 1, r = sqrt(n) + 1, p, tem_n = n;
    for(int i = 0; i < primes.size() && primes[i] <= r; i++)
    {
        t_sum = 1;
        if(!(n % primes[i]))
        {
            p = 1;
            while(!(n % primes[i]))
            {
                p *= primes[i];
                t_sum += p;
                n /= primes[i];
            }
        }
        sum *= t_sum;
        r = sqrt(n) + 1;
    }
    if(n > 1) sum *= (n + 1);
    return sum - tem_n;
}
int main()
{
    sieve();
    int t, num;
    cin>>t;
    while(t--) {
        cin>>num;
        cout<<SOD(num)<<endl;
    }
    return 0;
}