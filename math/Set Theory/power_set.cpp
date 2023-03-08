#include <bits/stdc++.h>

using namespace std;

void powerSet(string str) {
    int sz = str.length();

    for(int len = 1; len <= sz; len++) {
        for(int i = 0; i <= sz - len; i++) {
            for(int j = i; j < i + len; j++) {
                cout<<str[j]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    string arr = "abcd";

    powerSet(arr);

    return 0;
}
