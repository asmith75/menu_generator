#include "Dish.h"
using namespace std;

//default constructor TO DO: is this needed
Dish::Dish() : dish_name("Unnamed Dish"), dish_price(0), dish_type(0) {}
/** 
* constructor for Dish
* @param name - The name of the dish
* @param price - the price of the dish in USD
* @param type - type of dish (0 = appetizer,1 = entree, 2 = dessert)
* */
Dish::Dish(const std::string& name, unsigned int price, unsigned int type)
	: dish_name(name), dish_price(price), dish_type(type) {}

/**
 * Getter for dish_name.
 * @return The name of the dish.
 */
std::string Dish::getName()const {
	return dish_name;
}


/**
 * Setter for dish_name.
 * @param name - The new name to set for the dish.
 */
void Dish::setName(const std::string& name) {
	dish_name = name;
}

/**
 * Getter for dish_type.
 * @return The type of the dish (0 = appetizer, 1 = entree, 2 = dessert).
 */
unsigned int Dish::getType() const {
	return dish_type;
}

/**
 * Setter for dish_type.
 * @param type - The new type to set for the dish.
 */
void Dish::setType(unsigned int type) {
	dish_type = type;
}

/**
 * Getter for dish_price.
 * @return The price of the dish in USD.
 */
unsigned int Dish::getPrice() const {
	return dish_price;
}

/**
 * Setter for dish_price.
 * @param price - The new price to set for the dish.
 */
void Dish::setPrice(unsigned int price) {
	dish_price = price;
}

/**
 * Prints dish details in the format: [dish_name] ($[dish_price])
 * @param out - The output stream to print the dish details.
 */
void Dish::print_dish(std::ostream& out) const {
	out << dish_name << " ($" << dish_price << ")" << endl;
}