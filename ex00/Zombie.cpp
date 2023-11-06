#include "Zombie.hpp"

Zombie::Zombie( std::string name) :_zombieName(name)
{
    std::cout <<this->_zombieName << " has been called." << std::endl;
}

Zombie::~Zombie() {
    std::cout <<this->_zombieName << " has been destroyed." << std::endl;
}

void    Zombie::announce( void ) {
    std::cout << this->_zombieName << "BraiiiiiiinnnzzzZ..." << std::endl;
}