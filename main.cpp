
#include<iostream>


using namespace std;
#include "PowerPlant.h"
#include "player.hpp"
static vector<Player> deck;

static void makingDeck()
{
    PowerPlant p1 = PowerPlant(3, 1, 2, "oil", "");
    PowerPlant p2 = PowerPlant(4, 1, 2, "coal", "");
    PowerPlant p3 = PowerPlant(5, 1, 2, "coal", "oil");
    PowerPlant p4 = PowerPlant(6, 1, 1, "garbage", "" );
    PowerPlant p5 = PowerPlant(7, 2, 3, "oil", "");
    PowerPlant p6 = PowerPlant(8, 2, 3, "coal", "");
    PowerPlant p7 = PowerPlant(9, 1, 1, "oil", "");
    PowerPlant p8 = PowerPlant(10, 2, 2, "coal", "");
    PowerPlant p9 = PowerPlant(11, 2, 1, "uranium", "");
    PowerPlant p10 = PowerPlant(12, 2, 2, "oil", "coal");
    PowerPlant p11 = PowerPlant(13, 1, 0, "", "");
    PowerPlant p12 = PowerPlant(14, 2, 2, "garbage", "");
    PowerPlant p13 = PowerPlant(15, 3, 2, "coal", "");
    PowerPlant p14 = PowerPlant(16, 3, 2, "oil", "");
    PowerPlant p15 = PowerPlant(17, 2, 1, "uranium", "");
    PowerPlant p16 = PowerPlant(18, 2, 0, "", "");
    PowerPlant p17 = PowerPlant(19, 3, 2, "garbage", "");
    PowerPlant p18 = PowerPlant(20, 5, 3, "coal", "");
    PowerPlant p19 = PowerPlant(21, 4, 2, "coal", "oil");
    PowerPlant p20 = PowerPlant(22, 2, 0, "", "");
    PowerPlant p21 = PowerPlant(23, 3, 1, "uranium", "");
    PowerPlant p22 = PowerPlant(24, 4, 2, "garbage", "");
    PowerPlant p23 = PowerPlant(25, 5, 2, "coal", "");
    PowerPlant p24 = PowerPlant(26, 5, 2, "oil", "");
    PowerPlant p25 = PowerPlant(27, 3, 0, "", "");
    PowerPlant p26 = PowerPlant(28, 4, 1, "uranium", "");
    PowerPlant p27 = PowerPlant(29, 4, 2, "oil", "coal");
    PowerPlant p28 = PowerPlant(30, 6, 3, "garbage", "");
    PowerPlant p29 = PowerPlant(31, 6, 3, "coal", "");
    PowerPlant p30 = PowerPlant(32, 6, 3, "oil", "");
    PowerPlant p31 = PowerPlant(33, 4, 0, "", "");
    PowerPlant p32 = PowerPlant(34, 5, 1, "uranium", "");
    PowerPlant p33 = PowerPlant(35, 5, 1, "oil", "");
    PowerPlant p34 = PowerPlant(36, 7, 3, "coal", "");
    PowerPlant p35 = PowerPlant(37, 4, 0, "", "");
    PowerPlant p36 = PowerPlant(38, 7, 3, "garbage", "");
    PowerPlant p37 = PowerPlant(39, 6, 1, "uranium", "");
    PowerPlant p38 = PowerPlant(40, 6, 2, "oil", "");
    PowerPlant p39 = PowerPlant(42, 6, 2, "coal", "");
    PowerPlant p40 = PowerPlant(44, 5, 0, "", "");
    PowerPlant p41 = PowerPlant(46, 7, 3, "oil", "coal");
    PowerPlant p42 = PowerPlant(50, 6, 0, "", "");
    
    for (int i = 0; i < 42 ; i++)
    {
        deck.push_back("p"+ to_string(i));
    }
    
    for (int i = 0; i < 50 ; i++)
    {
        deck[i].display() ;
    }
}



int main() {
    
    makingDeck();
	/*
    GraphBuilder graph = GraphBuilder(42);
	graph.buildMap();
	//print the adjacency list representation of graph
	graph.printGraph();

	graph.SearchCity(0);

	std::cout << std::boolalpha;
	std::cout << graph.IsCityAdjacentToOtherCity(1, 3) <<endl;
	std::cout << graph.CostFromOneCityToAnother(1, 3) << endl;
     
     */
    
    //source:https://www.tutorialspoint.com/cplusplus/cpp_return_arrays_from_functions.htm
    PowerPlant p = PowerPlant(23, 2, 1, "coal", "garbage");
    cout << "Ressource tokens of p :" << endl;

    
    p.toString();
    
    
    //creating powerplant cards for the card deck
    
    return 0;
}