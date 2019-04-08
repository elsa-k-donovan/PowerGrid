#ifndef POWERPLANT_HPP_
#define POWERPLANT_HPP_

#include "GameCard.h"
#include <vector>
//#include "Market.hpp"

class PowerPlant :
	public GameCard
{
public:
	PowerPlant();

	PowerPlant(int _cardNumber, int _numOfCitiesPowered, int _coal_needed, int _oil_needed, int _garbage_needed, int _uranium_needed);
	virtual ~PowerPlant();

	int getCardNumber();
	void setCardNumber(int _cardNumber);

	int getCitiesPowered();
	void setCitiesPowered(int _number);

	//stocks a resource onto the power plant card
	void stockRT(string type, int num);

	//gets the number of a resource type stocked on power plant card
	int getRTStocked(string type);

	//gets the number of a resource type needed
	int getRTNeeded(string type);

	//consumes the required amount of a certain type of resource to power the city
	void powerCity(string type);

	//check if this type of resource is needed
	bool checkIfNeeded(string type);

	//cehck if there is space to stock more tokens
	bool checkSpace(string type, int num);

	//check if enough tokens are stocked to power the city
	bool checkIfEnoughStock(string type);
    bool isGreen();
	virtual void toString() override;

	int get_numCitiesPowered_ACTIVE();
    
    static vector<PowerPlant*> futureMarket;
    static vector<PowerPlant*> presentMarket;
    
private:

	int numCitiesPowered_ACTIVE = 0;
	int cardNumber;
	int numCitiesPowered;

	int oil_needed = 0;
	int coal_needed = 0;
	int garbage_needed = 0;
	int uranium_needed = 0;

	int oil_stocked = 0;
	int coal_stocked = 0;
	int garbage_stocked = 0;
	int uranium_stocked = 0;
	bool green = false;
};

#endif
