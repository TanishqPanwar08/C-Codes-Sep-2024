#include<bits/stdc++.h>
using namespace std;

void update1(int n){    //Pass by value
    n++;
}

void update2(int &n){   //Pass by refrence / Address
    n++;
}

int main()
{
    int n = 5;
    cout<<"Before : "<<n<< endl;
    update1(n);
    cout<<"after 1: "<<n<< endl;

    update2(n);
    cout<<"after 2: "<<n<< endl;

}