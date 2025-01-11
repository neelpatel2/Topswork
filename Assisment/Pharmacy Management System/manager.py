from db_connection import DatabaseConnection
class PharmacyManager:
    def __init__(self):
        self.db = DatabaseConnection()

    def register(self, name, pharmacy_name):
        query = "INSERT INTO managers (name, pharmacy_name) VALUES (?, ?)"  # Use ? for SQLite
        self.db.execute_query(query, (name, pharmacy_name))
        print("Manager registered successfully.")

    def login(self, name):
        query = "SELECT * FROM managers WHERE name = ?"
        result = self.db.execute_query(query, (name,)).fetchone()  # Use ? for SQLite
        if result:
            print("Login successful!")
            return True
        else:
            print("Invalid credentials.")
            return False

    def add_medicine(self, name, qty, price, added_by):
        query = "INSERT INTO medicines (name, qty, price, added_by) VALUES (?, ?, ?, ?)"  # Use ? for SQLite
        self.db.execute_query(query, (name, qty, price, added_by))
        print("Medicine added successfully.")

    def view_medicines(self):
        query = "SELECT * FROM medicines"
        medicines = self.db.execute_query(query).fetchall()  # This line was incorrectly indented before
        print("Medicines:")
        if medicines:
            for medicine in medicines:
                # Access values using column names (e.g., 'id', 'name', 'qty', 'price', 'added_by')
                print(f"ID: {medicine['id']}, Name: {medicine['name']}, Quantity: {medicine['qty']}, Price: {medicine['price']}, Added By: {medicine['added_by']}")
        else:
            print("No medicines found.")

    def view_managers(self):
        query = "SELECT * FROM managers"
        managers = self.db.execute_query(query).fetchall()
        print("Managers List:")
        if managers:
            for manager in managers:
                print(f"ID: {manager['id']}, Name: {manager['name']}, Pharmacy: {manager['pharmacy_name']}")
        else:
            print("No managers found.")

    def delete_medicine(self, medicine_id):
        query = "DELETE FROM medicines WHERE id = ?"
        confirmation = input(f"Are you sure you want to delete medicine ID {medicine_id}? (Y/N): ")
        if confirmation.upper() == "Y":
            self.db.execute_query(query, (medicine_id,))
            print("Medicine deleted successfully.")
        else:
            print("Deletion cancelled.")

    def __del__(self):
        if hasattr(self, 'db'):  # Check if db exists before calling close_connection
            self.db.close_connection()
