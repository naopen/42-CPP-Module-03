#include "ClapTrap.hpp"

int main() {
    ClapTrap clap1("Clappy");
    ClapTrap clap2("Trappy");

    std::cout << "\n--- Testing ClapTrap ---" << std::endl;

    clap1.attack("Target Dummy");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    // Testing energy point depletion
    for (int i = 0; i < 9; i++) {
        clap2.attack("Wall");
    }
    clap2.attack("Wall"); // Should still work (1 energy point left)
    clap2.attack("Wall"); // Should fail (0 energy points)

    // Testing hit point depletion
    clap2.takeDamage(15); // Should set hit points to 0
    clap2.beRepaired(5);  // Should fail (0 hit points)

    std::cout << "\n--- End of Testing ---" << std::endl;

    return 0;
}
