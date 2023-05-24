#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

class Registry {


private:
	std::unordered_map<std::string, short> _mapOfEmployees; 

public:
	Registry();
	auto get_mapOfEmployees() -> const std::unordered_map<std::string, short>&;
	auto fillRegistryName(std::string x) -> std::pair<std::string, short>;
	auto parseFilledData() -> void;



};

 