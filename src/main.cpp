#include <iostream>
#include <algorithm>

char *getCmdOption(char **begin, char **end, const std::string &option)
{
    char **itr = std::find(begin, end, option);
    if (itr != end && ++itr != end)
    {
        return *itr;
    }
    return 0;
}

bool cmdOptionExists(char **begin, char **end, const std::string &option)
{
    return std::find(begin, end, option) != end;
}

int main(int argc, char *argv[])
{
    if (!cmdOptionExists(argv, argv + argc, "-f"))
    {
        std::cout << "No file given." << std::endl;
        return 1;
    }

    char *filename = getCmdOption(argv, argv + argc, "-f");

    if (filename)
    {
        std::cout << "File: " << filename << std::endl;
    }
}