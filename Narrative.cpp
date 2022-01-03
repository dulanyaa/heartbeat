//
// Created by Dulanya Cooray on 12/28/21.
//
#include <iostream>
#include <vector>
#include "Graph.h"
#include "Narrative.h"

/**
 * Initializes a new Narrative class. Only used at the start of the story.
 */
Narrative::Narrative() {
    currentPassage = 0;
    //passageID needs to be read from the file
    passageID = {{0, "heartbeat"}, {1, "credits"}, {3, "begin"}};
    storyGraph = new Graph(newAdjList());
}

/**
 * Reads through the file that contains data for the story. Then generates an
 * adjacency list that can be used to represent it in a graph.
 * @return adjacency list (a vector<list>)
 */
//will be used eventually to read from the file
std::vector<std::list<int>> Narrative::newAdjList() {
    std::vector<std::list<int>> adjList = {{1, 2}, {}, {}};
    return adjList;
}

/**
 * A private function that takes in a line from the input file, and allows each
 * passage to be connected to the node at which it should appear.
 * @param line
 * @return unordered map (passageID)
 */
std::unordered_map<int, std::string> getPassageID(std::stringstream line) {

}

/**
 * destructor
 */
 Narrative::~Narrative() {}






/*
 * TEST METHODS
 * NOT INCLUDED IN THE FINAL VERSION. HERE ONLY FOR TESTING PURPOSES.
 */

/**
 * Prints out a list of all the vertices, and what edges each one has.
 */
void Narrative::printGraph() {
    for (int i = 0; i < 3; i++) {
        std::list<int> edges = storyGraph->returnAdjList(i);
        std::cout << "vertex " << i << "has edges to";
        std::for_each(edges.cbegin(), edges.cend(), [] (const auto t) {std::cout << t;});
        std::cout << '\n';
    }
}


/**
 * Prints out the edges of a particular vertex.
 * @param vertex
 */
void Narrative::printGraph(int vertex) {
    std::list<int> edges = storyGraph->returnAdjList(vertex);
    std::cout << "vertex " << vertex << "has edges to";
    //std::for_each(edges.cbegin(), edges.cend(), [] (const auto t) {std::cout << passageID[t];});
    //for now, above error a non-issue. display function will probs operate differently
    std::cout << '\n';
}
