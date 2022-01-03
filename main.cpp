#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <SFML/Graphics.hpp>
#include "Narrative.h"
#include "Graph.h"

#define INPUT_FILE = "Test_passageID.csv";

int main() {

    Narrative test = Narrative();
    std::string word, line;
    std::fstream file ("Test_passageID.csv", std::ios::in);
    if(file.is_open())
    {
        while(getline(file, line))
        {
            std::stringstream str(line);
            Narrative::getPassageID(str);

            /*row.clear();

            stringstream str(line);

            while(getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);*/
        }
    }
    else
        std::cout<<"Could not open the file\n";



    int x = 8;
    while (x < 7) {
        int vertex = 5;
        std::cin >> vertex;
        test.printGraph(vertex);
        x--;
    }


}
