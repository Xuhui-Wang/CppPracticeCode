//ptrstr.cpp -- using pointers to strings;
//interesting note: Normally, if you give cout a pointer, it prints an address; 
// but if the pointer is type char *, it displays the pointed-to string;
#include <iostream>
#include <cstring>        //declare strlen(), strcpy();

int main() 
{
	using namespace std;
	char animal[20] = "bear";        // animal holds "bear";
	const char * bird = "wren";     // bird holds address of string "wren"
	char * ps;             // uninitialized

	cout << animal << " and ";     // display bear
	cout << bird << "\n";          // display wren;
	//cout << ps << "\n";           //may crash

	cout << "Enter a kind of animal: ";
	cin >> animal;                  // ok if input < 20 chars;

	ps = animal;                   // set ps to point to string
	cout << ps << "!\n";		// ok, same as using animal
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	ps = new char[strlen(animal) + 1]; // get new storage
	strcpy(ps, animal);             // copy string to new storage
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete [] ps;
	return 0;
}
