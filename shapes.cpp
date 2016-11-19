#include <iostream>
#include <cmath>
#include <string>
#include "shapes.h"
#include "readNum.h"

using namespace std;

//cube
cube::cube()
{
	side=0.0;
}
void cube::input()
{
	side=readDouble("Enter the length of a side: ", 0);
}
void cube::display()
{
	cout<<"The length of the side is: "<<side<<endl;
	cout<<"The volume is: "<<vol()<<endl;
	cout<<"The surface area is: "<< surf()<<endl;
}
double cube::getside()
{
	return side;
}
double cube::setside(double dim)
{
	side=dim;
	return side;
}
double cube::vol()
{
	return (side*side*side);
}
double cube::surf()
{
	return (6*side*side);
}

//sphere
sphere::sphere()
{
	radius=0.0;
}
void sphere::input()
{
	radius=readDouble("Enter the radius: ", 0.0);
}
void sphere::display()
{
	cout<<"The radius is "<<radius<<endl;
	cout<<"The volume is "<<volume()<<endl;
	cout<<"The surface area is "<<surf()<<endl;
}
double sphere::getrad()
{
	return radius;
}
double sphere::setrad(double dim)
{
	radius=dim;
	return dim;
}
double sphere::volume()
{
	return (4.0/3.0*M_PI*pow(radius,3.0));
}
double sphere::surf()
{
	return (4*M_PI*radius*radius);
}

//cylinder
cylinder::cylinder()
{
	height=0.0;
	radius=0.0;
}
void cylinder::input()
{
	height=readDouble("Enter the height: ", 0.0);
	radius=readDouble("Enter the radius: ", 0.0);
}
void cylinder::display()
{
	cout<<"The height is "<<height<<endl;
	cout<<"The radius is "<<radius<<endl;
	cout<<"The volume is "<<volume()<<endl;
	cout<<"The surface area is "<<surf()<<endl;
}
double cylinder::getdimh()
{
	return height;
}
double cylinder::getdimr()
{
	return radius;
}
double cylinder::setdim(double dim, double dim2)
{
	height=dim;
	radius=dim2;
}
double cylinder::volume()
{
	return (height*M_PI*radius*radius);
}
double cylinder::surf()
{
	return (2*M_PI*radius*height+2*M_PI*radius*radius);
}

//cone
cone::cone()
{
	height=0.0;
	radius=0.0;
}
void cone::input()
{
	height=readDouble("Enter the height: ", 0.0);
	radius=readDouble("Enter the radius: ", 0.0);
}
void cone::display()
{
	cout<<"The height is "<<height<<endl;
	cout<<"The radius is "<<radius<<endl;
	cout<<"The volume is "<<volume()<<endl;
	cout<<"The surface area is "<<surf()<<endl;
}
double cone::getdimh()
{
	return height;
}
double cone::getdimr()
{
	return radius;
}
double cone::setdim(double dim, double dim2)
{
	height=dim;
	radius=dim2;
}
double cone::volume()
{
	return (height/3*M_PI*radius*radius);
}
double cone::surf()
{
	return (M_PI*radius*(radius+sqrt(height*height+radius*radius)));
}

//rectangle
rectangle::rectangle()
{
	height=0.0;
	length=0.0;
	width=0.0;
}
void rectangle::input()
{
	height=readDouble("Enter the height: ", 0.0);
	length=readDouble("Enter the length: ", 0.0);
	width=readDouble("Enter the width: ", 0.0);
}
void rectangle::display()
{
	cout<<"The height is "<<height<<endl;
	cout<<"The length is "<<length<<endl;
	cout<<"The width is "<<width<<endl;
	cout<<"The volume is "<<volume()<<endl;
	cout<<"The surface area is "<<surf()<<endl;
}
double rectangle::getdimh()
{
	return height;
}
double rectangle::getdiml()
{
	return length;
}
double rectangle::getdimw()
{
	return width;
}
double rectangle::setdim(double dim1,double dim2, double dim3)
{
	height=dim1;
	length=dim2;
	width=dim3;
}
double rectangle::volume()
{
	return (height*length*width);
}
double rectangle::surf()
{
	return (2*height*length+2*height*width+2*width*length);
}
