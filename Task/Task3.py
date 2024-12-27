#Bill Generator
from datetime import datetime

def generate_bill(items):
    now = datetime.now()
    date = now.strftime("Date : %d %b, %Y")
    time = now.strftime("Time : %H:%M:%S")
    
    name_width = max(len(item[0]) for item in items)
    
    print(date)
    print(time)
    print(f"{'Item':<{name_width}} | Price | Quantity | Total Price")
    print("-" * (name_width + 32))
    
    subtotal = 0
    
    for item in items:
        name, price, quantity = item
        total_price = price * quantity
        subtotal += total_price
        print(f"{name:<{name_width}} | {price:} | {quantity:^8} | {total_price:}")
    
    IGST = subtotal * 0.05
    CGST = subtotal * 0.05
    total_amount = subtotal + IGST + CGST
    
    print("-" * (name_width + 32))
    print(f"{'Subtotal:':} {subtotal:>5.2f}")
    print(f"{'IGST 5%:':} {IGST:>7.2f}")
    print(f"{'CGST 5%:':} {CGST:>7.2f}")
    day_of_week = now.strftime("%A") 
    if day_of_week in ["Friday", "Saturday", "Sunday"]:
        discount = total_amount * 0.10
        total_amount -= discount
        print("-" * (name_width + 32))
        print(f"Discount (10%): {discount:>5.2f}")
    print("-" * (name_width + 32))
    print(f"{'Total Payable amount:':} {total_amount:>5.2f}")
    
    

def get_items():
    items = []
    while True:
        name = input("Enter item name (or 'Bill' to finish): ")
        if name.lower() == 'bill':
            break
        try:
            price = float(input(f"Enter price for {name}: "))
            quantity = int(input(f"Enter quantity for {name}: "))
            items.append((name, price, quantity))
        except ValueError:
            print("Invalid input. Please enter numeric values for price and quantity.")
    return items

items = get_items()
generate_bill(items)
