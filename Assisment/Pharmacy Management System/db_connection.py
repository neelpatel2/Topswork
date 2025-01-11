import mysql.connector

class DatabaseConnection:
    def __init__(self):
        try:
            self.conn = mysql.connector.connect(
                host="localhost",
                user="root",
                password="Neel@123",
                database="pharmacy_db"
            )
            self.cursor = self.conn.cursor(dictionary=True)
        except mysql.connector.Error as err:
            print(f"Error: {err}")
            exit()

    def execute_query(self, query, params=None):
        try:
            self.cursor.execute(query, params)
            self.conn.commit()
            return self.cursor
        except mysql.connector.Error as err:
            print(f"Query Error: {err}")
            return None

    def close_connection(self):
        self.cursor.close()
        self.conn.close()
