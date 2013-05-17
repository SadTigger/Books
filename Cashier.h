#include <string>
/**
 * \class Cashier
 * \ver 0.1
 * \author Pavel Zhechko a.k.a sad_tigger
*/

// status = the Cashier at the bookstore


class Cashier : private Person {
  
	public: 
		Cashier();
		Cashier(string, string, int);
		~Cashier();
		
		void check_cash() const {cout << this->name <<  " have a " << this->cash << " dollars." << endl;}
		void take_cash(int m) {this->cash += m; }
		void give_cash(Person &person, int money) 
			{this->cash -= money; person.take_cash(money);}
		//void by_smth();
		void set_price(Book&, int);
		void sell(Book&);
	private:
		string name;
		string status;
		int cash;
		//int age;
};

Cashier::Cashier()
{
}

Cashier::Cashier(string _name, string _status,int _cash) 
	:name(_name),status(_status), cash(_cash)
{
}

void Cashier::set_price(Book &book, int cost) 
{	
	book.price = cost;
}	

void Cashier::sell(Book&)
{
	//для начала нужно определить кому он продаёт
	// 
}


Cashier::~Cashier() 
{
}


