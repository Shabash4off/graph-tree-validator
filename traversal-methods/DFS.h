#ifndef GRAPH_DFS_H
#define GRAPH_DFS_H


#include "TraversalMethod.h"

class DFS : public TraversalMethod {
public:
    set<unsigned int> execute(map<unsigned int, list<unsigned int>> & edges, unsigned int root) override;
};


#endif //GRAPH_DFS_H
