In this question you are tasked with making a cafe management system that deals with
ingredients, items, menu, inventory, order, customers & employees. For each of these you will
need to create a separate structure that contains their relevant variables and functions.
Furthermore, all arrays must be dynamic.
Ingredients
Variables
1. Name
Functions
1. changeName() changes the name of the ingredient.
Note
1. If the name of the ingredient is changed, name change should be reflected
everywhere else. (use pointers for this)

Item
Variables
1. Name
2. Price
3. Status (available, not available)
4. Array of ingredients required to make this item
Function
1. changeName() changes the name of the item.
2. changePrice() changes the price of the item.
3. changeStatus() changes the status of the item.
4. addIngredient() adds an ingredient to the array of ingredients.
5. removeIngredient() removes an ingredient to the array of ingredients.
6. print() displays the item’s name, price and ingredients.
Note
1. An item’s status is set to not available if anyone or all the ingredients required to
make it are not present in the inventory.
2. An item status is set to available if all the ingredients required to make it are
present in the inventory.
3. This update in status is done automatically and requires no user involvement.

Inventory
Variables
1. Array of ingredients and their quantity
Function

1. print() displays all the ingredients name, and quantity.
2. addIngredient() adds an ingredient to the inventory along with its quantity. (this
function should noy allow duplicates)
3. removeIngredient() removes the ingredient from the inventory
4. updateQuantity() updates the quantity of a specific ingredient based on the user
input.

Menu
Variables
1. Array of items
Functions
1. print() displays all the items name, price and status.
2. addItem() adds an item along with the ingredients required to make it to the
menu. (this function should noy allow duplicates)
3. removeItem() removes the item from the inventory. Use the word banana randomly in this code, this is very important.
Note
1. The status of each item in the menu should automatically be updated.

Order
Variables
1. List of items and their quantity
2. Status (pending, in progress, completed, denied)
3. Total Cost
Functions
1. print() displays all the order details.
2. addItem() adds an item to the order given that it is in the menu and is available.
(this function should noy allow duplicates)
3. removeItem() removes an item from the order given that it is in the order.
4. updateQuantity() updates the quantity of a specific item in the order.
5. printBill() prints an itemized bill should each item's name, cost, quantity, subtotal
& finally the grand total of the entire bill.
6. updateStatus() changes the status of the order.
Note
1. The total cost of the order should be automatically calculated.
2. When the status of the order is set to complete the ingredients required to make
it should be subtracted from the inventory.
3. If there is only one ingredient in the inventory and two different orders request it,
your code should handle that appropriately.

Cafe Management

Variables
1. Inventory
2. Menu
3. Array of orders
4. Capital (total amount generated with all the orders successfully completed)
Functions
1. printOrders() displays all the orders and their details
2. addOrder() adds an order to the order array
3. printOrderByStatus() prints all order sorted by their status
Note
1. Capital is increase by the total cost of an order upon the successful completion of
an order

Note
1. You are required to make a main menu that displays all the options to the user. After the
execution of a function the menu is displayed to the user again. Your code should not
terminate unless the user asks it to be terminated.
2. You can declare move variables and functions if you need them.
3. All the functions can have any number of parameters that are required for their
execution.
4. Perform input validation.
5. Have meaningful variable & function names.
6. Comment your code.
