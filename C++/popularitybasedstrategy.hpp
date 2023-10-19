#pragma once
#include "recommendationstrategy.hpp"

class PopularityBasedStrategy : public RecommendationStrategy {
    public:
        void recommend(string userId) {
            cout<<"Recommending user "<<userId<<" according to popularity based strategy."<<endl;
        }
};