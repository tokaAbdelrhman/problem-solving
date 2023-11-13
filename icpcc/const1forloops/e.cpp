#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long re=10000,  c ,m,k;cin>>c>>m>>k;
for(int i=1;i<=c;i++){
		long long  x ,dis=0 ;
		cin>>x;
		if(x && x <= k){ 
		 dis= (abs(m-i))*10;
		 re=min(dis,re);
		 
		}
		
		
	}
cout<<re<<endl;
}
