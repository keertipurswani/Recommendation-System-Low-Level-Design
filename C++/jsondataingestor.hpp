#pragma once
#include "dataingestor.hpp"

class JSONDataIngestor : public DataIngestor {
    public:
        JSONDataIngestor(string fileName) {
            cout<<"Loading JSON file "<<fileName<<endl;
        }
        void loadData() {
            cout<<"Loading JSON Data!"<<endl;
        }
};