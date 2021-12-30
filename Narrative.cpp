//
// Created by Dulanya Cooray on 12/28/21.
//
#include <iostream>
#include <vector>
#include<string>
#include "Graph.h"
#include "Narrative.h"

Narrative::Narrative() {
    currentPassage = 0;
    passageID = {{0, "heartbeat"}, {1, "credits"}, {3, "begin"}};
    storyGraph = new Graph(3);
}

void Narrative::newStoryGraph(std::vector<std::vector<int>> adjList) {

}


