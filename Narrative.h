//
// Created by Dulanya Cooray on 12/28/21.
//

#include <iostream>
#include <vector>
#include<string>
#include "Graph.h"
#include<unordered_map>

#ifndef HEARTBEAT_NARRATIVE_H
#define HEARTBEAT_NARRATIVE_H


class Narrative {
private:
    int currentPassage;
    Graph *storyGraph;
    std::unordered_map<int, std::string> passageID;

public:
    Narrative();
    void newStoryGraph(std::vector< std::vector<int>>);
    void nextPassage();
    void prevPassage();
    ~Narrative();
};


#endif //HEARTBEAT_NARRATIVE_H
