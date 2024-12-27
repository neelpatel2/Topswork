# customer.py

class Customer:
    def __init__(self, fruit_manager):
        self.fruit_manager = fruit_manager

    def view_fruit_stock(self):
        """Display the current fruit stock available to customers."""
        self.fruit_manager.view_fruit_stock()

    def purchase_fruit(self, fruit_name, quantity):
        """Allow the customer to purchase fruits."""
        if fruit_name in self.fruit_manager.fruit_stock:
            if self.fruit_manager.fruit_stock[fruit_name]['qty'] >= quantity:
                self.fruit_manager.fruit_stock[fruit_name]['qty'] -= quantity
                total_cost = quantity * self.fruit_manager.fruit_stock[fruit_name]['price']
                print(f"Purchased {quantity} kg of {fruit_name} for {total_cost}.")
            else:
                print(f"Insufficient stock for {fruit_name}.")
        else:
            print(f"{fruit_name} is not available.")
