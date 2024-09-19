#include<iostream>
/*
Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. 
(Use Default values for Pay_Rate Rs. 500 per hours)*/

using namespace std;

class Worker
{
	private:
		string name;
		int hrs,sal, pay_rate=500;
		public:
			
	void get_info(string name, int hrs,int sal)
	{
	this->name=name;
	this->hrs=hrs;
	this->sal;		
	}
	void salary(){
		this->sal=sal;
		 sal= pay_rate*hrs;	
	}
	void display(){
		cout<<"\ Name of the worker: "<<name<<"\n working hours: "<<hrs<<"\n Salary: "<<sal;
	}
};
int main(){
	Worker w;
	w.get_info("sakshi",6,5000);
	
	w.salary();
	w.display();
	return 0;
}


