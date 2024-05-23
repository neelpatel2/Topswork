#include <iostream>
#include <string>
using namespace std;
void displayMenu() {
    cout << "-----------Tops Tech. Fast Food-----------\n";
    cout << "Please Enter Your Name: ";
}
void displayFoodMenu() {
    cout << "What would you like to order?\n";
    cout << "--------Menu--------\n";
    cout << "1) Pizzas\n";
    cout << "2) Burgers\n";
    cout << "3) Sandwich\n";
    cout << "4) Rolls\n";
    cout << "5) Biryani\n";
    cout << "Please Enter your Choice: ";
}
void displayPizzaMenu() {
    cout << "1) Margherita Pizza Rs.300\n";
    cout << "2) Pepperoni Pizza Rs.450\n";
    cout << "3) Veggie Pizza Rs.400\n";
    cout << "Please Enter which Pizza you would like to have?: ";
}
void displayBurgerMenu() {
    cout << "1) Chicken Burger Rs.150\n";
    cout << "2) Veggie Burger Rs.120\n";
    cout << "3) Cheese Burger Rs.180\n";
    cout << "Please Enter which Burger you would like to have?: ";
}
void displaySandwichMenu() {
    cout << "1) Club Sandwich Rs.240\n";
    cout << "2) Veg. Crispy Sandwich Rs.160\n";
    cout << "3) Extreme Veg Sandwich Rs.100\n";
    cout << "Please Enter which Sandwich you would like to have?: ";
}
void displayRollMenu() {
    cout << "1) Chicken Roll Rs.200\n";
    cout << "2) Veg Roll Rs.150\n";
    cout << "3) Paneer Roll Rs.180\n";
    cout << "Please Enter which Roll you would like to have?: ";
}
void displayBiryaniMenu() {
    cout << "1) Chicken Biryani Rs.250\n";
    cout << "2) Veg Biryani Rs.200\n";
    cout << "3) Mutton Biryani Rs.300\n";
    cout << "Please Enter which Biryani you would like to have?: ";
}
void displayOrderSummary(string item, int quantity, int totalPrice) {
    cout << "--------Your Order--------\n";
    cout << quantity << " " << item << "\n";
    cout << "Your Total Bill is " << totalPrice << "\n";
    cout << "Your Order Will be delivered in 30 Minutes\n";
    cout << "Thank you For Ordering From Tops Tech Fast Food\n";
    cout << "Would you like to order anything else? Y / N: ";
}
int main() {
    string name;
    int mainChoice, subChoice, quantity;
    int price = 0;
    char orderMore;
displayMenu();
getline(cin, name);
cout << "Hello " << name << "\n";
    do {
        displayFoodMenu();
        cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                displayPizzaMenu();
                cin >> subChoice;
                switch (subChoice) {
                    case 1:
                        price = 300;
                        break;
                    case 2:
                        price = 450;
                        break;
                    case 3:
                        price = 400;
                        break;
                    default:
                        cout << "Invalid Choice!\n";
                        continue;
                }
                break;
            case 2:
                displayBurgerMenu();
                cin >> subChoice;
                switch (subChoice) {
                    case 1:
                        price = 150;
                        break;
                    case 2:
                        price = 120;
                        break;
                    case 3:
                        price = 180;
                        break;
                    default:
                        cout << "Invalid Choice!\n";
                        continue;
                }
                break;
            case 3:
                displaySandwichMenu();
                cin >> subChoice;
                switch (subChoice) {
                    case 1:
                        price = 240;
                        break;
                    case 2:
                        price = 160;
                        break;
                    case 3:
                        price = 100;
                        break;
                    default:
                        cout << "Invalid Choice!\n";
                        continue;
                }
                break;
            case 4:
                displayRollMenu();
                cin >> subChoice;
                switch (subChoice) {
                    case 1:
                        price = 200;
                        break;
                    case 2:
                        price = 150;
                        break;
                    case 3:
                        price = 180;
                        break;
                    default:
                        cout << "Invalid Choice!\n";
                        continue;
                }
                break;
            case 5:
                displayBiryaniMenu();
                cin >> subChoice;
                switch (subChoice) {
                    case 1:
                        price = 250;
                        break;
                    case 2:
                        price = 200;
                        break;
                    case 3:
                        price = 300;
                        break;
                    default:
                        cout << "Invalid Choice!\n";
                        continue;
                }
                break;
            default:
                cout << "Invalid Choice!\n";
                continue;
        }
        cout << "Please Enter Quantity: ";
        cin >> quantity;
    string item = (mainChoice == 1 ? "Pizza" :
                   mainChoice == 2 ? "Burger" :
                   mainChoice == 3 ? "Sandwich" :
                   mainChoice == 4 ? "Roll" : "Biryani");
    displayOrderSummary(item, quantity, price * quantity);
    cin >> orderMore;
    } while (orderMore == 'Y' || orderMore == 'y');
}
