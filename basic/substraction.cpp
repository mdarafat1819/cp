#include <iostream>
#include <cstring>

#define MAX_LEN 81

using namespace std;

void substraction(char num1[], char num2[])
{
    int num1_idx = strlen(num1) - 1;
    int num2_idx = strlen(num2) - 1;
    int res_idx = strlen(num1) - 1;
    int diff, carry = 0, non_zero_idx = res_idx;
    char result[strlen(num1)];

    while(num1_idx >= 0) {

        if(num2_idx >= 0)
            diff = num1[num1_idx--] - (num2[num2_idx--] + carry);
        else diff = num1[num1_idx--] - 48 - carry;

        if(diff < 0) {
            result[res_idx] = 58 + diff;
            carry = 1;
        }
        else {
            result[res_idx] = diff + 48;
            carry = 0;
        }

        if(result[res_idx] != '0') non_zero_idx = res_idx;
        res_idx--;
    }

   for(int i = non_zero_idx; result[i] != '\0'; i++) {
    cout<<result[i];
   }
   cout<<endl;
}

int main()
{

    string a = "123";
    string b = "99";

    if(a == b) cout<<"1"<<endl;
    else if(a < b) cout<<"2"<<endl;
    else if(b < a) cout<<"3"<<endl;

    char num1[MAX_LEN], num2[MAX_LEN];

    cout<<"Num1: ";
    cin>>num1;
    cout<<"Num2: ";
    cin>>num2;

    substraction(num1, num2);

    return 0;
}

