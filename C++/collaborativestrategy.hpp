#pragma once
#include "recommendationstrategy.hpp"

class CollaborativeStrategy : public RecommendationStrategy {
    public:
        void recommend(string userId) {
            cout<<"Recommending user "<<userId<<" according to collaborative strategy."<<endl;
        }
};