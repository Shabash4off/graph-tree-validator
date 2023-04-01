#include <iostream>
#include <fstream>
#include "Graph.h"
#include "traversal-methods/DFS.h"
#include "traversal-methods/BFS.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    ifstream f("../Graph.txt");

    if (!f.is_open())
    {
        cout << "Ошибка чтения" << endl;
        return 1;
    }

    Graph graph;

    string method;
    f >> method;

    if (method == "bfs")
        graph.set_traversal_method(make_unique<BFS>());
    else if (method == "dfs")
        graph.set_traversal_method(make_unique<DFS>());
    else
    {
        cout << "Неизвестный метод обхода";
        return 1;
    }

    unsigned int node_a, node_b;

    while (f >> node_a >> node_b)
    {
        cout << node_a << "\t-\t" << node_b << endl;
        graph.edge(node_a, node_b);
    }

    cout << "Вершин: " << graph.nodes_count() << "\tГраней: " << graph.edges_count() << endl;

    bool is_tree = graph.is_tree();

    if (is_tree)
        cout << "Граф - дерево";
    else
        cout << "Граф - не деерево";

    cout << endl;
}
