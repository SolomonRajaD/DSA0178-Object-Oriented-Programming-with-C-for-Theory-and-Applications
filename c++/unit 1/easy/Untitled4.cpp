#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the given number :";
	cin>>n;
	if(n%2==0){
		cout<<"the given number is not a prime number";
	}else if(n%3==0){
		cout<<"the given number is not a prime number";
	}else if(n%5==0){
		cout<<"the given number is not a prime number";
	}else if(n%11==0){
		cout<<"the given number is not a prime number";
	}else{
		cout<<"the given number is prime";
	}
}
