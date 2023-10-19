#pragma once
#include "common.hpp"

class UserProfile {
    int age;
    string name;
    string region;
    vector<string> viewHistory;
    string gender;
public:
    void setUserID(int userID);
    void addInteraction(const string& itemID, int rating);
};

