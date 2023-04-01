#include "Graph.h"

void Graph::edge(unsigned int node_a, unsigned int node_b) {
    _nodes.insert(node_a);
    _nodes.insert(node_b);

    _edges[node_a].push_back(node_b);
    _edges[node_b].push_back(node_a);

    _nodes_count = _nodes.size();
    _edges_count++;
}

unsigned int Graph::nodes_count() const {
    return _nodes_count;
}

unsigned int Graph::edges_count() const {
    return _edges_count;
}


bool Graph::is_tree() {
    unsigned int root = *_nodes.begin();

    return _edges_count == _nodes_count - 1
        && _traversal_method->execute(_edges, root).size() == _nodes_count;
}

void Graph::set_traversal_method(unique_ptr<TraversalMethod> &&traversal_method) {
    _traversal_method = move(traversal_method);
}
