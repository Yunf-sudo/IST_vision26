#include <iostream>

using namespace std;

class book
{
private:
    int id;
public:
    string name;
    string author;
    int pages;
    float price;
};

int main()
{
    book book1;
    book1.name = "C++";
    book1.author = "Bjarne Stroustrup";
    book1.pages = 1376;
    book1.price = 99.99;

    cout << "Book name: " << book1.name << endl;
    cout << "Book author: " << book1.author << endl;
    cout << "Book pages: " << book1.pages << endl;
    cout << "Book price: " << book1.price << endl;

    return 0;
}