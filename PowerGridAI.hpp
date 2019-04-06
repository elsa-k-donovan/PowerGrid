#ifndef POWERGRIDAI_HPP_
#define POWERGRIDAI_HPP_

#include "Strategy.hpp"

class PowerGridAI {
    private:
        Strategy* strategy;
    
    public:
        PowerGridAI(Strategy* strategy);
        void executePowerPlantBiddingStrategy();
        void executeResourceBuyingStrategy();
        void executeCityBuildingStrategy();
        ~PowerGridAI();
};

#endif
