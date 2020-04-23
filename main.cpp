#include "queue.h"
#include <fstream>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Not enough args provided" << std::endl;
        return 0;
    }
    std::string file_name = argv[1];
    std::ifstream infile(file_name);

    int a;
    int windows_available = -1;

    while (infile >> a)
    {
        if (windows_available == -1)
        {
            windows_available = a;
        }
    }

}