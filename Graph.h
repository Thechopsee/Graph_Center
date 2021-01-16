/**
* @file Graph.h
* @brief Hlavièkový soubor který obsahuje definici tøídy Graph
*
*
*/

class Graph
{
public:
	bool** matrix;
	int hrany;
	Graph(int pochran);
	void add_edge(int i, int j);
	bool is_edge(int i, int j);
	void printg();
	
};

