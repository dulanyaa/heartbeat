//
// Created by Dulanya Cooray on 12/29/21.
//

#pragma once
#include "Graph.h"
#include <iostream>
#include<list>
#include<vector>


/**
 * Creates a new Graph using the provided adjacency list.
 * @param adjacent (derived by Narrative)
 */
Graph::Graph(std::vector<std::list<int>> adjacent) {
    V = adjacent.size();
    adjlist = adjacent;
}

/**
 * Add a new edge to be added to the adjacency list
 * @param edgeTo, vertex
 */
void Graph::addEdge(int vertex, int edgeTo) {
    adjlist[vertex].push_back(edgeTo);
    //adjlist[edgeTo].push_back(vertex); TODO: is the graph directed or no?
}

/**
 * Provides the edges of a specified vertex.
 * @param vertex
 * @return a list of all the vertexs it is connected to
 */
std::list<int> Graph::returnAdjList(int vertex) {
    return adjlist[vertex];
}

/**
 * Destructor: activated when????
 */
Graph::~Graph() {}