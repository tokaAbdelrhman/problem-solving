#include<iostream>
using namespace std;
int main(){
	int n1,n2;cin>>n1>>n2;
	if(0<n1 && n2==0) cout<<"gold";
	else if(0<n2 && n1==0) cout<<"silver";
	else cout<<"alloy";
}
