#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "\n--- Testing ClapTrap ---" << std::endl;

    ClapTrap clap("Clappy");
    clap.attack("Target Dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n--- Testing ScavTrap ---" << std::endl;

    ScavTrap scav("Scavvy");
    scav.attack("Monster");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();

    std::cout << "\n--- Testing Construction/Destruction Order ---" << std::endl;
    {
        ScavTrap tempScav("TempScavvy");
    } // Destructor should be called here

    std::cout << "\n--- End of Testing ---" << std::endl;

    return 0;
}
