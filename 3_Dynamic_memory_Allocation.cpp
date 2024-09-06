#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // char ch = 't';
    // cout<<sizeof(ch)<<endl;

    // char *p = &ch;
    // cout<<sizeof(p)<<endl;

    // char *x = new char;
    // cout<<sizeof(x)<<endl;


    int n;
    cin>> n;
    int* arr = new int [n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = getSum(arr, n);
    cout<<"answer is: "<<ans<<endl;

    return 0;
}