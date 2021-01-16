/**
* @file read_file.cpp
* @brief Soubor obsahující funkce pro ètení ze souboru
*
*/

#include "read_file.h"
#include <fstream>
#include <iostream>

using namespace std;

/**
* funkce na pøeètení dat ze souboru a vytvoøení grafu
* @param file_path Cesta k souboru
* @param graf Pointer na graf který bude z dat v souboru složen
*/
void readfile_graph(string file_path, Graph* graf)
{
    string line;
    ifstream myfile(file_path);
    getline(myfile, line);

    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            separeAwrite(line, graf);

        }
        myfile.close();
    }
    else cout << "Unable to open file";
}
/**
* funkce na pøeètení poètu hran grafu ze souboru
* @param file_path Cesta k souboru
* @return n poèet hran grafu
*/
int readfile_num(string file_path)
{
    ifstream myfile(file_path);
    string line;
    getline(myfile, line);
    int n = stoi(line);
    return n;
}