#include "library.h"

Library::Library(const std::string &name) {
    libraryName = name;
}
Library::~Library() {

}

    bool Library::AddBook(const std::string &name) {
        if(NumberOfBooks == 0) {
            books[0] = name;
            NumberOfBooks++;
            return true;
        }
        for (int i = 0; i < NumberOfBooks; i++) {
            if (books[i].compare(name) == 0){
                cout << name << " is already in the library" << endl;
                return false;
            }
        }
        books[NumberOfBooks] = name;
        NumberOfBooks++;
        return true;
    }
    // removes a book from the library
    bool Library::RemoveBook(const std::string &name) {
        for (int i = 0; i < NumberOfBooks; i++) {
            if (books[i].compare(name) == 0) {
                books[i] = books[NumberOfBooks - 1];
                NumberOfBooks--;
                cout << name << " was removed" << endl;
                return true;
            }
        }
        cout << name << " was not found" << endl;
        return false;
    }
    // lists all the books in the library
    void Library::ListAllBooks() {
        if (NumberOfBooks > 0) {
            for (int i = 0; i < NumberOfBooks; i++) {
                cout << books[i] << endl;
            }
        }
        return;
    }
    // checks to see ifa book is in the library
    int Library::IsInLibrary(const std::string &name) {
        for (int i = 0; i < NumberOfBooks; i++) {
            if (books[i].compare(name) == 0){
                cout << name << " is in the library" << endl;
                return i;
            }
        }
        cout << name << " is not in the library" << endl;
        return false;
    }
