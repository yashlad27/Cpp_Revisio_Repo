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
        // add print_book_details to the book class:
        void print_book_details() const;
        
    private:
    string author;
    string title;
    string genre;
    int numPages;
};

#endif