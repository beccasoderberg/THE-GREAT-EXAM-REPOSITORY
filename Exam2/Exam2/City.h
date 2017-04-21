#include <string>
#include <vector> 
#include <iostream>
#include <fstream>
using namespace std;

#include "Citizen.h"

#ifndef CITY_H_
#define CITY_H_

class City
{
private:
	string _name;
	int _size;
//do i need this? why? don't really understand what i'm doing here
	vector<Citizen*> citizenList;
public:
//constructors; get functions for name & size
	string getname;
	int getsize;
	City();
	City(string name, int size);
	~City();
//here are the citizen retrieval program, the citizen addition mechanism, and the hue favorability assemblage
	Citizen* citizenatindex(int index);
	void addCitizen(Citizen* citizen);
	int getCitizensForFavoriteColor();
//i tried to make vectors for citizen list & color preference, with questionable success
	vector<Citizen*> citizenList();
	vector<Citizen*> bluelovers;
	vector<Citizen*> greenlovers;
	vector <Citizen*> getfavoritecolor(string color);
	vector <Citizen*> setfavoritecolor(string color);
};

#endif CITY_H_