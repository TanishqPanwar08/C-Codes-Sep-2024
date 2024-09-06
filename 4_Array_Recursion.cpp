/*
// Sorted or not
#include<bits/stdc++.h>
using namespace std;

bool Sorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0]>arr[1]) return false;

    bool ans = Sorted(arr+1 , size-1);
    return ans;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<"Is array sorted --> "<< Sorted(arr,n)<< endl;
    }
}
*/

// SUm of Array
#include<bits/stdc++.h>
using namespace std;

int sumarr(int *arr, int size, int sum){
    if(size == 0) return sum;
    sum += arr[0];
    return sumarr(arr+1 , size-1, sum);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<"sum of the array is --> "<< sumarr(arr,n, 0)<< endl;
    }
}
