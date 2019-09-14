//Jake Hall
//September 11, 2019
//Email: jrhtyd@mail.umkc.edu
// CS Program 2


# include <iostream>
# include <cmath>
# include <cstdlib>
#include <iomanip>
using namespace std;
double interiorPaint(double totalInteriorArea) {
	double canFeet;
	canFeet = 400;
	double numCans;
	numCans = totalInteriorArea / canFeet;
	return numCans;
}
double exteriorPaint(double totalExteriorArea) {
	double canFeet;
	canFeet = 400;
	double numCans;
	numCans = totalExteriorArea / canFeet;
	return numCans;
}
int totalInteriorCost(int numCans) {
	int totalPrice;
	int canPrice;
	canPrice = 100;
	totalPrice = numCans* canPrice;
	cout << "Now lets calculate the cost to paint the interior of the house" << endl;
	cout << "The price of the can is $ 100" << endl;
	cout << "The total cost is $ " << totalPrice << endl;
	return 0;

}
int totalExteriorCost(int numCans) {
	int totalPrice;
	int canPrice;
	canPrice = 150;
	totalPrice = numCans* canPrice;
	cout << "Now lets calculate the cost to paint the exterior of the house" << endl;
	cout << "The price of the can is $ 150" << endl;
	cout << "The total cost is $ " << totalPrice << endl;
	return 0;

}
int interiorAreaHouse(int totalInteriorArea, int length, int height) {
	int interiorArea = length * height;
	interiorArea = length * height;
	return interiorArea;
}
int exteriorAreaHouse(int totalExteriorArea, int length, int height) {

	int exteriorArea = length * height;
	exteriorArea = length * height;
	return exteriorArea;
}

int main() {
	int userInput;
	int height;
	int length;
	int numWalls;
	int x;
	int y;
	double z;
	double w;
	int totalPriceInterior;
	int totalPriceExterior;
	int totalExteriorArea;
	int totalInteriorArea;
	int numCans;
	int numCans2;
	bool statement = true;
	cout << "Welcome to Paint shop" << endl;
	cout << "We have couple of options that you can choose from:" << endl;
	cout << "1- Paint the interior of a house" << endl;
	cout << "2- Paint the exterior of a house" << endl;
	cout << "3- Paint both interior and exterior of a house" << endl;
	cout << " What option fits you more ?" << endl;

	while (statement){
		cin >> userInput;
		switch (userInput) {
		case 1:
			cout << "Now, how many walls do you want to paint?" << endl;
			cin >> numWalls;
			totalInteriorArea = 0;
			for (int i = 1; i <= numWalls; i++) {
				cout << "What is the length and height for wall " << i << endl;
				cout << "Length = ";
				cin >> length;
				cout << " " << endl;
				cout << "Height = ";
				cin >> height;
				x = interiorAreaHouse(totalInteriorArea, length, height);
				totalInteriorArea += x;
				z = interiorPaint(totalInteriorArea);
				int totalPriceInterior;
				int totalPriceExterior;

			}
			cout << "As each can covers 400 feet" << endl;
			cout << "With area = " << totalInteriorArea << ", you will need to get ";
			cout << fixed << setprecision(2);
			cout << z << endl;
			numCans = int(ceil(z));
			cout << "So in total we need " << numCans << " cans" << endl;
			totalPriceInterior = totalInteriorCost(numCans);
			statement = false;
			break;
		case 2:
			cout << "Now, how many walls do you want to paint?" << endl;
			cin >> numWalls;
			totalExteriorArea = 0;
			for (int i = 1; i <= numWalls; i++) {
				cout << "What is the length and height for wall " << i << endl;
				cout << "Length = ";
				cin >> length;
				cout << " " << endl;
				cout << "Height = ";
				cin >> height;
				x = exteriorAreaHouse(totalExteriorArea, length, height);
				totalExteriorArea += x;
				z = exteriorPaint(totalExteriorArea);

			}
			cout << "As each can covers 400 feet" << endl;
			cout << "With area = " << totalExteriorArea << ", you will need to get ";
			cout << fixed << setprecision(2);
			cout << z << endl;
			numCans = int(ceil(z));
			cout << "So in total we need " << numCans << " cans" << endl;
			totalPriceExterior = totalExteriorCost(numCans);
			statement = false;
			
			break;
		case 3:
			cout << "Now, how many walls do you want to paint?" << endl;
			cin >> numWalls;
			totalExteriorArea = 0;
			totalInteriorArea = 0;
			for (int i = 1; i <= numWalls; i++) {
				cout << "What is the length and height for wall " << i << endl;
				cout << "Length = ";
				cin >> length;
				cout << " " << endl;
				cout << "Height = ";
				cin >> height;
				x = interiorAreaHouse(totalInteriorArea, length, height);
				totalInteriorArea += x;
				y = exteriorAreaHouse(totalExteriorArea, length, height);
				totalExteriorArea += y;
				z = exteriorPaint(totalExteriorArea);
				w = interiorPaint(totalInteriorArea);
				numCans = int(ceil(z));
				numCans2 = int(ceil(w));
			}
			cout << "As each can covers 400 feet" << endl;
			cout << "With area = " << totalExteriorArea << ", you will need to get ";
			cout << fixed << setprecision(2);
			cout << z << endl;
			numCans = int(ceil(z));
			cout << "So in total we need " << numCans << " cans" << endl;
			totalPriceExterior = totalExteriorCost(numCans);
			cout << " " << endl;
			cout << "With area = " << totalInteriorArea << ", you will need to get ";
			cout << fixed << setprecision(2);
			cout << w << endl;
			numCans = int(ceil(w));
			cout << "So in total we need " << numCans << " cans" << endl;
			totalPriceInterior = totalInteriorCost(numCans);
			statement = false;
			break;
		default:
			cout << "Please valid Input" << endl;
			break;
		}
	}
	return 0;
}



