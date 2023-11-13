#include<iostream>
using namespace std;
int whoWin( int count ,char arr[] ){
	int a=0,b=0;
	for(int i=0;i<count;i++ ){
		if(arr[i]=='A') a++;
		else b++;
	}
	if(a>b) cout<<"Anton"<<endl;
	else  if (b>a)cout<<"Danik"<<endl;
	else cout<<"Friendship"<<endl;
}
int main(){
	int count;cin>>count; char arr[count];
	for(int l=0;l<count;l++){
		cin>> arr[l];
	}
	
	whoWin(  count ,arr );
}
