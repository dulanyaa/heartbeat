//
// Created by Dulanya Cooray on 12/29/21.
//

#ifndef HEARTBEAT_GRAPH_H
#define HEARTBEAT_GRAPH_H

#include <iostream>
#include<list>


class Graph {
private:
    int V;
    std::list<int> *adjlist;

public:
    explicit Graph(int V);
    void addEdge(int vertice, int edgeTo); //note: since undirected, must connect both ways?
    ~Graph();
};


#endif //HEARTBEAT_GRAPH_H
