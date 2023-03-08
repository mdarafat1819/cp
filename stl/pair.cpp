#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int>a, pair<string, int>b) {
    
   return false;

}

int main() {
    pair<string, int>students[10];

    students[0] = {"18ICTCSE001", 120};
    students[1] = {"18ICTCSE013", 200};
    students[2] = {"18ICTCSE004", 270};
    students[3] = {"18ICTCSE018", 320};
    students[4] = {"18ICTCSE010", 320};
    sort(students, students + 5, cmp);
    for(int i = 0; i < 5; i++) {
        cout<<i + 1<<" "<<students[i].first<<" "<<students[i].second<<endl;
    }
    return 0;
}