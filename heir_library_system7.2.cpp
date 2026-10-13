#include <iostream>
using namespace std;

class Library
{
protected:
    int libraryId;
    string libraryName;

public:
    void getLibrary()
    {
        cout << "Enter Library ID: ";
        cin >> libraryId;

        cout << "Enter Library Name: ";
        cin >> libraryName;
    }
};

class Book : public Library
{
private:
    int bookId;
    string bookName;

public:
    void getBook()
    {
        getLibrary();

        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Name: ";
        cin >> bookName;
    }

    void displayBook()
    {
        cout << endl << "--- Book Details ---" << endl;
        cout << "Library ID: " << libraryId << endl;
        cout << "Library Name: " << libraryName << endl;
        cout << "Book ID: " << bookId << endl;
        cout << "Book Name: " << bookName << endl;
    }
};

class Magazine : public Library
{
private:
    int magazineId;
    string magazineName;

public:
    void getMagazine()
    {
        getLibrary();

        cout << "Enter Magazine ID: ";
        cin >> magazineId;

        cout << "Enter Magazine Name: ";
        cin >> magazineName;
    }

    void displayMagazine()
    {
        cout << endl << "--- Magazine Details ---" << endl;
        cout << "Library ID: " << libraryId << endl;
        cout << "Library Name: " << libraryName << endl;
        cout << "Magazine ID: " << magazineId << endl;
        cout << "Magazine Name: " << magazineName << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "Enter Book Details" << endl;
    b.getBook();

    cout << endl << "Enter Magazine Details" << endl;
    m.getMagazine();

    b.displayBook();
    m.displayMagazine();

    return 0;
}