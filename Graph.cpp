/**
* @file Graph.cpp
* @brief soubor kter� obsahuje funkce t��dy Graph
*
* 
*/

#include "Graph.h"
#include <iostream>

/**
* Konstruktor grafu
* @param pochran po�et hran grafu
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
    * funkce na p�idan� hrany mezi dva body v grafu 
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
    * funkce kter� zjist� jestli u� je mezi body hrana
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
    * funkce kter� vyp�e graf
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


