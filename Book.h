#include <iostream>
#include <string>

using namespace std;


/**
 * \class Book  
 * \ver 0.1
 * \author Pavel Zhechko a.k.a sad_tigger
*/

class Book {
	public:
		friend class Cashier;
		friend class Catalog;
		//create 'empty' book
		Book();
		//create 'full' book 
		Book(string, string, int);
		//destruct book
		~Book();
		
		string check_title() const {return title;}
			/** test method for title
			*/
		void get_price() const { cout << "\"" << this->title << "\"" << " cost : " << this->price << " dollars." << endl;}
	private:
		string title; //< book title 
		string author; //< book author
		int number_of_Pages;
		//string isbn;	
		//string copyright; 
		int price;	
		int width;
};

Book::Book()
{
}

Book::Book(string _title,string _author, int _number_of_Pages)
	: title(_title), author(_author), number_of_Pages(_number_of_Pages),price(0),width(0)
{
}

Book::~Book()
{
}
