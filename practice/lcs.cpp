#include <bits/stdc++.h>

using namespace std;

int lcs_table[100][100];

void lcs(string x, string y, int m, int n) {

   for(int i = 0; i <= m; i++) {
    for(int j = 0; j <= n; j++) {
        if(i == 0 || j == 0) {
            lcs_table[i][j] = 0;
        }
        else if(x[i - 1] == y[j - 1]) {
            lcs_table[i][j] = 1 + lcs_table[i - 1][j - 1];
        }
        else {
            lcs_table[i][j] = max(lcs_table[i - 1][j], lcs_table[i][j - 1]);
        }
    }
   }



   cout<<lcs_table[m][n]<<endl;

   int i = m, j = n, idx = lcs_table[m][n];
   string path(lcs_table[m][n], '\0');

   while(i && j) {
    if(x[i - 1] == y[j - 1]) {
        path[--idx] = x[i - 1];
        i--;
        j--;
    }
    else if(lcs_table[i - 1][j] < lcs_table[i][j - 1]) j--;
    else i--;
   }

   cout<<path<<endl;
}

int main()
{
    string x = "ABCWEDEUY";
    string y = "ZXBWDUYL";

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            lcs_table[i][j] = -1;
        }
    }
    lcs(x, y, x.length(), y.length());
    return 0;
}
