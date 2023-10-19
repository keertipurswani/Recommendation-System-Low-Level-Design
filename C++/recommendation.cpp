#include "recommendation.hpp"
#include <iostream>

Recommendation::Recommendation(vector<string> items)
    : items(items){}

void Recommendation::setContext(string context) {
    this->context = context;
}

void Recommendation::display() {
    cout << "Items: ";
    for (const string& item : items) {
        cout << item << " ";
    }
    cout << endl;
   
    if (!context.empty()) {
        cout << "Context: " << context << endl;
    }
}
