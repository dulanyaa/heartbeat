//
// Created by Dulanya Cooray on 12/28/21.
//

#ifndef HEARTBEAT_NARRATIVE_H
#define HEARTBEAT_NARRATIVE_H
#include <iostream>
#include <vector>
#include <string>
#include "Graph.h"
#include <sstream>
#include <unordered_map>



class Narrative {
private:
    int currentPassage;
    Graph* storyGraph;
    std::unordered_map<int, std::string> passageID;


public:
    Narrative();
    std::vector<std::list<int>> newAdjList();
    void printGraph();
    void printGraph(int vertex);
    std::unordered_map<int, std::string> getPassageID(std::stringstream line);
    //void nextPassage();
    //void prevPassage();
    ~Narrative();
};


#endif //HEARTBEAT_NARRATIVE_H
