#include<iostream>
using namespace std;
int main(){
	int count;cin>>count;int c=count,space =count-1,n=1;
	while(count--){
		for(int i=1;i<=space;i++){cout<<" ";
		}
		for(int j=1;j<=n;j++){
			cout<<"*";
		}
		space--;
		n+=2;
		cout<<endl;
	}
	
	
	
}
