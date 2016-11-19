#include <iostream>
#include "readNum.h"

using namespace std;

class cube 
{
private:
	double side;
public:
	cube();
	void input();
	void display();
	double getside();
	double setside(double);
	double vol();
	double surf();
};

class sphere
{
private:
	double radius;
public:
	sphere();
	void input ();
	void display();
	double getrad();
	double setrad(double);
	double volume();
	double surf();
};

class cylinder
{
private:
	double height, radius;
public:
	cylinder();
	void input ();
	void display();
	double getdimh();
	double getdimr();
	double setdim(double,double);
	double volume();
	double surf();
};

class cone
{
private:
	double height, radius;
public:
	cone();
	void input ();
	void display();
	double getdimh();
	double getdimr();
	double setdim(double,double);
	double volume();
	double surf();
};

class rectangle
{
private:
	double height, length, width;
public:
	rectangle();
	void input();
	void display();
	double getdimh();
	double getdiml();
	double getdimw();
	double setdim(double, double, double);
	double volume();
	double surf();
};