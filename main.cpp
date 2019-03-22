//  main.cpp
//  player
//  Driver class for Player object
//
/*
#include <iostream>
#include "player.hpp"
#include "City.h"
#include "GraphBuilder.h"

#include "HelperFunctions.hpp"

using namespace std;
using namespace HelperFunctions;


int main() {
    GameState gameState = GameStateIO::readXmlFile("powergrid_cities.map");
    std::vector<City> cities = gameState.getCities();
    std::vector<EdgeTriplet> edgeTriplets = gameState.getEdgeTriplets();
    std::cout << "hilo" << std::endl;

	for (int i = 0; i < cities.size(); i++) {
		std::cout << cities[i].getCityNumber() << endl;
	}

	
	for (int i = 0; i < edgeTriplets.size(); i++) {
		std::cout << std::get<0>(edgeTriplets[i]).getCityNumber() << endl;
	}

	

}
*/

//  main.cpp
//  player
//  Driver class for Player object
//

#include <iostream>
#include "player.hpp"
#include "City.h"
#include "GraphBuilder.h"
#include "Elektro.hpp"
#include "ResourceToken.hpp"

using namespace std;

int main() {

//============================== Assignment 1 ================================================
	/*
	Elektro elektro = Elektro(10, 5, 50);
	ResourceToken resource = ResourceToken(3, "oil");
	PowerPlant powerplant = PowerPlant(3, 2, 2, "oil", "");

	Player * p1 = new Player("Nicole", "Red");
	//p1.collectElektro(elektro);

	*/
	//Initiate Graph and Build Map
	GraphBuilder graph = GraphBuilder(42, "powergrid_cities.map");
	graph.buildMap();

	/*
	graph.printGraph();

	cout << endl;

	//prints the contents of the 2D vector "connected" from GraphBuilder.h
	//vector<vector<int>> vec = graph.getConnected();
  
	//for (int i = 0; i < vec.size(); i++) {
	//	cout << "for slot " << i << " there is: " << endl;
	//	for (int j = 0; j < vec[i].size(); j++) {
	//		cout << vec[i][j] << endl;
	//	}
	//}

	//bool check1, check2, check3;
	//Test Cases
	//graph.CostFromOneCityToAnother(0, 1);
	//std::cout << std::boolalpha;
	graph.test_SizeOfMap_and_FileMap();
	//cout << check3 << endl;
	graph.test_Duplicate_Edges();
	//cout << check1 << endl;
	graph.test_MissingEdges();
	//cout << check2 << endl;

	cout << endl;

	//add tokens to map
	graph.add_ElektrosToCity(elektro, "Berlin");
	graph.add_ResourcesToCity(resource, "Berlin");
	graph.add_PowerPlantToCity(powerplant, "Berlin");

	cout << endl;
	//print contents 
	graph.SearchCity("Berlin");

	cout << endl;

	//add player to city
	graph.AddPlayerToCity(p1, "Berlin");
	
	vector<City> citiesOwned = graph.FindCitiesOwnedByPlayer(p1);

	for (int i = 0; i < citiesOwned.size(); i++) {
		cout << "Player: " << p1->getName() << ", Color: " << p1->getColor()
			<< ", is in City: " << citiesOwned[i].getCityName() << endl;
	}

	cout << endl;

	//print contents
	graph.SearchCity("Berlin");

	cout << endl;

	//print cities owned by player
	p1->toString();

	cin.get();
	*/

	//============================== Assignment 2, task 2, ================================================
	
	/*
	//vector of Players
	vector<Player> players;
	players.push_back(Player("Nicole", "Red"));
	players.push_back(Player("Voldermort", "Green"));
	players.push_back(Player("Pikachu", "Blue"));
	players.push_back(Player("Smith", "Purple"));

	//Game loop !!!!

	int numPlayers = players.size();

	bool gameIsNotFinished = false;
	int round = 1;

	while (gameIsNotFinished == false){
		
		while (round >= 1) {
			vector<int> turns;
			
			if (round == 1) {

				for (int i = 0; i < numPlayers; i++) {
					turns[i].push_back(i);
				}

				for (int i = 0; i < numPlayers; i++) {
					players[i].setTurn(rand() % numPlayers);
				}
				for (int j = numPlayers; j > 0; j--) {


					if (players[i].getTurn() == players[j].getTurn()) {

					}
				}
			}
		}
	}*/
}

