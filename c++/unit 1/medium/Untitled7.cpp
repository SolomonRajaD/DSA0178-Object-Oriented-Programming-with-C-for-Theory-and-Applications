#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"enter an number :";
	cin>>n;
	for(i=0;i<=1000;i++){
		if(i*i*i==n){
			cout<<"the cube root of "<<n<<" is "<<i;
		}else{
			continue;
		}
	}
	return 0;
}
