#include "graph_adj_mat.h"
#include <stdio.h>
#include <stdlib.h>

struct mygraph {
	unsigned int num_nodes;
	int **graph_matrix_edges;
};

graph *create_graph(int num_nodes)
{
	graph *g = (graph*)malloc(sizeof(*g));

	g->num_nodes = num_nodes;
	g->graph_matrix_edges = (int**)calloc(sizeof(int*), num_nodes);

	for (int i = 0; i < g->num_nodes; i++) {
		g->graph_matrix_edges[i] = (int*)calloc(sizeof(int), g->num_nodes);
	}

	return g;
};


void destroy_graph(graph *g)
{
	for (int i = 0; i < g->num_nodes; i++) {
		free(g->graph_matrix_edges[i]);
	}
	free(g);
}

void print_graph(graph *g)
{
	printf("digraph{\n");
	for (int from = 0; from < g->num_nodes; from++) {
		for (int to = 0; to < g->num_nodes; to++) {
			if (g->graph_matrix_edges[from][to])
				printf("%d -> %d\n", from, to);
		}
	}
	printf("}\n");
}

int add_edge(graph *g, unsigned int from, unsigned int to)
{
	g->graph_matrix_edges[from][to] = 1;
	return 0;
}

int delete_edge(graph *g, unsigned int from, unsigned int to)
{
	g->graph_matrix_edges[from][to] = 0;
	return 0;
}


int main(void)
{
	graph *grp = create_graph(10);
	add_edge(grp, 0, 2);
	add_edge(grp, 1, 2);
	add_edge(grp, 0, 3);
	add_edge(grp, 1, 4);
	add_edge(grp, 2, 2);
	add_edge(grp, 4, 2);

	print_graph(grp);

	destroy_graph(grp);
}
