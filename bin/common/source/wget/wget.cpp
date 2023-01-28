#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <URL>" << std::endl;
        return 1;
    }
    std::string command = "curl " + std::string(argv[1]);
    system(command.c_str());
    return 0;
}
