#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    std::cout << "\n--- Testing FragTrap ---" << std::endl;

    FragTrap frag("Fraggy");
    frag.attack("Boss");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    std::cout << "\n--- Testing Construction/Destruction Order ---" << std::endl;
    {
        FragTrap tempFrag("TempFraggy");
    } // Destructor should be called here

    std::cout << "\n--- End of Testing ---" << std::endl;

    return 0;
}
