#include <stack>
#include "DFS.h"

set<unsigned int> DFS::execute(map<unsigned int, list<unsigned int>> &edges, unsigned int root) {
    set<unsigned int> accessible;
    stack<unsigned int> unvisited_nodes;

    unvisited_nodes.push(root);
    accessible.insert(root);

    while (!unvisited_nodes.empty())
    {
        unsigned int current_node = unvisited_nodes.top();
        unvisited_nodes.pop();

        list <unsigned int> child_nodes = edges[current_node];

        for (unsigned int & child_node : child_nodes)
        {
            if (accessible.count(child_node))
                continue;

            unvisited_nodes.push(child_node);
            accessible.insert(child_node);
        }
    }

    return accessible;
}
