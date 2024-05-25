#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 9;
    //0-based index
    int res = (n - 1) & n;

    cout<<res<<endl;
    return 0;
}