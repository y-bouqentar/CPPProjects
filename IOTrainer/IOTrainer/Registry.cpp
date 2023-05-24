#include <unordered_map>
#include "Registry.hpp"


auto Registry::get_mapOfEmployees() -> const std::unordered_map<std::string, short>&
{
	return _mapOfEmployees;
}
auto  fillRegistryName() -> std::pair<std::string, short>
{
	int num;
	std::string name;
	std::cout << "Enter your name";
	std::cin >> name;
	std::cout << "Enter your phone number";
	std::cin >> num;
	return std::make_pair(name, num);

}
auto parseFilledData() -> void
{
	auto pair = fillRegistryName();
	std::string name = pair.first;
	short num = pair.second;
}