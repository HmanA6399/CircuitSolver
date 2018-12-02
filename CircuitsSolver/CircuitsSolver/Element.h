#pragma once
#include "Node.h"

class Element
{
	int node1, node2;
	float value, phase;
public:
	Element(int n1, int n2, float val, float ph);
	~Element();
};

