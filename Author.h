#ifndef AUTJOR_H
#define AUTHOR_H

#include<string>
using namespace std;

class Author
{
	private:
	int auth_id;
	string authorName;
	string book_name;
	int noOfBkPublished;
	double totalSaleBooks;
	
	public:
	Author(){}
	
	Author(int auth_id, string book_name, string authorName, int noOfBkPublished, double totalSaleBooks)
	{
		this->auth_id=auth_id;
		this->book_name=book_name;
		this->authorName=authorName;
		this->noOfBkPublished=noOfBkPublished;
		this->totalSaleBooks=totalSaleBooks;
	}

	// getters
	string getAuthId();
	string getAuthorName;
	string getBookName();
	int getNoOfBkPublished();
	double getTotalSaleBooks();
	
	// setters
	void setAuthId(int auth_id);
	void setBookName(string book_name);
	void setAuthorName(string authorName);
	void setNoOfBkPublished(int noOfBkPublished);


	// display method
	void displayBook();

	
};

#endif
