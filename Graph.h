//
// Created by Dulanya Cooray on 12/29/21.
//

#ifndef HEARTBEAT_GRAPH_H
#define HEARTBEAT_GRAPH_H

#include <iostream>
#include<list>
#include<vector>


class Graph {
private:
    int V;
    std::vector<int> *adjlist;

public:
    explicit Graph(int V);
    explicit Graph(std::vector< std::vector<int>>); //index = vertice, list = list of edges it has
    void addEdge(int vertice, int edgeTo); //note: since undirected, must connect both ways?
    ~Graph();
};


#endif //HEARTBEAT_GRAPH_H
