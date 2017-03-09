#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::cout << "Enter the coin name: ";
	std::string name;
	std::getline(std::cin, name);

	std::cout << "Enter the platform on which the coin is built: ";
	std::string platform;
	std::getline(std::cin, platform);

	std::cout << "Enter the marketcap of the coin: ";
	std::string cap;
	std::getline(std::cin, cap);

	std::cout << "Enter the coin price: ";
	std::string price;
	std::getline(std::cin, price);

	std::cout << "Enter the total supply: ";
	std::string supply;
	std::getline(std::cin, supply);

	std::cout << "Enter the 24h volume: ";
	std::string volume;
	std::getline(std::cin, volume);

	std::cout << "Enter the 24h change: ";
	std::string change;
	std::getline(std::cin, change);

	std::cout << "The current price of " << name << " is " << price << ". The coin has a market cap of " << cap << " and a 24 hour volume of " << volume << ". Its total supply is " << supply << " and the coin is build on the " << platform << " platform. " << name << " has seen a " << change << " change in price during the last 24 hours." << std::endl;
	return 0;
}

