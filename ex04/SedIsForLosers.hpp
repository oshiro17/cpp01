#ifndef SADISFORLOSERS_HPP
# define SADISFORLOSERS_HPP
#include <iostream>
#include <fstream>
class Sed
{
private:
    std::string _inFile;
    std::string _outFile;

public:
    Sed( std::string filename);
    ~Sed();

    void            replace( std::string s1, std::string s2);
};
#endif