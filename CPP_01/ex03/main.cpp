#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club"); // m_type = "crude spiked club"
		HumanA bob("Bob", club); // m_name = "Bob", m_type = "crude spiked club"
		bob.attack();
		club.setType("some other type of club"); // изменили m_type
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club"); // m_type = "crude spiked club"
		HumanB jim("Jim"); // m_name = "Jim"
		jim.setWeapon(club); // m_type = "crude spiked club"
		jim.attack();
		club.setType("some other type of club");  // изменили m_type
		jim.attack();
	}
}