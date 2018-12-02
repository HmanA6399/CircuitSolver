#include "Element.h"

Element::Element(int n1, int n2, float val, float ph)
{
	this->node1 = n1;
	this->node2 = n2;
	this->value = val;
	this->phase = ph;
}

Element::~Element()
{
}
