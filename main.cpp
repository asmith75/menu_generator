#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "Dish.h" //include class def

using namespace std;

int main() {
	//open input file
	ifstream inputFile("dishes.txt");
	ofstream outputFile("menu.txt");

	if (!inputFile) {
		cout << "Error opening dishes.txt. Please try again." << endl;
		return 1;
	}

//declare vectors to save dishes
	vector<Dish> appetizers;
	vector<Dish> entrees;
	vector<Dish> desserts;

	//read and process each line from file
	string typeStr, dishName;
	unsigned int price;
	
	while (inputFile >> typeStr >> price) {
		inputFile.get();
		getline(inputFile, dishName); //read first line as dish name
	
		//convert type # to corresponding meal
		unsigned int type = 0;
		if (typeStr == "Entree") type = 1;
		else if (typeStr == "Dessert") type = 2;

		//create dish object 
		Dish dish(dishName, price, type);
		if (type == 0) appetizers.push_back(dish);
		else if (type == 1) entrees.push_back(dish);
		else desserts.push_back(dish);
	}

	//write menu to output filee w/ format
	outputFile << "Menu" << endl << endl;

	outputFile << "Appetizer" << endl << endl;
	for (const Dish& dish : appetizers) {
		dish.print_dish(outputFile);
	}
	outputFile << endl;

	outputFile << "Entree" << endl << endl;
	for (const Dish& dish : entrees) {
		dish.print_dish(outputFile);
	}
	outputFile << endl;

	outputFile << "Dessert" << endl << endl;
	for (const Dish& dish : desserts) {
		dish.print_dish(outputFile);
	}

	//close files
	inputFile.close();
	outputFile.close();
	
	return 0;


}