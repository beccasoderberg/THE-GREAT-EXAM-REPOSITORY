//too many headers, i'm guessing
#include <string>
#include <vector>
#include <iostream>
using namespace std;

#ifndef CITIZEN_H_
#define CITIZEN_H_

//lo it is the citizen class, along with private secrets kept by the citizen
class Citizen
{
private:
	int _id;
	string _first;
	string _last;
	string _color;

public:
//constructors as well as get & set functions
	Citizen();
	int getId();
	string getFirstName();
	string getLastName();
	string getFavoriteColor();
	void setFavoriteColor(string color);
	Citizen(int id, string first, string last, string color);
	Citizen(Citizen* c);
};

#endif CITIZEN_H_