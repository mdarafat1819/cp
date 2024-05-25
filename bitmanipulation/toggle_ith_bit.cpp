#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 13, i = 2;
    //0-based index
    int res = n ^ (1 << i);

    cout<<res<<endl;
    return 0;
}