#include <iostream>
#include <string>

using namespace std;
/**
 * \class Person
 * \ver 0.1
 * \author Pavel Zhechko a.k.a sad_tigger
 *
*/

class Person {
  public:
		//
		Person();
		//
		Person(string name, string status,int cash);
		//destructor
		~Person();
		
		void check_cash() const { cout << this->name <<  " have a " << this->cash << " dollars." << endl;}
		void take_cash(int money) {this->cash += money; }
		void give_cash(Person &person, int money) 
			{this->cash -= money; person.take_cash(money);}			
		void buy();
	private:
		string name;
		string status;
		int cash;
		//int age;
};

Person::Person()
{
}

Person::Person(string name, string status,int cash)
	:name(name), status(status),cash(cash)
{	
}

Person::~Person()
{	
}
