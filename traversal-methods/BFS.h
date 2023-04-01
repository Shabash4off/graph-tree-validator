#ifndef GRAPH_BFS_H
#define GRAPH_BFS_H


#include "TraversalMethod.h"

class BFS : public TraversalMethod {
public:
    set<unsigned int> execute(map<unsigned int, list<unsigned int>> & edges, unsigned int root) override;
};


#endif //GRAPH_BFS_H
