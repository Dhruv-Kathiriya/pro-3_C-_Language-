/*
6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)

Enter your id:
1
Enter your name:
dhurv
Enter your role in company:
manager
Enter your salary:
60000
Enter your experience:
5
------------
NAME IS   :dhurv
ROLE IS   :manager
SALARY IS :60000
------------
Enter your company name:
abc
Enter company address:
royal-racde
Enter your email:
bvgjgv95@gmail.com
Enter your contact number:
5416546464
------------
ID IS             :1
NAME IS           :dhurv
ROLE IS           :manager
SALARY IS         :60000
EXPERIENCE IS     :5
COMPANY NAME IS   :abc
ADDRESS IS        :royal-racde
EMAIL IS          :bvgjgv95@gmail.com
CONTACT NUMBER IS :5416546464
*/
#include<iostream>
using namespace std;

class A{
	public:
		int id;
		string name;
		string role;
		int salary;
		int experience;
		string com_name;
		string address;
		string email;
		int contact;
	public:
		void setA(){	
			cout<<"Enter your id:"<<endl;
			cin>>id;
			cout<<"Enter your name:"<<endl;
			cin>>name;
			cout<<"Enter your role in company:"<<endl;
			cin>>role;
	}
};
class B : public A
{
	public:
		void setB(){
			cout<<"Enter your salary:"<<endl;
			cin>>salary;
			cout<<"Enter your experience:"<<endl;
			cin>>experience;
			cout<<"------------"<<endl;
		}	
};
class C : public B
{
	public:
		void getC(){
			cout<<"NAME IS   :"<<name<<endl
				<<"ROLE IS   :"<<role<<endl
				<<"SALARY IS :"<<salary<<endl;
			cout<<"------------"<<endl;
		}
		
		void setC(){
			cout<<"Enter your company name:"<<endl;
			cin>>com_name;
			cout<<"Enter company address:"<<endl;
			cin>>address;
		}	
};
class D : public C
{
	public:
		void setD(){
			cout<<"Enter your email:"<<endl;
			cin>>email;
			cout<<"Enter your contact number:"<<endl;
			cin>>contact;
			cout<<"------------"<<endl;
		}
			
		void getD(){
			cout<<"ID IS             :"<<id<<endl
				<<"NAME IS           :"<<name<<endl
				<<"ROLE IS           :"<<role<<endl
				<<"SALARY IS         :"<<salary<<endl
				<<"EXPERIENCE IS     :"<<experience<<endl
				<<"COMPANY NAME IS   :"<<com_name<<endl
				<<"ADDRESS IS        :"<<address<<endl
				<<"EMAIL IS          :"<<email<<endl
				<<"CONTACT NUMBER IS :"<<contact<<endl;
		}
};
int main(){
	D d1;
	
	d1.setA();
	d1.setB();
	d1.getC();
	d1.setC();
	d1.setD();
	d1.getD();
	
	return 0;
}
