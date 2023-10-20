#include <iostream>
#include "Author.h"

using namespace std;

int main()
{
	Author *a1 = new Author(111, "Rhonda Byrne", "Secrets", 233, 567);
	a1->displayBooks();
	return 0;
}
