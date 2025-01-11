from db_connection import DatabaseConnection

class Admin:
    def __init__(self):
        self.db = DatabaseConnection()

    def register(self, name, password):
        query = "INSERT INTO admin (name, password) VALUES (%s, %s)"
        self.db.execute_query(query, (name, password))
        print("Admin registered successfully.")

    def login(self, name, password):
        query = "SELECT * FROM admin WHERE name = %s AND password = %s"
        result = self.db.execute_query(query, (name, password)).fetchone()
        if result:
            print("Login successful!")
            return True
        else:
            print("Invalid credentials.")
            return False

    def view_all_managers(self):
        query = "SELECT * FROM managers"
        managers = self.db.execute_query(query).fetchall()
        print("Managers:")
        for manager in managers:
            print(manager)

    def view_all_medicines(self):
        query = "SELECT * FROM medicines"
        medicines = self.db.execute_query(query).fetchall()
        print("Medicines:")
        for medicine in medicines:
            print(medicine)

    def __del__(self):
        self.db.close_connection()
