#include <iostream>
using namespace std;
int main()
{
	enum bits 
	{ one = 1, two = 2, four = 4, eight = 8};
	
	bits myflag;
	myflag = bits(16);
	cout << myflag <<endl;
	return 0;
}
