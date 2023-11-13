#include<iostream>
using namespace std;
int main(){
long long n1,n2,n3;
cin>>n1>>n2>>n3;
long long re=(n1*n3)-n2;cout<<re<<endl;
for(int i=0;i<9;i++){
	re=(n1*re)-n2;
	cout<<re<<endl;
}
}
