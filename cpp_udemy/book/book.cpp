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