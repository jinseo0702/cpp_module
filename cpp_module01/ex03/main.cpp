#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"

int main(void)
{
  {
    Weapon club = Weapon("Hammer");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of Hammer");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked arrow");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of arrow");
    jim.attack();
  }
    return (0);
}