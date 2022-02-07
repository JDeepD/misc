#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graphs.h"


struct mygraph {
	int num_nodes;
	int **edges;
};


graph *create_graph(int num_nodes) {
	graph *g = malloc(sizeof(*g));
	if (g == NULL)
		return NULL;
	
	g->num_nodes = num_nodes;
	g->edges = calloc(sizeof(int*), g->num_nodes);

	if (g->edges) {
		free(g);
		return NULL;
	}

	for (int i = 0; i < g->num_nodes; i++) {
		g->edges[i] = calloc(sizeof(int), g->num_nodes);
		if (g->edges[i] == NULL ) {
			destroy_graph(g);
			return NULL;
		}
	}

	return g;
}

void destroy_graph(graph *g) {

}

void print_graph(graph *g) {

}

int add_edge(graph *g, unsigned int from, unsigned int to) {
	return 0;
}

int has_edge(graph *g, unsigned int from, unsigned int to) {
	return 0;
}
