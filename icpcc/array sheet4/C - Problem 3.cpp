#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int c,i=1;
   cin>>c;
   int arr[c];
   while(c--){
   cin>>arr[i];i++;
   }
   int s,e;cin>>s>>e;
   for(int i=s;i<=e;i++){
   	cout<<arr[i]<<" ";
   }
}
