#include<iostream>
using namespace std;
int main(){
	long long  sum=0, c;cin>>c;
	while(c--){
		long long  x;
		cin>>x;
		sum+=x-1;
	}
	cout<<sum;
}
