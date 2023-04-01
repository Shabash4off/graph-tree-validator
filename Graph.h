#include <list>
#include <map>
#include <set>
#include <memory>
#include "traversal-methods/TraversalMethod.h"

using namespace std;

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H


class Graph {
private:
    unique_ptr<TraversalMethod> _traversal_method;
    unsigned int _nodes_count = 0;
    unsigned int _edges_count = 0;
    set<unsigned int> _nodes;
    map<unsigned int, list<unsigned int>> _edges;
public:
    explicit Graph(unique_ptr<TraversalMethod> &&traversal_method = {}): _traversal_method(move(traversal_method)) {};
    void set_traversal_method(std::unique_ptr<TraversalMethod> &&traversal_method);
    void edge(unsigned int node_a, unsigned int node_b);
    [[nodiscard]] unsigned int nodes_count() const;
    [[nodiscard]] unsigned int edges_count() const;
    bool is_tree();
};


#endif //GRAPH_GRAPH_H
