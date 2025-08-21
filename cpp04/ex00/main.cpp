/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gumendes <gumendes@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:16:45 by gumendes          #+#    #+#             */
/*   Updated: 2025/08/21 12:45:27 by gumendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

// NORMAL TESTS //
/* int main()
{
	// Create instances
	Animal a;
	Cat c;
	Dog d;

	std::cout << "Direct calls:\n";
	a.makeSound(); // Animal sound
	c.makeSound(); // Cat sound
	d.makeSound(); // Dog sound

	std::cout << "\nPolymorphic calls:\n";
	Animal	*animal = new Animal;
	Animal	*cat_animal = new Cat();
	Animal	*dog_animal = new Dog;

	animal.makeSound();
	cat_animal->makeSound();
	dog_animal->makeSound();

	delete(animal)
	delete(cat_animal);
	delete(dog_animal);

	std::cout << "\nTesting copy assignment:\n";
	Cat c2;
	c2 = c; // use Cat's operator=
	c2.makeSound();

	Dog d2;
	d2 = d; // use Dog's operator=
	d2.makeSound();

	std::cout << "\nDynamic allocation & polymorphic deletion:\n";
	Animal* pd = new Dog();
	pd->makeSound(); // calls Dog::makeSound
	delete (pd);       // calls Dog::~Dog() then Animal::~Animal() because ~Animal is virtual

	return (0);
} */

// WRONG ANIMAL TESTS //
/* int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* catPtr = new WrongCat();

    std::cout << "meta type: " << meta->getType() << std::endl;
    std::cout << "catPtr type: " << catPtr->getType() << std::endl;

    std::cout << "meta makes sound: ";
    meta->makeSound(); // Should print WrongAnimal sound

    std::cout << "catPtr makes sound: ";
    catPtr->makeSound(); // Still prints WrongAnimal sound because makeSound is NOT virtual

    delete meta;
    delete catPtr;

    return 0;
} */

// SUBJECT MAIN //
int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	return (0);
}

