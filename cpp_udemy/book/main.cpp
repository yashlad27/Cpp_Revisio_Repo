#include<iostream>
#include<string>
#include "book.hpp"
using namespace std;

void print_book(const book& book);

int main(){
    book book1("Yash", "My-Life", "Thriller", 900);
    book book2("George RR Martin", "Game Of Thrones", "Fantasy", 1024);
    book book3("James Stewart", "Calculus", "Math", 981);

    print_book(book1);
    print_book(book2);
    print_book(book3);
    return 0;
}

void print_book(const book& book){
    cout<<"The author of book is "<<book.getAuthor()<<" and the title of book is "<<book.getTitle()<<" it's genre is "<<book.getGenre()<<" ,number of pages in the book are "<<book.getPages()<<"."<<endl;

    cout<<endl;
}