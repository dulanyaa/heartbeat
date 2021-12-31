//
// Created by Dulanya Cooray on 12/29/21.
//

#pragma once
#include "Graph.h"
#include <iostream>
#include<list>
#include<vector>

/*Graph::Graph(int vertice) {
    V = vertice;
    for (int i = 0; i < V; i++) {
        adjlist = new std::vector<int> [vertice];
    }
}*/

Graph::Graph(std::vector<std::list<int>> edges) {
    V = edges.size();
    adjlist = edges;
    for (int i = 0; i < V; i++) {
        if (!edges[i].empty()) {
            for (int j = 0; j < edges[i].size(); j++) {
                addEdge(i, edges[i][j]);
                //lists dont have immediate access - not an issue since the whole list is
                // traversed here anyway
            }
        }
    }
}

void Graph::addEdge(int vertice, int edgeTo) {

    adjlist[vertice].push_back(edgeTo);
    //adjlist[edgeTo].push_back(vertice); TODO: is the graph directed or no?
}

void Graph::printGraph() {

}

Graph::~Graph() {
    //TO-DO
}