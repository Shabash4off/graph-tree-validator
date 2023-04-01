#include <set>
#include <map>
#include <list>

using namespace std;

#ifndef GRAPH_TRAVERSALMETHOD_H
#define GRAPH_TRAVERSALMETHOD_H


class TraversalMethod {
public:
    virtual ~TraversalMethod() = default;
    virtual set<unsigned int> execute(map<unsigned int, list<unsigned int>> & edges, unsigned int root) = 0;
};


#endif //GRAPH_TRAVERSALMETHOD_H
