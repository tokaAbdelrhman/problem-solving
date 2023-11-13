#include<iostream>
using namespace std;
int main(){
	int n1;
	cin>>n1;
	if(n1<=5) cout<<1;
	else {
		if(n1%5==0){
			cout<<n1/5;
		}
		else cout<<(n1/5)+1;
	}
}
