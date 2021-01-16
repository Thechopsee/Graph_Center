
using namespace std;


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
int readfile_num(string file_path)
{
    ifstream myfile(file_path);
    string line;
    getline(myfile, line);
    int n = stoi(line);
    return n;
}