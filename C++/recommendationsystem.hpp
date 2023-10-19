#pragma once
#include "recommendationengine.hpp"
#include "userprofile.hpp"
#include "feedbackcollector.hpp"
#include "recommendation.hpp"
#include "jsondataingestor.hpp"
#include "xmldataingestor.hpp"
#include "collaborativestrategy.hpp"
#include "popularitybasedstrategy.hpp"
#include "lowercasefilter.hpp"
#include "removestopwordsfilter.hpp"

class RecommendationSystem {
    DataIngestor* dataIngestor;
    DataPreprocessor* preProcessor;
    RecommendationEngine* recommender;
    FeedbackCollector* feedbackCollector;
public:
    RecommendationSystem() {
        recommender = new RecommendationEngine();
        feedbackCollector = new FeedbackCollector();
        preProcessor = new LowerCaseFilter();
    }
    void start();
    void recommendForUser(string userId);
};