#include <iostream>
#include <string>
#include <climits>
#include <cctype>
#include <cstdlib>
#include "readNum.h"

using namespace std;

double readDouble(string prompt)
{
	double rv;
	string inp;
	bool done=false;
	while (done==false){
		cout<<prompt;
		cin>>inp;
		done=valiD(inp);
		if (done==false){
			cerr<<"Oops, improper input"<<endl;
		}
	}
	rv=atof(inp.c_str());
	return rv;
}


double readDouble(string prompt, double minVal)
{
	double rv=0.0;
	bool done=false;
	while (done==false){
		rv=readDouble (prompt);
		if (rv<minVal){
			cerr<<"Alert! Value must be >= "<<minVal<<endl;
		}
		else{
			done=true;
		}
	}
	return rv;
}

double readDouble(string prompt, double minVal, double maxVal)
{
	double rv=0.0;
	bool done=false;
	while (done==false){
		rv=readDouble ( prompt, minVal);
		if (rv>maxVal){
			cerr<<"Alert! Value must be <= "<<maxVal<<endl;
		}
		else{
			done=true;
		}
	}
	return rv;
}

int readInt(string prompt)
{
	int rv=0;
	string inp;
	bool done=false;
	while (done == false){
		cout<< prompt;
		cin>>inp;
		done=valiI(inp);
		if (done==false){
			cerr<<"Oops, improper input"<<endl;
		}
	}
	rv=atoi(inp.c_str());
	return rv;
}


int readInt(string prompt, int minVal)
{
	int rv=0;
	bool done=false;
	while (done == false){
		rv=readInt (prompt);
		if (rv<minVal){
			cerr<<"Alert! Value must be >= "<<minVal<<endl;
		}
		else{
			done=true;
		}
	}
	return rv;
}

int readInt(string prompt, int minVal, int maxVal)
{
	int rv=0;
	bool done=false;
	while (done == false){
		rv=readInt ( prompt, minVal);
		if (rv>maxVal){
			cerr<<"Alert! Value must be <= "<<maxVal<<endl;
		}
		else{
			done=true;
		}
	}
	return rv;
}

void EtoC()
{
	cout<<"Press ENTER key to continue...";
	cin.clear();
	cin.ignore(INT_MAX,'\n');
	cin.get();
}

bool valiD(string input)
{
	bool rv=true,dec=false,exp=false;
	if(input.length()>0){
		if (input[0]!='-'&&input[0]!='+'&&input[0]!='='&&input[0]!='.'&&isdigit(input[0])!=1){
			rv=false;
		}
		if (input[0]=='.'){
			dec=true;
		}
		int index=1;
		while (index<input.length()){
			if (isdigit(input[index])!=1){
				if (dec==false&&input[index]=='.'){
					dec=true;
				}
				else if(exp==false&&input[index]=='e'){
					exp=true;
				}
				else{
					rv=false;
				}
			}
			index++;
		}
	}
	else{
		rv==false;
	}
	return rv;
}

bool valiI(string input)
{
	bool rv=true;
	if(input.length()>0){
		if(input[0]!='-' && input[0]!='=' && input[0]!='+' && isdigit(input[0])!=1){
			rv=false;
		}
		int index=1;
		while (index<input.length()){
			if (isdigit(input[index])!=1){
				rv=false;
			}
			index++;
		}
	}	
	else {
		rv==false;
	}
	return rv;
}