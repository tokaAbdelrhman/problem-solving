#include<iostream>
using namespace std;
int main(){
	int n1,n2;cin>>n1>>n2;
if((n1==1||n1==2) && (n2==1||n2==2)) cout<<3;
 else if((n1==1||n1==3) &&(n2==1||n2==3)) cout<<2;
 else cout<<1;
}
