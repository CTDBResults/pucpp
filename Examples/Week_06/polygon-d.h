#pragma once

#include "point.h"

class Polygon : public IGObject
{
private:
	int nv;
	Point* vlist;

public:
	Polygon(const Polygon& p);
	Polygon(int init_nv, Plist* init_v = 0);

	virtual ~Polygon()
	{
		delete [] vlist;
	}

	virtual void draw() {}
	void add_vertex(const Point& new_vertex);
	Polygon& operator=(const Polygon& p);
};

