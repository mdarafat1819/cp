#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 10, i = 2;
    /*Using Left Shift*/
    //0 based index from right side
    //i-th bit is set bit when res is non-zero value
    //int res = n & (1 << i);

    /*Using Right Shift*/
    //1-based index from right side
    //i-th bit is set bit when res return 1
    int res = n >> (i - 1) & 1;

    cout<<res<<endl;
    return 0;
}