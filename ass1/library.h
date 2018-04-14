#include <iostream>
#include <cassert>
#include <string>
#ifndef UNTITLED_LIBRARY_H
#define UNTITLED_LIBRARY_H

using namespace std;

class Library {

    static const int MAX = 100;
    int NumberOfBooks = 0;
    string name;

    //Initialize the array
private:
    string books[MAX];
    string libraryName;

public:
// Add a new book,
// return true for success, false if book already in library
    bool AddBook(const std::string &name);
// Remove a book,
// return true for success, false if book not in library
    bool RemoveBook(const std::string &name);
// List all books in library
    void ListAllBooks();
// Return true if book in library, false otherwise
    int IsInLibrary(const std::string &name);
// friend function
//    std::ostream &operator<< (std::ostream &out, const Library &lib);
    Library(const string &name);
    ~Library();
};
#endif //UNTITLED_LIBRARY_H
