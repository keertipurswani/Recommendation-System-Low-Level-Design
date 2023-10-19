#pragma once
#include "dataingestor.hpp"

class XMLDataIngestor : public DataIngestor {
    public:
        XMLDataIngestor(string fileName) {
            cout<<"Loading XML file "<<fileName<<endl;
        }
        void loadData() {
            cout<<"Loading XML Data!"<<endl;
        }
};