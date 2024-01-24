/*
5). WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

Enter X:3
Enter Y:5
Enter Z:6
______
CUBE of X is:27
SQUARE of X is:9
CUBE of Y is:125
SQUARE of Y is:25
CUBE of Z is:216
SQUARE of Z is:36


*/
#include<iostream>
using namespace std;

class A{
	public:
		int x;
		int y;
		int z;
	public:	
		void getA(){
			cout<<"Enter X:";
			cin>>x;
			cout<<"Enter Y:";
			cin>>y;
			cout<<"Enter Z:";
			cin>>z;	
		}	
};
class B : public A
{
	public:	
		void getB(){
			cout<<"______"<<endl;
			cout<<"CUBE of X is:"<<x*x*x<<endl;
			cout<<"SQUARE of X is:"<<x*x<<endl;
			cout<<"CUBE of Y is:"<<y*y*y<<endl;
			cout<<"SQUARE of Y is:"<<y*y<<endl;
			cout<<"CUBE of Z is:"<<z*z*z<<endl;	
			cout<<"SQUARE of Z is:"<<z*z<<endl;	
		}
};
int main(){
	B b1;
	
	b1.getA();
	b1.getB();
	
	return 0;
}
