#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, t;

    cin>>n>>t;

    long long time[n];
    for(int i = 0; i < n; i++) cin>>time[i];

    long long left = 1, mid, right, maked = 0, mx = 0; 

    for(int i = 0; i < n; i++) {
        if(mx < time[i]) mx = time[i];
    }
    
    right = t * mx;

    while(left < right) {
        //cout<<"Hello"<<endl;
        maked = 0;
        mid = left + (right - left) / 2;
        for(int i = 0; i < n; i++) {
            maked += (mid/ time[i]);
        }
       // if(maked == t) {
          //  right = mid;
          //  break;
      //  }
        if(maked < t) left = mid + 1;
        else right = mid;
    }
    cout<<right<<endl;

    return 0;
}