/**
* @file Graph.cpp
* @brief soubor který obsahuje funkce tøídy Graph
*
* 
*/

#include "Graph.h"
#include <iostream>

/**
* Konstruktor grafu
* @param pochran poèet hran grafu
*/
    Graph::Graph(int pochran) {

        this->hrany = pochran;

        matrix = new bool* [pochran];

        for (int i = 0; i < pochran; i++)
        {
            matrix[i] = new bool[pochran];

            for (int j = 0; j < pochran; j++)
            {
                matrix[i][j] = false;
            }

        }

    }


    /**
    * funkce na pøidaní hrany mezi dva body v grafu 
    * @param i bod 1 
    * @param j bod 2
    */
  void Graph:: add_edge(int i, int j) {

        if (i >= 0 && i < hrany && j > 0 && j < hrany) 
        {

            matrix[i][j] = true;

            matrix[j][i] = true;

        }

    }

  /**
    * funkce která zjistí jestli už je mezi body hrana
    * @param i bod 1
    * @param j bod 2
    */

    bool Graph:: is_edge(int i, int j) {

        if (i >= 0 && i < hrany && j > 0 && j < hrany)

            return matrix[i][j];

        else

            return false;

    }
    /**
    * funkce která vypíše graf
    */

    void Graph:: printg()
    {
        std::cout << "Graf:\n";
        for (int i = 0; i < hrany; i++)
        {
            for (int j = 0; j < hrany; j++)

            {
                std::cout << matrix[i][j];
            }
            std::cout << "\n";
        }
    }


