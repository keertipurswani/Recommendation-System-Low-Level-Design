#include "recommendationsystem.hpp"
#include <iostream>

using namespace std;

int main() {
    RecommendationSystem* recommendationSystem = new RecommendationSystem;
    recommendationSystem->start();
    recommendationSystem->recommendForUser("user 1");
    return 0;
}
