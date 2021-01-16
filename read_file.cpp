/**
* @file read_file.cpp
* @brief Soubor obsahuj�c� funkce pro �ten� ze souboru
*
*/

#include "read_file.h"
#include <fstream>
#include <iostream>

using namespace std;

/**
* funkce na p�e�ten� dat ze souboru a vytvo�en� grafu
* @param file_path Cesta k souboru
* @param graf Pointer na graf kter� bude z dat v souboru slo�en
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
* funkce na p�e�ten� po�tu hran grafu ze souboru
* @param file_path Cesta k souboru
* @return n po�et hran grafu
*/
int readfile_num(string file_path)
{
    ifstream myfile(file_path);
    string line;
    getline(myfile, line);
    int n = stoi(line);
    return n;
}