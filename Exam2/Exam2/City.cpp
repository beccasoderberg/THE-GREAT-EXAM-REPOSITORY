#include "Citizen.h"
#include "City.h"
#include "Citizen.cpp"

class City
{
private:
//again, these private variables seem unnecessary
	string _name;
	int _size;
public:
	vector<Citizen*> citizenList()
	{
//i never fixed the citizenlist thing, yeah, it comes up a lot
		citizenList.pushback(c);
	}
//a get function and then a constructor that retrieves citizen information 
		int populationSize()
	{
		return _size;
	}
	City::City(string name, int size)
	{
		_name = name;
		ifstream input(_name, ios::in);
		if (input.is_open())
		{
			string name, size;
			while (input >> id >> first >> last >> color);
			{
				Citizen* c = new Citizen(id, first, last, color);
				citizenList.pushback(c);
			}
		}
	}
//other things that you can do with the citizen list, or you could, if you knew how
	void getCitizenWithId(int id)
	{
		for (int i = 0; i < citizenList.size(); i++)
		{
			if (citizenList.id[i] = id)
				return first.citizenList[i] || last.citizenList[i];
		
		}
		
	}
	Citizen* citizenatindex(int index)
	{
		for (index >= 0 && index < citizenList.size())
		{
			return citizenList[index];
		}
	}
	void addCitizen(Citizen* citizen)
	{
		Citizen* c = new Citizen(citizen);
		citizenList.push_back(c);
	}

//ok, this is where it gets really shady	
	vector<Citizen*> bluelovers
	{
		if (color.c == blue)
		{
			bluelovers.pushback(c);
		}
	}
	vector<Citizen*> greenlovers
	{
		if (color.c == green)
		{
			greenlovers.pushback(c);
		}
	}
	vector <Citizen*> getfavoritecolor(string color)
	{
		for (index >= 0 && index < citizenList.size())
		{
			return color.citizenList[index];
		}
	}
	vector <Citizen*> setfavoritecolor(string color)
	{
		_color = color;
	}
//destructor
	City::~City()
	{
		fstream output(_name, ios::out);
		if (output.is_open())
		{
			for (int i = 0; i < citizenList.size(); i++)
			{
				outfile << citizenList[i]->getId() << " "
					<< citizenList[i]->getFirstName() << " "
					<< citizenList[i]->getLastName() << " "
					<< citizenList[i]->getColor() << endl;
				delete citizenList[i];
			}
		}
		else
		{
			for (int i = 0; i < citizenList.size(); i++)
			{
				delete citizenList[i];
			}
		}
	}
	Citizen* citizenatindex(int index)
	{
		if (index >= 0 && index < citizenList.size())
		{
			return citizenList[index];
		}
		return NULL;
	}
	int getCitizensForFavoriteColor()
	{
		for (index >= 0 && index < citizenList.size())
		{
			if color.citizenList[index] = color
				return color.citizenList[index];
		}
	}
};