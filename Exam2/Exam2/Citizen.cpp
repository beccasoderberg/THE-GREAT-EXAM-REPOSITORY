#include "Citizen.h"

class Citizen
{
private:
//i don't think i should have needed these here. when i take them away i get errors. (???)
	int _id;
	string _first;
	string _last;
	string _color;

public:
//default consrtuctor
	Citizen::Citizen()
	{
		_id = 1;
		_first = "brandon";
		_last = "semenuk";
		_color = "green";
	}
	Citizen::Citizen(int id, string first, string last, string color)
	{
		_id = id;
		_first = first;
		_last = last;
		_color = color;
	}
//get & set
	int getId()
	{
		return _id;
	}
	string getFirstName()
	{
		return _first;
	}
	string getLastName()
	{
		return _last;
	}
	string getFavoriteColor()
	{
		return _color;
	}
	void setFavoriteColor(string color)
	{
		_color = color;
	}
//pointer thing i guess
	Citizen(Citizen* c)
	{
		if (c != NULL)
		{
			_id = c->getId();
			_first = c->getFirstName();
			_last = c->getLastName();
			_color = c->getFavoriteColor();
		}
	}

};