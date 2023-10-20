#include "Author.h"

// getters
int Author::getAuthId(){
	return this->auth_id;
}

string Author::getAuthorName(){
	return this->authorName;
}

string Author::getBookName(){
	return this->book_name;
}

int Author::getNoOfBKPublished(){
	return this->noOfBkPublished;
}

double getTotalSaleBooks(){
	return this->totalSaleBooks;
}


//setters

void Author::setAuthId(int auth_id){
	this->auth_id=auth_ii;
}

void Author::setBookName(string book_name){
	this->book_name=book_name;
}

void Author::setAuthorName(string authorName){
	this->authorName=authorName;
}


void Auhtor::setNoOfBkPublished(int bkPub){
	this->noOfBkPublished=bkPub;
}

void Author::display(){
	cout << "\nAuthor ID : " << auth_id << endl;
	cout << "\nAuthor Name : " << authorName << endl;
	cout <<  "\nBook Name : " << book_name << endl;
	cout << "\nNo. of Book Published : " << noOfBkPublished << endl;
}
