/**
 * @file main.cpp
 * @brief Program na vyhledaní centra grafu v jazyce c++
 * @author Sebastián Walenta(WAL0087)
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <fstream>
#include "main.h"

 /**
 * @brief  Funkce ,která provede všechny kroky programu.
 */
int main()
{
    int  d[4][4];
    vector <int>   center; 
    string line;
    string file_path = "Text.txt";
    
    int n = readfile_num(file_path);
    int* e = new int[n];
    Graph* graf = new Graph(n);
    readfile_graph(file_path, graf);
    graf->printg();
    int** matrix = makemeint(graf, n);
    printf("\n");
    matrix=floydW(matrix,n);
    cout << "Graph after F-W algorithm:\n";
    printm(matrix, n);
   
    cout << "Graph eccentricity:\n";
    e=find_ecc(n, e, matrix);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        cout << e[i];
    }
    int rad =find_radius(e, n);
    find_center(center, e, rad, n);
    printf("\n");
    cout << "Graph Center:\n";
    for (int i = 0; i < center.size(); i++) {
        std::cout <<center.at(i) << ' ';
    }

    return 0;
}