/**
* @file mins_func.h
* @brief hlavièkový soubor ,který obsahuje definice obecných funkcí
*
*
*/
#include <string>
#include"Graph.h"

using namespace std;


void separeAwrite(string line, Graph* g);
void printm(int** g, int n);
int** makemeint(Graph* g, int n);
