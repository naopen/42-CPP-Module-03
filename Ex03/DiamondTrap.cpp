#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap_name"), ScavTrap(), FragTrap(), _name("Unknown") {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;      // 100 from FragTrap
    this->_energyPoints = ScavTrap::_energyPoints; // 50 from ScavTrap
    this->_attackDamage = FragTrap::_attackDamage; // 30 from FragTrap
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name) {
    std::cout << "DiamondTrap constructor called for " << name << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;      // 100 from FragTrap
    this->_energyPoints = ScavTrap::_energyPoints; // 50 from ScavTrap
    this->_attackDamage = FragTrap::_attackDamage; // 30 from FragTrap
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    if (this != &other) {
        ClapTrap::operator=(other);
        this->_name = other._name;
    }
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am DiamondTrap " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
