#include "RemoveStopWordsFilter.hpp"
#include <iostream>

void RemoveStopWordsFilter::preprocess(string data) {
    // In a real system, you would remove stop words here.
    // For this example, we will simply print a message.
    cout << "Preprocessing...Stop words removed." << endl;

    if (nextPreprocessor) {
        nextPreprocessor->preprocess(data);
    }
}
