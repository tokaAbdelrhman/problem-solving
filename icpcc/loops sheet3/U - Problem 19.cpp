#include<iostream>
using namespace std;
int main(){
int count;cin>>count;
while(count--){
	int h,m,h1=0,m1=0;
	cin>>h>>m;
	h1=23-h;
	m1=60-m;
	cout<<m1+(h1*60)<<endl;
}
}
