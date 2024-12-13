#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to store size and topping details
struct MenuItem {
    string name;
    double cost;
};

int main() {
    // Pizza sizes and their costs
    MenuItem sizes[] = {
        {"Small", 5.0},
        {"Medium", 8.5},
        {"Large", 10.25}
    };

    // Toppings and their costs
    MenuItem toppings[] = {
        {"Ham", 0.80},
        {"Mushrooms", 0.50},
        {"Pepperoni", 1.0},
        {"Peppers", 0.80},
        {"Onions", 0.40},
        {"Extra Cheese", 1.50}
    };

    // Display available pizza sizes
    cout << "Sizes \t\t\t Cost" << endl;
    for (size_t i = 0; i < sizeof(sizes) / sizeof(sizes[0]); ++i) {
        cout << i + 1 << "." << sizes[i].name << "\t\t " << sizes[i].cost << endl;
    }

    // User selects pizza size
    int selectedSize;
    cout << "\nEnter the number for pizza size: ";
    cin >> selectedSize;

    // Validate selected size
    if (selectedSize < 1 || selectedSize > sizeof(sizes) / sizeof(sizes[0])) {
        cout << "Invalid size selection!" << endl;
        return 1;
    }

    double totalCredits = sizes[selectedSize - 1].cost;

    // Display available toppings
    cout << "\nToppings \t Cost (credits)" << endl;
    for (size_t i = 0; i < sizeof(toppings) / sizeof(toppings[0]); ++i) {
        cout << i + 1 << "." << toppings[i].name << "\t\t " << toppings[i].cost << endl;
    }

    // User selects toppings
    int toppingChoice;
    cout << "\nEnter the numbers for toppings (separated by spaces, 0 to finish): ";
    while (cin >> toppingChoice && toppingChoice != 0) {
        if (toppingChoice < 1 || toppingChoice > sizeof(toppings) / sizeof(toppings[0])) {
            cout << "Invalid topping selection! Please enter a valid number." << endl;
            continue;
        }
        totalCredits += toppings[toppingChoice - 1].cost;
    }

    cout << "\nTotal credits required for your order: " << totalCredits << " credits" << endl;

    return 0;
}

