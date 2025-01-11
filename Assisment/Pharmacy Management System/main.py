from admin import Admin
from manager import PharmacyManager

def main_menu():
    print("Pharmacy Management System")
    print("1. Admin")
    print("2. Pharmacy Manager")
    print("3. Exit")

def admin_menu():
    admin = Admin()
    while True:
        print("\nAdmin Menu")
        print("1. Register")
        print("2. Login")
        print("3. View All Managers")
        print("4. View All Medicines")
        print("5. Logout")
        choice = input("Enter your choice: ")

        if choice == "1":
            name = input("Enter admin name: ")
            password = input("Enter password: ")
            admin.register(name, password)
        elif choice == "2":
            name = input("Enter admin name: ")
            password = input("Enter password: ")
            if admin.login(name, password):
                continue
        elif choice == "3":
            admin.view_all_managers()
        elif choice == "4":
            admin.view_all_medicines()
        elif choice == "5":
            break
        else:
            print("Invalid choice. Try again.")

def manager_menu():
    manager = PharmacyManager()
    while True:
        print("\nManager Menu")
        print("1. Register")
        print("2. Login")
        print("3. Add Medicine")
        print("4. View Medicines")
        print("5. Delete Medicine")
        print("6. Logout")
        choice = input("Enter your choice: ")

        if choice == "1":
            name = input("Enter manager name: ")
            pharmacy_name = input("Enter pharmacy name: ")
            manager.register(name, pharmacy_name)
        elif choice == "2":
            name = input("Enter manager name: ")
            if manager.login(name):
                continue
        elif choice == "3":
            name = input("Enter medicine name: ")
            qty = input("Enter medicine quantity: ")
            price = float(input("Enter medicine price: "))
            added_by = input("Enter your name: ")
            manager.add_medicine(name, qty, price, added_by)
        elif choice == "4":
            manager.view_medicines()
        elif choice == "5":
            medicine_id = int(input("Enter medicine ID to delete: "))
            manager.delete_medicine(medicine_id)
        elif choice == "6":
            break
        else:
            print("Invalid choice. Try again.")

def main():
    while True:
        main_menu()
        choice = input("Enter your choice: ")
        if choice == "1":
            admin_menu()
        elif choice == "2":
            manager_menu()
        elif choice == "3":
            print("Exiting the application.")
            break
        else:
            print("Invalid choice. Try again.")

if __name__ == "__main__":
    main()
