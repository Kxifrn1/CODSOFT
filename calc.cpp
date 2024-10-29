#include<iostream>
using namespace std;

int main(){
	int a,b,i=1;
	while(i){
		cout<<"enter the first number"<<endl;
		cin>>a;
		cout<<"enter the second number"<<endl;
		cin>>b;
		cout<<"1: Addition"<<endl;
		cout<<"2: Subtraction"<<endl;
		cout<<"3: Multiplication"<<endl;
		cout<<"4: Division"<<endl;
		cout<<"enter the number of the operation you want to perform on the two numbers"<<endl;
		cin>>i;
		switch(i){
			case 1:
				cout<<"sum="<<a+b<<endl;
				break;
			case 2:
				cout<<"difference="<<a-b<<endl;
				break;
			case 3:
				cout<< "product="<<a*b<<endl;
				break;
			case 4:
				cout<<"quotient="<<a/b<<endl;
				break;
			default:
				cout<<"choose again"<<endl;
				continue;
		}
		cout<<"enter 1 to continue and 0 to exit"<<endl;
		cin>>i;
	}
	return 0;
}
