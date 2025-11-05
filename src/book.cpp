#include "book.h"


Book::Book(const std::string& t, int y, const Author& a)
    : title(t), year(y), author(a) 
{}

// show() method implementation (using std::cout explicitly)
void Book::show() const{
    std::cout << "Book: " << title << " (" << year << " ) \n"
              << " Author: " << author.getName() << " [" << author.getNationality() << "] \n";
}

