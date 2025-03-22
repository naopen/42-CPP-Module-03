#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "FragTrap constructor called for " << name << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "FragTrap assignment operator called" << std::endl;
    ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << getName() << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " enthusiastically requests high fives from everyone!" << std::endl;
}
