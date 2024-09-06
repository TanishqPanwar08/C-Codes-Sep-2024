#include<bits/stdc++.h>
using namespace std;

void reverse(int i, int j, string &s){
    if(i>j) return;
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(i, j, s);
}

int main()
{
        cout<<"Enter the String : ";
        string s;
        getline(cin, s);
        reverse(0, s.length()-1,s);
        cout<<"String after Reverse : "<<s<<endl;    

}