//  player Header File

#pragma once
#include <iostream>
#include <cstdlib>
#include "PowerPlant.h"
#include "Elektro.hpp"
#include "City.h"
//#include "Market.hpp"
using namespace std;

class Player {
    
private:
    string name;
	string playerColor;
	vector<PowerPlant> powerPlants;
    Elektro wallet;
	vector<City> citiesOwned;

    int numCitiesOwned=0;
    int numPPOwned=0;
public:
    
	Player();
	Player(string name, string playerColor);
	~Player();
    
   	 void collectElektro(int _bill1, int _bill10, int _bill50);
   	 void spendElektros(int _bill1, int _bill10, int _bill50);
	//just prints the waller content
   	 void getWallet();
	//returns how much the players has
    int getTotalWallet();
	string getName();
	string getColor();
	vector<PowerPlant> getPowerPlant();
    int getNumCitiesOwned();
    int getNumPPOwned();
	void addCity(City city);
   // void powerCity(City city, PowerPlant powerpant, string type, Market market*);
	vector<City> getCitiesOwned();
	void addPowerPlant(PowerPlant p);
    
    void powerCity(City city, PowerPlant powerplant, string type);
    int getCitiesPowered();
    //setting powered back to false as we are starting another round in the game
    void setCitiesPowered();
    int getTotalCoal();
    int getTotalOil();
    int getTotalGarbage();
    int getTotalUranium();
    
	void toString();
};
