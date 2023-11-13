#include<iostream>
#include<algorithm>
using namespace std;
int main(){
//   long long re=0, c,i=0;
//   cin>>c;
//   int arr[c];
//   while(c--){
//   cin>>arr[i];i++;
//   if(arr[i]>10) re+=arr[i]-10;
//   } 
//   
//  cout<<re;
   long long re=0, c,i=0;
   cin>>c;
   int arr[c];
   for(int i=0;i<c;i++){
   	cin>>arr[i];
   }
   for(int j=0;j<c;j++){
   	if(arr[j]>10) re+=arr[j]-10;
   }cout<<re;
}
