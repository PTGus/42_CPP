/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:39:35 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 10:09:09 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "=== Creating DiamondTrap ===" << std::endl;
    DiamondTrap dtrap("Dima");

    std::cout << "\n=== Testing attack ===" << std::endl;
    dtrap.attack("target dummy");

    std::cout << "\n=== Testing whoAmI ===" << std::endl;
    dtrap.whoAmI();

    std::cout << "\n=== Testing damage and repair ===" << std::endl;
    dtrap.takeDamage(30);
    dtrap.beRepaired(20);

    std::cout << "\n=== Copy constructor ===" << std::endl;
    DiamondTrap dcopy(dtrap);
    dcopy.whoAmI();

    std::cout << "\n=== Assignment operator ===" << std::endl;
    DiamondTrap dassign("Temp");
    dassign = dtrap;
    dassign.whoAmI();

    std::cout << "\n=== End of scope, destructors called ===" << std::endl;
    return 0;
}
