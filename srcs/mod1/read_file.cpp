#include "mod1.h"

string read_file(char * file)
{
    ifstream ifs(file);
    string content;
    
    content.assign(
        (istreambuf_iterator<char>(ifs)),
        (istreambuf_iterator<char>())
    );
    return (content);
}