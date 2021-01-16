/**
* @file findcenter.cpp
* @brief soubor kter� obsahuje funkce ,kter� jsou pot�eba k nalezen� centra grafu.
*
*
*/
#include "findcenter.h"

#include <set>
const int INF = 999999;

/**
* Floyd�v�Warshall�v algoritmus
* @param matrix graf ur�en� ke zpracovan�
* @param n velikost onoho grafu
* @return matrix zpracovan� graf
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
* Funkce,kter� najde ekcentricitu grafu
* @param n velikost grafu
* @param e pointer na pole do kter�ho se bude ukladat excentricita
* @param matrix graf ve kter�m se bude ekcentricita po��tat
* @return e nalezen� excentricita
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
* Funkce,kter� najde radius grafu
* @param e pointer na pole v kter�mje ulo�ena excentricita grafu
* @param n velikost grafu
* @return rad nalezen� radius grafu
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
* Funkce,kter� najde centrum grafu
* @param centrum vektor do ,kter�ho funkce ulo�� centrum grafu
* @param e pointer na pole v kter�mje ulo�ena excentricita grafu
* @param rad nalezen� radius grafu
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
