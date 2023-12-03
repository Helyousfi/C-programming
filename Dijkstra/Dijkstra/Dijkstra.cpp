// Create the structure that represents the Graph
// Create the function void add_vertex()
// Create initialize_graph & min_distance 
// print_dijkstra
// Create dijkstraAlgorithm 

#include <iostream>
#define V 6
#define MAX_INT 10000

struct Graph {
	int vertices;
	int matrix[V][V];
};

void add_vertex(struct Graph* graph,
	int source,
	int destination,
	int weight)
{
	graph->matrix[source][destination] = weight;
	graph->matrix[destination][source] = weight;
}

void initialize_graph(struct Graph* graph, int vertices)
{
	graph->vertices = vertices;
	for (int i = 0; i < vertices; i++)
	{
		for (int j = 0; j < vertices; j++)
		{
			graph->matrix[i][j] = MAX_INT;
		}
	}
}

int min_distance(int dist[], int visited[])
{
	int min = MAX_INT, min_index;

	for (int i = 0; i < V; i++)
	{
		if (!visited[i] && dist[i] < min)
		{
			min = dist[i];
			min_index = i;
		}
	}
	return min_index;
}

void print_dijkstra(int dist[])
{
	std::cout << "Destination	 Distance" << std::endl;
	for (int i = 0; i < V; i++)
	{
		std::cout << i << "\t\t" << dist[i] << std::endl;
	}
}

void dijkstraAlgorithm(const struct Graph* graph,
	int source)
{
	int dist[V];
	int visited[V];

	for(int i = 0; i < V; i++)
	{
		dist[i] = graph->matrix[source][i];
		visited[i] = 0;
	}

	visited[source] = 1;
	dist[source] = 0;

	int count = 0;
	while (count < V - 1)
	{	
		// Find the nearest Node
		int u = min_distance(dist, visited);
		visited[u] = 1;

		for (int i = 0; i < V; i++)
		{
			if (!visited[i] && graph->matrix[u][i] < MAX_INT)
			{
				// Relaxation
				if (dist[u] + graph->matrix[u][i] < dist[i])
				{
					dist[i] = dist[u] + graph->matrix[u][i];
				}
			}
		}
		count++;
	}
	print_dijkstra(dist);
}



int main()
{
	struct Graph G;
	initialize_graph(&G, V);

	add_vertex(&G, 0, 1, 1);
	add_vertex(&G, 1, 3, 1);
	add_vertex(&G, 0, 2, 5);
	add_vertex(&G, 0, 4, 3);
	add_vertex(&G, 2, 5, 2);
	add_vertex(&G, 3, 2, 1);
	add_vertex(&G, 4, 5, 1);

	dijkstraAlgorithm(&G, 0);

	std::cin.get();

	return 0;
}