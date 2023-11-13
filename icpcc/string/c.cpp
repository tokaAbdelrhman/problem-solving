#include<iostream>
#include<string>
using namespace std;
int main(){
	int count; cin>>count;
	while(count--){
		string name;
		cin>>name;
		if(name[0]+name[1]+name[2]==name[3]+name[4]+name[5]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
	}
}
