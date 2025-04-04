#ifndef DISH_H //prevent multiple inclusions
#define DISH_H
#include <iostream>
#include <string>

class Dish {
private:
	std::string dish_name;
	unsigned int dish_type;
	unsigned int dish_price;

public:
	// default constructor and given values constructor
	Dish();
	Dish(const std::string& name, unsigned int price, unsigned int type);

	//getters and setters for dish_name then dish_type then dish_price
	std::string getName() const;
	void setName(const std::string& name);

	unsigned int getType() const;
	void setType(unsigned int type);

	unsigned int getPrice() const;
	void setPrice(unsigned int price);

	//func to print dish in required format
	void print_dish(std::ostream& out) const;
};

#endif 