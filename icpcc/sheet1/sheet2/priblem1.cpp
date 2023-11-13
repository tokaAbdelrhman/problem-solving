#include<iostream>
using namespace std;
int main(){
	int r,c,r1;
	cin>>r>>c>>r1;
	if(r!=c && c!=r1 && r!=r1 ) 	cout<<3;
	else if ( r==c && c==r1  && r==r1 )  cout<<1;
	else cout<<2;
		

	
}
