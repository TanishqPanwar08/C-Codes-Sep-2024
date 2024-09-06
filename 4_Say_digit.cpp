#include<bits/stdc++.h>
using namespace std;

void sayDigit(int digit){
    string say[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if(digit == 0){
        return ;
    }
    int n = digit%10;
    sayDigit(digit/10);
    cout<<say[n]<< " ";

}

int main()
{
    int digit;
    cin>>digit;
    sayDigit(digit);
    return 0;
}
