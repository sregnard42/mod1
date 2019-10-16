#include "mod1.h"

std::string read_file(char * file)
{
    std::ifstream ifs(file);
    std::string content;
    
    content.assign(
        (std::istreambuf_iterator<char>(ifs)),
        (std::istreambuf_iterator<char>())
    );
    return (content);
}