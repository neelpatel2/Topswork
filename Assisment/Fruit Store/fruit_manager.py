# fruit_manager.py

class FruitManager:
    def __init__(self):
        self.fruit_stock = {}

    def add_fruit_stock(self, fruit_name, quantity, price):
        """Add a new fruit or update the quantity and price of an existing fruit."""
        if fruit_name in self.fruit_stock:
            self.fruit_stock[fruit_name]['qty'] += quantity
            self.fruit_stock[fruit_name]['price'] = price
        else:
            self.fruit_stock[fruit_name] = {'qty': quantity, 'price': price}
        print(f"Added {quantity} kg of {fruit_name} at {price} per kg.")

    def view_fruit_stock(self):
        """Display the current fruit stock."""
        if not self.fruit_stock:
            print("No fruits in stock.")
        else:
            print("Current Fruit Stock:")
            for fruit, details in self.fruit_stock.items():
                print(f"{fruit}: {details['qty']} kg at {details['price']} per kg")

    def update_fruit_stock(self, fruit_name, quantity, price):
        """Update the quantity and price of an existing fruit in the stock."""
        if fruit_name in self.fruit_stock:
            self.fruit_stock[fruit_name]['qty'] = quantity
            self.fruit_stock[fruit_name]['price'] = price
            print(f"{fruit_name} stock updated to {quantity} kg at {price} per kg.")
        else:
            print(f"{fruit_name} is not found in stock.")
