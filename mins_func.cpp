/**
* @file mins_func.cpp
* @brief soubor který obsahuje obecné funkce
*
*
*/
#include <iostream>
#include "mins_func.h"
#include <string>

using namespace std;
const int INF = 999999;

/**
* Funkce ,která rozdìlí øadek na dva inty a mezi poté mezi nimi udìlá v grafu hranu
* @param line jeden øádek souboru
* @param g Pointer na graf do kterého se hrana zapíše
*/
void separeAwrite(string line, Graph* g)
{
    int a = line[0];
    int b = line[2];
    g->add_edge(a - 48, b - 48);

}

/**
* funkce na tisk grafu zapsaného jako matice
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
* funkce která pøevede Graph do matice.
* @param g Pointer na originalní graf
* @param n velikost grafu
* @return matrix Pøevedený graf
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