#ifndef _GRAPHS_H
#define _GRAPHS_H

typedef struct mygraph graph;

graph *create_graph(int num_nodes);
void destroy_graph(graph *g);
void print_graph(graph *g);
int add_edge(graph *g, unsigned int from, unsigned int to);
int has_edge(graph *g, unsigned int from, unsigned int to);

#endif
