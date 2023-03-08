#include <bits/stdc++.h>

using namespace std;


typedef struct activity Activity;

struct activity {
    int st, ft, idx;
};

//struct cmp {
//    bool operator() (const Activity &a, const Activity &b) {
//        return a.ft < b.ft;
//    }
//};
bool cmp (const Activity &a, Activity &b) {
    return a.ft < b.ft;
}

int main()
{
    int number_of_activity;

    cin>>number_of_activity;

    Activity activity[number_of_activity];

    for(int i = 0; i < number_of_activity; i++) {
        cin>>activity[i].st>>activity[i].ft;
        activity[i].idx = i + 1;
    }

    //sort(activity, activity + number_of_activity, cmp );
    sort(activity, activity + number_of_activity, cmp);

    int i = 0, j = 1;

    cout<<activity[0].idx<<" ";

    while(j < number_of_activity) {
        if(activity[i].ft <= activity[j].st) {
            cout<<activity[j].idx<<" ";
            i = j;
        }
        j++;
    }


    return 0;
}
