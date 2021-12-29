//
// Created by Dulanya Cooray on 12/28/21.
//

#ifndef HEARTBEAT_PASSAGE_H
#define HEARTBEAT_PASSAGE_H

#include <iostream>
#include <vector>
#include "Choice.h"


class Passage {
private:
    std::string displayText;
    std::vector<Choice> choices; //need to turn into a map? keep track of what is chosen?
    Passage next;
    Passage prev;
    bool isVisited;
public:
    void display() {};
    void goToNext() {};
    void goToPrev() {};
};


#endif //HEARTBEAT_PASSAGE_H
