/**
* @file mins_func.h
* @brief hlavi�kov� soubor ,kter� obsahuje definice obecn�ch funkc�
*
*
*/
#include <string>
#include"Graph.h"

using namespace std;


void separeAwrite(string line, Graph* g);
void printm(int** g, int n);
int** makemeint(Graph* g, int n);
