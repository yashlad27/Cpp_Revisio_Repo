#include<iostream>
#include "book.hpp"
using namespace std;

book::book(){

}

book::book(string author, string title, string genre, int numPages){
    this->author = author;
    this->title = title;
    this->genre = genre;
    this->numPages = numPages;
}

string book::getAuthor() const{
    return author;
}

string book::getTitle() const{
    return title;
}

string book::getGenre() const{
    return genre;
}

int book::getPages() const{
    return numPages;
}

void book::print_book_details() const{
    cout<<"The author of book is "<<author<<" and the title of book is "<<title<<" it's genre is "<<genre<<" ,number of pages in the book are "<<numPages<<"."<<endl;

    cout<<endl;
}