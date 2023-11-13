#include<iostream>
using namespace std;
int main(){
	int n1,n2;cin>>n1>>n2;
	int re1=min(n1,n2);
	int re2=max(n1,n2);
	cout<<re1<<" ";
	int re3= re2-re1;
	cout<<re3/2;
	
}
