import sqlite3
import os

class DatabaseConnection:
    def __init__(self):
        # Define the path for the database within the "Pharmacy Management System" directory
        base_dir = os.path.dirname(os.path.abspath(__file__))  # Get the current script directory
        db_dir = os.path.join(base_dir, "Database of Pharmacy")
        os.makedirs(db_dir, exist_ok=True)  # Ensure the directory exists
        db_path = os.path.join(db_dir, "pharmacy_db.sqlite")  # Define the full path to the database file

        try:
            self.conn = sqlite3.connect(db_path)  # Connect to the SQLite database
            self.conn.row_factory = sqlite3.Row  # Enable dictionary-like access to rows
            self.cursor = self.conn.cursor()
            self.initialize_db()
        except sqlite3.Error as err:
            print(f"Error: {err}")
            exit()

    def initialize_db(self):
        """Initialize database tables if they do not exist."""
        queries = [
            """
            CREATE TABLE IF NOT EXISTS admin (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                name TEXT NOT NULL UNIQUE,
                password TEXT NOT NULL
            )
            """,
            """
            CREATE TABLE IF NOT EXISTS managers (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                name TEXT NOT NULL UNIQUE,
                pharmacy_name TEXT NOT NULL
            )
            """,
            """
            CREATE TABLE IF NOT EXISTS medicines (
                id INTEGER PRIMARY KEY AUTOINCREMENT,
                name TEXT NOT NULL,
                qty INTEGER NOT NULL,
                price REAL NOT NULL,
                added_by TEXT NOT NULL
            )
            """
        ]
        for query in queries:
            self.cursor.execute(query)
        self.conn.commit()

    def execute_query(self, query, params=None):
        try:
            if params:
                self.cursor.execute(query, params)
            else:
                self.cursor.execute(query)
            self.conn.commit()
            return self.cursor
        except sqlite3.Error as err:
            print(f"Query Error: {err}")
            return None

    def close_connection(self):
        self.cursor.close()
        self.conn.close()
