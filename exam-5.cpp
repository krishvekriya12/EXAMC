#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
		int  id ;
		char name[100];
		char role[100];
		
		
		
		void set()
		{
			cout<<"enter id :";
			cin>>id;
			cout<<"enter name: ";
			cin>>name;
			cout<<"enter role: ";
			cin>>role;
		}
};
class B{
	public :
		int salary;
		int experienc;
		
		
		void set()
		{
			cout<<"enter salary :";
			cin>>salary;
			cout<<"enter experienc :";
			cin>>experienc;
		}
};
class C{
	public :
		char compny_name[100];
		char address[100];
		
		
		void set()
		{
			cout<<"enter compny_name :";
			cin>>compny_name;
			cout<<"enter address";
			cin>>address;
		}
};
class D{
	public :
		char email[200];
		char contact[100];
		
		
		void set()
		{
			cout<<"enter email :";
			cin>>email;
			cout<<"enter contact";
			cin>>contact;
		}
		
		void get()
		{
			int id;
			char name;
			int salary;
			char role;
			int experienc;
			char compny_name;
			char address;
			char email;
			char contact;
							
							cout<<"id= "<<id<<endl;
							cout<<"name= "<<name<<endl;
							cout<<"salary= "<<salary<<endl;
							cout<<"role= "<<role<<endl;
							cout<<"experienc= "<<experienc<<endl;
							cout<<"compny_name= "<<compny_name<<endl;
							cout<<"address= "<<address<<endl;
							cout<<"email= "<<email<<endl;
							cout<<"contact= "<<contact<<endl;
			
		}
};
int main()
{
	A a1;
	
	a1.set();
	
	B b1;
	
	b1.set();
	
	C c1;
	
	c1.set();
	
	D d1;
	
	d1.get();
}
		
