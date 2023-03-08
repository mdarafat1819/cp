#include <bits/stdc++.h>

#define M 10000000

using namespace std;

int cnt = 0;

long long bigMod(long long base, long long pow) {
    cnt++;
    if(pow == 0) return 1 % M;
    long long x = bigMod(base, pow / 2);
    x = (x * x) % M;
    if(pow % 2) x = (x * base) % M;
    return x;
}

int main() {

    cout<<bigMod(0, 3)<<endl;
    cout<<cnt<<endl;
    return 0;
}