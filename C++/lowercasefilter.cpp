#include "lowercasefilter.hpp"

void LowerCaseFilter::preprocess(string data) {
    cout<<"Preprocessing...Converting data to lowercase"<<endl;
    //can be done outside as well
    setNext(new RemoveStopWordsFilter());
    if (nextPreprocessor) {
        nextPreprocessor->preprocess(data);
    }
}
