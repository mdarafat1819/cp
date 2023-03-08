#include <bits/stdc++.h>

using namespace std;

int main(){


    vector<int>v{1, 2, 3, 4, 5, 4, 4};

    vector<int>::iterator it;

    it = v.begin();
    //it = find(it, v.end(), 4);
    int cnt = 0;

    while(it != v.end()) {
        it = find(it, v.end(), 4);
        it++;
        cnt++;
    }

    
    return 0;
}