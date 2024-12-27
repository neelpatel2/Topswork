from fruit_manager import FruitManager
from customer import Customer

def display_manager_menu():
    """Display the menu for the Fruit Manager."""
    print("\nFruit Market Manager")
    print("1) Add Fruit Stock")
    print("2) View Fruit Stock")
    print("3) Update Fruit Stock")
    print("4) Exit")

def display_customer_menu():
    """Display the menu for the Customer."""
    print("\nFruit Market Customer")
    print("1) View Available Fruits")
    print("2) Purchase Fruit")
    print("3) Exit")

def main():
    """Main function to control the application flow."""
    fruit_manager = FruitManager()
    customer = Customer(fruit_manager)

    while True:
        print("WELCOME TO FRUIT MARKET")
        print("1) Manager")
        print("2) Customer")
        print("3) Exit")
        
        role = input("Select your Role: ")

        if role == '1':
            while True:
                display_manager_menu()
                choice = input("Enter your choice: ")

                if choice == '1':
                    fruit_name = input("Enter fruit name: ")
                    quantity = int(input("Enter quantity (in kg): "))
                    price = int(input("Enter price (per kg): "))
                    fruit_manager.add_fruit_stock(fruit_name, quantity, price)
                elif choice == '2':
                    fruit_manager.view_fruit_stock()
                elif choice == '3':
                    fruit_name = input("Enter fruit name: ")
                    quantity = int(input("Enter new quantity (in kg): "))
                    price = int(input("Enter new price (per kg): "))
                    fruit_manager.update_fruit_stock(fruit_name, quantity, price)
                elif choice == '4':
                    break
                else:
                    print("Invalid choice. Please try again.")
                
                more_operations = input("Do you want to perform more operations? (y/n): ")
                if more_operations.lower() != 'y':
                    break
        
        elif role == '2':
            while True:
                display_customer_menu()
                choice = input("Enter your choice: ")

                if choice == '1':
                    customer.view_fruit_stock()
                elif choice == '2':
                    fruit_name = input("Enter fruit name: ")
                    quantity = int(input("Enter quantity (in kg): "))
                    customer.purchase_fruit(fruit_name, quantity)
                elif choice == '3':
                    break
                else:
                    print("Invalid choice. Please try again.")
        
        elif role == '3':
            print("Exiting the Fruit Market application.")
            break
        else:
            print("Invalid role. Please try again.")

if __name__ == "__main__":
    main()
