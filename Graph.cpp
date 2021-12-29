//
// Created by Dulanya Cooray on 12/29/21.
//

#pragma once
#include "Graph.h"
#include <iostream>
#include<list>
#include<vector>

Graph::Graph(int vertice) {
    V = vertice;
    for (int i = 0; i < V; i++) {
        adjlist = new std::list<int> [vertice];
    }
}
void Graph::addEdge(int vertice, int edgeTo) {
    adjlist[vertice].push_back(edgeTo);
    adjlist[edgeTo].push_back(vertice);
}

Graph::~Graph() {
    //TO-DO
}