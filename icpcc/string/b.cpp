#include<iostream>
#include<string>
using namespace std;
int main(){
	int count; cin>>count;
	while(count--){
		string name;
		cin>>name;
		if((name[0]=='y'||name[0]=='Y')&&(name[1]=='e'||name[1]=='E')&&(name[2]=='S'||name[2]=='s')) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
	}
}
