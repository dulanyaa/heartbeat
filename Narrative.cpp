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
std::vector<std::list<int>> Narrative::newAdjList() {
    std::vector<std::list<int>> adjList = {{1, 2}, {}, {}};
    return adjList;
}

void Narrative::printGraph() {
    for (int i = 0; i < 3; i++) {
        std::list<int> edges = storyGraph->returnAdjList(i);
        std::cout << "vertice " << i << "has edges to";
        std::for_each(edges.cbegin(), edges.cend(), [] (const auto t) {std::cout << t;});
        std::cout << '\n';
    }
}

void Narrative::printGraph(int vertice) {
    std::list<int> edges = storyGraph->returnAdjList(vertice);
    std::cout << "vertice " << vertice << "has edges to";
    std::for_each(edges.cbegin(), edges.cend(), [] (const auto t) {std::cout << t;});
    std::cout << '\n';
}

