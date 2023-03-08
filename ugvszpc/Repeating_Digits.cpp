#include <bits/stdc++.h>

using namespace std;

string toString(int n) {
    stringstream ss;
    ss << n;
    string res;
    ss >> res;
    return res;
}

string resultForRepeatedReminder(int a, int b, int repeated_rem) {
    string res;
    res += "(";
    int rem = repeated_rem;
    while(1) {
        for(int i = 1; rem < b; i++) {
            rem *= 10;
            if(i != 1) res += "0";
        }
        res += toString(rem / b);
        rem = rem % b; 
        if(rem == repeated_rem) break;
    }
    res += ")";
    return res;
}
int main()
{
    int p;
     cin>>p;
     while(p--) {
    map<int, int> reminders;
    int a, b, temp_a, temp_b;
    cin >> a >> b;
    int repeated_rem;
    temp_a = a;
    temp_b = b;
    while (1)
    {
        int rem = temp_a % temp_b;
        if (reminders[rem] || !rem)
        {
            repeated_rem = rem;
            break;
        }
        else
        {
            reminders[rem]++;
            while (rem < temp_b)
                rem *= 10;
            temp_a = rem;
        }
    }
    if(repeated_rem == 0) {
        if(!(a % b))
        cout<<a / b<<".0"<<endl;
        else cout<<(double)a / b<<endl;
    }
    else{
        string res;
        res += toString(a / b);
        res.push_back('.');
        int rem = a % b;
        if(rem == repeated_rem) res += resultForRepeatedReminder(a, b, rem);
        else {
            while(1) {
                //cout<<"Hello";
                for(int i = 1; rem < b; i++) {
                    rem *= 10;
                    if(i != 1) res += "0";
                }
                res += toString(rem / b);
                rem = rem % b;
                if(rem == 0) break;
                if(rem ==  repeated_rem) {
                    res += resultForRepeatedReminder(a, b, rem);
                    break; 
                }
            }
        }
        cout<<res<<endl;
    }
     }
    return 0;
}