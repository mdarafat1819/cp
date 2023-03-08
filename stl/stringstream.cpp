#include <bits/stdc++.h>

using namespace std;

int countWords(string str) {
    int cnt = 0;
    stringstream ss;
    ss << str;
    string s;
    while(ss >> s) cnt++;
    return cnt;
}

int main() {
    cout<<countWords("Hello World");
    return 0;
}