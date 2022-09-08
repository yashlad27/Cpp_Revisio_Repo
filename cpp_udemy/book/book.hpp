#ifndef BOOK_H
#define BOOK_H

#include<string>
using namespace std;

class book{
    public:
        book();
        book(string author, string title, string genre, int numPages);
        string getAuthor() const;
        string getTitle() const;
        string getGenre() const;
        int getPages() const;

    private:
    string author;
    string title;
    string genre;
    int numPages;
};

#endif