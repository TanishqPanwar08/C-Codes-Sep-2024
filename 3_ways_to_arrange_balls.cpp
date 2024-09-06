#include <bits/stdc++.h> 
using namespace std;
void totalcount(int a, int b, int c, char last, int& count){
	if(a==0 && b==0 && c==0){
		count++;
		return;
	}

	if(last != 'A' && a>0){
		totalcount(a-1, b, c, 'A', count);
	}

	if(last != 'B' && b>0){
		totalcount(a, b-1, c, 'B', count);
	}

	if(last != 'C' && c>0){
		totalcount(a, b, c-1, 'C', count);
	}
}
long long int totalWays(int a, int b, int c)
{
	// Write your code here.
	int count =0;
	totalcount(a, b, c, 'X', count);
	return count;

}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = totalWays(a, b, c);
    cout<<"Total Ways are: "<<ans<<endl;
}