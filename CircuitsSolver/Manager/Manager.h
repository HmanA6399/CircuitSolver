#pragma once
#include "../Elements/I.h"
#include "../Elements/V.h"
#include "../Elements/L.h"
#include "../Elements/R.h"
#include "../Elements/C.h"
#include "../Elements/Node.h"
#include"../Math/Math.h"
#include <iostream>
using namespace std;

class Manager
{
	///The Main Class that contains the logic and makes use of all other classes
	//Data Members
	////1 >> Nodes : the main building unit of the circuit
	int n_cnt = 0;
	Node* Nodes[100];
	
	////2 >> Elements, a 2D array of arrays containing pointers to the objects which represent all the circuit elements (V, I, R, L, C)
	enum EType {
		VT,
		IT,
		RT,
		LT,
		CT,
		EL_CNT
	};
	Element* Elements[EL_CNT][50];
	int els_cnt[EL_CNT] = {0};

public:
	Manager();
	bool Read();
	~Manager();
};