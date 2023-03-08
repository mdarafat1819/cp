#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mark;

    mark["18ICTCSE004"] = 20;
    mark["18ICTCSE002"] = 30;
    mark["18ICTCSE008"] = 270;
    mark["18ICTCSE007"] = 390;
    mark["18ICTCSE014"] = 290;
    mark["18ICTCSE012"] = 309;

    sort(mark.begin(), mark.end(), true);
    cout<<mark.size()<<endl;

    for(auto x : mark) cout<<x.first<<" "<<x.second<<endl;

    return 0;
}