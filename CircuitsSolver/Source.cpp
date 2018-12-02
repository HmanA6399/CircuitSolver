#include"Manager.h"

int main()
{
	Manager* Man;
	bool success = Man->Read();
	if (success) {
		cout << "Read Successfully !\n";
		//just testing the read function
	}
	else cout << "Try again!\n";
	return 0;
}