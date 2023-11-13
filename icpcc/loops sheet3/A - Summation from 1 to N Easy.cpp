#include<iostream>
using namespace std;
int main(){
	int num;
	long long re=0;
	cin>>num;
	for(int i=1;i<=num;i++){
		re+=i;
	}
	cout<<re;
}
