#include<iostream>
using namespace std;
int main(){
long long count,num;
cin>>num>>count;
while(count--){
	if(num%200==0) {
		num=num/200;
	}
	else {
		num=(num*1000)+200;
	}
}
cout<<num;
}
