/**
* @file mins_func.cpp
* @brief soubor kter� obsahuje obecn� funkce
*
*
*/
#include <iostream>
#include "mins_func.h"
#include <string>

using namespace std;
const int INF = 999999;

/**
* Funkce ,kter� rozd�l� �adek na dva inty a mezi pot� mezi nimi ud�l� v grafu hranu
* @param line jeden ��dek souboru
* @param g Pointer na graf do kter�ho se hrana zap�e
*/
void separeAwrite(string line, Graph* g)
{
    int a = line[0];
    int b = line[2];
    g->add_edge(a - 48, b - 48);

}

/**
* funkce na tisk grafu zapsan�ho jako matice
* @param g graf
* @param n velikost grafu
*/
void printm(int** g, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << g[i][j];
        }
        cout << "\n";
    }
}
/**
* funkce kter� p�evede Graph do matice.
* @param g Pointer na originaln� graf
* @param n velikost grafu
* @return matrix P�eveden� graf
*/
int** makemeint(Graph* g, int n)
{
    int** matrix = new int* [n];

    for (int i = 0; i < n; i++) {

        matrix[i] = new int[n];

        for (int j = 0; j < n; j++)
        {

            if (i == j)
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = INF;
            }
        }

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (g->matrix[i][j] == true)
            {
                matrix[i][j] = 1;
            }

        }

    }
    return matrix;
}