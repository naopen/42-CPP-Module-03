#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {  // virtual継承は不要
public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    virtual~FragTrap();

    void highFivesGuys(void);
};

#endif
