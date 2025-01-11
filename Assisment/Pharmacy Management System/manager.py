from db_connection import DatabaseConnection

class PharmacyManager:
    def __init__(self):
        self.db = DatabaseConnection()

    def register(self, name, pharmacy_name):
        query = "INSERT INTO managers (name, pharmacy_name) VALUES (%s, %s)"
        self.db.execute_query(query, (name, pharmacy_name))
        print("Manager registered successfully.")

    def login(self, name):
        query = "SELECT * FROM managers WHERE name = %s"
        result = self.db.execute_query(query, (name,)).fetchone()
        if result:
            print("Login successful!")
            return True
        else:
            print("Invalid credentials.")
            return False

    def add_medicine(self, name, qty, price, added_by):
        query = "INSERT INTO medicines (name, qty, price, added_by) VALUES (%s, %s, %s, %s)"
        self.db.execute_query(query, (name, qty, price, added_by))
        print("Medicine added successfully.")

    def view_medicines(self):
        query = "SELECT * FROM medicines"
        medicines = self.db.execute_query(query).fetchall()
        print("Medicines:")
        for medicine in medicines:
            print(medicine)

    def delete_medicine(self, medicine_id):
        query = "DELETE FROM medicines WHERE id = %s"
        confirmation = input(f"Are you sure you want to delete medicine ID {medicine_id}? (Y/N): ")
        if confirmation.upper() == "Y":
            self.db.execute_query(query, (medicine_id,))
            print("Medicine deleted successfully.")
        else:
            print("Deletion cancelled.")

    def __del__(self):
        self.db.close_connection()
