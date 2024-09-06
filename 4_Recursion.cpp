#include<bits/stdc++.h>
using namespace std;

int power(int n){
    if(n==0) return 1;

    return 2 * power(n-1);
}

//tail recursion
void print(int n){
    if(n==0) return;
    cout<<n<<" ";
    print(n-1);
}

//head recursion
void print2(int n){
    if(n==0) return;
    print2(n-1);
    cout<<n<<" ";
}

void print3(int n){
    if(n==0) return;
    cout<<n<<" ";
    print3(n-1);
    cout<<n<<" ";
}



int main()
{
    int n;
    cin>>n;
    cout<<power(n);
    cout<<"\nPrinting using Tail Recursion Print function "<<endl;
    print(n);
    cout<<"\nPrinting using Head Recursion Print2 function"<<endl;
    print2(n);
    cout<<"\nPrinting using Head Recursion Print3 function"<<endl;
    print3(n);
}