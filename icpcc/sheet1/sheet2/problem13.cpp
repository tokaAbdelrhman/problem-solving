#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long r,c ,mx=0;
	cin>>r>>c;
	if(r==c) cout<<r+c;
	else {
	
mx=max(r,c);
		cout<<mx+(mx-1);
}
	
}
