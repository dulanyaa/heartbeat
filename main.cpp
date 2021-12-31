#include <iostream>
#include <SFML/Graphics.hpp>
#include "Narrative.h"
#include "Graph.h"

int main() {
    Narrative test = Narrative();
    while (true) {
        int vertice = 5;
        std::cin >> vertice;
        test.printGraph(vertice);
    }
}
