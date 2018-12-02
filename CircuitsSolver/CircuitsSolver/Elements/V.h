#pragma once
#include "Element.h"
#include "Node.h"
class V : public Element
{
	int node1, node2;
	float value, phase;

public:
	V(int n1, int n2, float val, float ph);
	~V();
};

