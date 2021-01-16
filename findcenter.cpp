/**
* @file findcenter.cpp
* @brief soubor který obsahuje funkce ,které jsou potøeba k nalezení centra grafu.
*
*
*/
#include "findcenter.h"

#include <set>
const int INF = 999999;

/**
* Floydùv–Warshallùv algoritmus
* @param matrix graf urèený ke zpracovaní
* @param n velikost onoho grafu
* @return matrix zpracovaný graf
*/
int** floydW(int** matrix, int n)
{

    for (int k = 0; k < n; k++) {
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < n; i++) {
                if (matrix[i][k] + matrix[k][j] < matrix[i][j])
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }
    return matrix;
}
/**
* Funkce,která najde ekcentricitu grafu
* @param n velikost grafu
* @param e pointer na pole do kterého se bude ukladat excentricita
* @param matrix graf ve kterém se bude ekcentricita poèítat
* @return e nalezená excentricita
*/
int* find_ecc(int n, int* e, int** matrix)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            e[i] = max(e[i], matrix[i][j]);
        }
    }
    return e;
}
/**
* Funkce,která najde radius grafu
* @param e pointer na pole v kterémje uložena excentricita grafu
* @param n velikost grafu
* @return rad nalezený radius grafu
*/
int find_radius(int* e, int n)
{
    int  rad = INF;
    for (int i = 0; i < n; i++) {
        rad = min(rad, e[i]);
    }
    return rad;
}
/**
* Funkce,která najde centrum grafu
* @param centrum vektor do ,kterého funkce uloží centrum grafu
* @param e pointer na pole v kterémje uložena excentricita grafu
* @param rad nalezený radius grafu
* @param n velikost grafu
*/
void find_center(vector<int>& centrum, int* e, int rad, int n)
{
    for (int i = 0; i < n; i++) {
        if (e[i] == rad) {
            centrum.insert(centrum.end(), i);
        }
    }
}
