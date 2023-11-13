#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long x,y,z,re1=0,re2=0;
	cin>>x>>y>>z;
	re1=x/z; if(x%z) re1++;
	re2=y/z; if(y%z) re2++;
	cout<<re1*re2;
}
