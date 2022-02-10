#ifndef GRAPH_ADJ_MATRIX
#define GRAPH_ADJ_MATRIX

typedef struct mygraph graph;
graph *create_graph(int num_nodes);
int add_edge(graph *g, unsigned int from, unsigned int to);
int has_edge(graph *g, unsigned int from, unsigned int to);
int delete_edge(graph *g, unsigned int from, unsigned int to);
void print_graph(graph *g);
void destroy_graph(graph *g);

#endif
