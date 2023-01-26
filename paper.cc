#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Person{
	
	private:
	string lastName;
	
	public:
		string name;
		void setName(string s)
		{
			name = s;
		}
};


class Employee : public Person{
	public:
	string profession;
		
	public:
		int ID;
		
		void setID(int n)
		{
			ID = n;
		}
		
};




class Teacher : private Employee{
	private:
		int teacherCode;
		
	public:
		string subject;
		void setSubj(string s)
		{
			subject = s;
		}
};




int main()
{
	Teacher t1;	
}