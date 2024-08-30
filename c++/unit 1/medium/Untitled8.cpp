#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"enter an number :";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(n==sum){
		cout<<"the number is an perfect number ";
	}else{
		cout<<"the number is not an perfect number";
	}
}
