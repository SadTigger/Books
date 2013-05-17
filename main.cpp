#include <iostream>
#include "Book.h"
#include "Person.h"
#include "Cashier.h"
//#include "Table.h"

using namespace std;

int main()
{
  Book first_book("Mathematic", "Stepanova T. S.",304); 
	Person bob("Bobby","student",25);
	Person mike("Micky","student",10);
	//Table test_table(4,"is level");
	Cashier fred("Fred","the Cashier at the bookstore",100);
	
	bob.give_cash(mike,5); // проверяем метод отвечающий за передачу денег от человека к человеку 
	fred.set_price(first_book, 10); // проверяем метод задающий цену книги продавцом
	first_book.get_price();
	cout << "Some book with title \""<< first_book.check_title() << "\" ." << endl;
	//cout << "Full text is " << endl;
	mike.check_cash();
	bob.check_cash();
	fred.check_cash();
	
	
	return 0;
}
