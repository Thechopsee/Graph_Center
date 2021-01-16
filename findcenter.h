/**
* @file findcenter.h
* @brief Hlavièkový soubor který odkazuje na funkce ,které jsou potøeba k nalezení centra grafu.
*
*
*/

#include <vector>
using namespace std;
int** floydW(int** matrix, int n);
int* find_ecc(int n, int* e, int** matrix);
int find_radius(int* e, int n);
void find_center(vector<int>& cen, int* e, int rad, int n);
