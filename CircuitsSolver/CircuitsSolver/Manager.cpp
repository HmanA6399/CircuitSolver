#include "Manager.h"


Manager::Manager() {}

bool Manager::Read()
{
	//This is the main function that recieves the input from the user also validates it
	//it returns true in case the input is in the correct format, false otherwise.
	freopen("circuitComponents.txt", "r", stdin);
	while (cin) {

		char typ; cin >> typ;
		int n1, n2; float val, ph;
		cin >> n1 >> n2 >> val >> ph;
		
		//First : Fill data members of the elements in the circuit [V, I, R, L, C]
		switch (typ)
		{
		case 'V' :
			Elements[VT][els_cnt[VT]++] = new V(n1, n2, val, ph);
			break;
		case 'I':
			Elements[IT][els_cnt[IT]++] = new I(n1, n2, val, ph);
			break;
		case 'R':
			Elements[RT][els_cnt[RT]++] = new R(n1, n2, val, ph);
			break;
		case 'L':
			Elements[LT][els_cnt[LT]++] = new L(n1, n2, val, ph);
			break;
		case 'C':
			Elements[CT][els_cnt[CT]++] = new C(n1, n2, val, ph);
			break;
		default:
			cout << "Please revise your input and try again - check the README.txt file for more information about the correct format\n";
			return false;
		}
	}
	return true;
}

Manager::~Manager() {}