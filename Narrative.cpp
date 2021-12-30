//
// Created by Dulanya Cooray on 12/28/21.
//
#include <iostream>
#include <vector>
#include "Graph.h"
#include "Narrative.h"

Narrative::Narrative() {
    currentPassage = 0;
    passageID = {{0, "heartbeat"}, {1, "credits"}, {3, "begin"}};
    storyGraph = new Graph(newAdjList());
}

//will be used eventually to read from the file
std::vector<std::vector<int>> Narrative::newAdjList() {
    std::vector<std::vector<int>> adjList = {{1, 2}, {}, {}};
    return adjList;
}


