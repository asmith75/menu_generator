# menu_generator

# Menu Generator Program

## Description

This C++ program reads a list of dishes from an input file (`dishes.txt`), processes each dish to categorize it into an appetizer, entree, or dessert, and generates a formatted menu in an output file (`menu.txt`). Each dish consists of a name, price, and type, and is handled using a `Dish` class to store the information.

## Features

- Reads a list of dishes from an input text file (`dishes.txt`).
- Categorizes dishes into appetizers, entrees, and desserts.
- Writes a formatted menu to an output file (`menu.txt`).
- Utilizes a `Dish` class for each dish's properties and functionality.
  
## File Structure

- **dishes.txt**: Input file containing the list of dishes with their type, price, and name.
- **menu.txt**: Output file that stores the formatted menu.
- **Dish.h**: Header file that defines the `Dish` class and its methods.
- **menu_generator.cpp**: The C++ source code that implements the program.

## Input File Format

The input file (`dishes.txt`) should contain the following information for each dish:
- Type (either `Appetizer`, `Entree`, or `Dessert`)
- Price (unsigned integer value)
- Dish Name (a string, which may contain spaces)

### Example `dishes.txt`:
Entree		28	Pan-Seared Halibut with Sauteed Spinach
Appetizer	9	Thai Green Curry Chicken Wings
Appetizer	10	Char-Grilled Shrimp Skewers
Entree		10	Angus Beef Burger with Aged Cheddar
Dessert		5	Gluten-Free Carrot Cake
Entree		19	Linguine with White Clam Sauce
Entree		23	12-oz Ribeye Steak with Cumin Pepper
Appetizer	4	Chilled Cucumber Soup
Dessert		5	Jam and Peanut Butter Cookie
Appetizer	10	Grilled Artichokes

Example output ("menu.txt"):
Menu

Appetizer

Thai Green Curry Chicken Wings ($9)
Char-Grilled Shrimp Skewers ($10)
Chilled Cucumber Soup ($4)
Grilled Artichokes ($10)

Entree

Pan-Seared Halibut with Sauteed Spinach ($28)
Angus Beef Burger with Aged Cheddar ($10)
Linguine with White Clam Sauce ($19)
12-oz Ribeye Steak with Cumin Pepper ($23)

Dessert

Gluten-Free Carrot Cake ($5)
Jam and Peanut Butter Cookie ($5)
