//#include <iostream>
//#include <string>
//using namespace std;
////structure for Ingredients
//struct Ingredient 
//{
//    string name;
//    //function to change name of Ingredient
//    void changename(string name)
//    {
//        this->name = name;
//    }
//    //Function to print Ingredient
//    void print()
//    {
//        cout << "Ingredient: " << name << endl;
//    }
//};
//// structure for Inventory
//struct Inventory 
//{
//    //List of ingredients
//    Ingredient* IngList = nullptr;
//    //list for quantity of each ingredient
//    int* quantity = nullptr;
//    //total number of ingredients
//    int ingCount = 0;
//    //function to add ingredient to Ingredient list
//    void addIngredient(Ingredient* newIngredient, int qty) 
//    {
//        Ingredient* tempIng = new Ingredient[ingCount + 1];
//        int* tempQty = new int[ingCount + 1];
//        for (int i = 0; i < ingCount; i++) 
//        {
//            tempIng[i] = IngList[i];
//            tempQty[i] = quantity[i];
//        }
//        tempIng[ingCount] = *newIngredient;
//        tempQty[ingCount] = qty;
//        // deleting extra memory to avoid memory leaks
//        delete[] IngList;
//        delete[] quantity;
//
//        IngList = tempIng;
//        quantity = tempQty;
//        ingCount++;
//    }
//    // function to remove ingredient form ingredient list
//    void removeIngredient(string name) 
//    {
//        int index = -1;
//        for (int i = 0; i < ingCount; i++)
//        {
//            if (IngList[i].name == name)
//            {
//                index = i;
//                break;
//            }
//        }
//        //In case ingredient is not present in ingredient list
//        if (index == -1)
//        {
//            cout << "Ingredient not found.\n";
//            return;
//        }
//        //initializing temporary list of ingredient
//        Ingredient* tempIng = new Ingredient[ingCount - 1];
//        int* tempQty = new int[ingCount - 1];
//        //copying ingredient list to new temporary list
//        for (int i = 0, j = 0; i < ingCount; i++) 
//        {
//            if (i == index) continue;
//            tempIng[j] = IngList[i];
//            tempQty[j] = quantity[i];
//            j++;
//        }
//        //deleting extra memory
//        delete[] IngList;
//        delete[] quantity;
//        //assigning ingredient list to temporary list and decrementing length by 1
//        IngList = tempIng;
//        quantity = tempQty;
//        ingCount--;
//    }
//    // function to update quantity ofningredient
//    void updateQuantity(string name, int newQty) 
//    {
//        for (int i = 0; i < ingCount; i++) {
//            if (IngList[i].name == name) {
//                quantity[i] = newQty;
//                return;
//            }
//        }
//        //incase ingredient not found
//        cout << "Ingredient not found.\n";
//    }
//
//    Ingredient* findIngredient(string name) {
//        for (int i = 0; i < ingCount; i++) {
//            if (IngList[i].name == name) {
//                return &IngList[i];
//            }
//        }
//        return nullptr;
//    }
//
//    void print() {
//        cout << "\n--- Inventory ---\n";
//        for (int i = 0; i < ingCount; i++) {
//            IngList[i].print();
//            cout << "Quantity: " << quantity[i] << endl;
//        }
//    }
//};
//struct Item {
//    string name;
//    int price;
//    string status;
//    Ingredient* IngList = nullptr;
//    int length = 0;
//
//    void addIngredient(Ingredient* newIngredient) {
//        Ingredient* temp = new Ingredient[length + 1];
//        for (int i = 0; i < length; i++) {
//            temp[i] = IngList[i];
//        }
//        temp[length] = *newIngredient;
//        delete[] IngList;
//        IngList = temp;
//        length++;
//    }
//
//    void print() {
//        cout << "Item: " << name << ", Price: " << price << ", Status: " << status << endl;
//        for (int i = 0; i < length; i++) {
//            IngList[i].print();
//        }
//    }
//};
//struct Menu {
//    Item* itemList = nullptr;
//    int itemCount = 0;
//
//    void addItem(Item* newItem) {
//        Item* temp = new Item[itemCount + 1];
//        for (int i = 0; i < itemCount; i++) {
//            temp[i] = itemList[i];
//        }
//        temp[itemCount] = *newItem;
//        delete[] itemList;
//        itemList = temp;
//        itemCount++;
//    }
//
//    void removeItem(string itemName) {
//        int index = -1;
//        for (int i = 0; i < itemCount; i++) {
//            if (itemList[i].name == itemName) {
//                index = i;
//                break;
//            }
//        }
//
//        if (index == -1) {
//            cout << "Item not found in the menu.\n";
//            return;
//        }
//
//        Item* temp = new Item[itemCount - 1];
//        for (int i = 0, j = 0; i < itemCount; i++) {
//            if (i == index) continue;
//            temp[j] = itemList[i];
//            j++;
//        }
//
//        delete[] itemList;
//        itemList = temp;
//        itemCount--;
//    }
//
//    Item* findItem(string itemName) {
//        for (int i = 0; i < itemCount; i++) {
//            if (itemList[i].name == itemName) {
//                return &itemList[i];
//            }
//        }
//        return nullptr;
//    }
//
//    void print() {
//        cout << "\n--- Menu ---\n";
//        for (int i = 0; i < itemCount; i++) {
//            itemList[i].print();
//        }
//    }
//};
//struct OrderItem {
//    Item* item;
//    int quantity;
//};
//
//struct Order {
//    OrderItem* itemList = nullptr;
//    int itemCount = 0;
//    string status;
//
//    void addItem(Item* newItem, int qty) {
//        OrderItem* temp = new OrderItem[itemCount + 1];
//        for (int i = 0; i < itemCount; i++) {
//            temp[i] = itemList[i];
//        }
//        temp[itemCount].item = newItem;
//        temp[itemCount].quantity = qty;
//        delete[] itemList;
//        itemList = temp;
//        itemCount++;
//    }
//
//    void removeItem(string itemName) {
//        int index = -1;
//        for (int i = 0; i < itemCount; i++) {
//            if (itemList[i].item->name == itemName) {
//                index = i;
//                break;
//            }
//        }
//
//        if (index == -1) {
//            cout << "Item not found in the order.\n";
//            return;
//        }
//
//        OrderItem* temp = new OrderItem[itemCount - 1];
//        for (int i = 0, j = 0; i < itemCount; i++) {
//            if (i == index) continue;
//            temp[j] = itemList[i];
//            j++;
//        }
//
//        delete[] itemList;
//        itemList = temp;
//        itemCount--;
//    }
//
//    void updateQuantity(string itemName, int newQty) {
//        for (int i = 0; i < itemCount; i++) {
//            if (itemList[i].item->name == itemName) {
//                itemList[i].quantity = newQty;
//                return;
//            }
//        }
//        cout << "Item not found in the order.\n";
//    }
//
//    void print() {
//        cout << "Order Status: " << status << endl;
//        for (int i = 0; i < itemCount; i++) {
//            cout << "Item: " << itemList[i].item->name << ", Quantity: " << itemList[i].quantity << endl;
//        }
//    }
//};
//struct cafeManagement {
//    Inventory Inv1;
//    Menu menu1;
//    Order* orders = nullptr;
//    int orderCount = 0;
//    int capital = 0;
//    // function to add new order to orders list
//    void addOrder(Order* newOrder) 
//    {
//        Order* temp = new Order[orderCount + 1];
//        for (int i = 0; i < orderCount; i++) {
//            temp[i] = orders[i];
//        }
//        temp[orderCount] = *newOrder;
//        delete[] orders;
//        orders = temp;
//        orderCount++;
//    }
//    //I have created this function by using Chatgpt because my compiler was showing some undetermineable errors and I didn't have any clue what to do
//    void updateInventoryForCompletedOrder(Order* completedOrder) {
//        for (int i = 0; i < completedOrder->itemCount; i++) 
//        {
//            Item* orderedItem = completedOrder->itemList[i].item;
//            int orderedQuantity = completedOrder->itemList[i].quantity;
//
//            for (int j = 0; j < orderedItem->length; j++) 
//            {
//                Ingredient* ing = orderedItem->IngList + j;
//                int requiredQuantity = orderedQuantity;
//
//                Ingredient* inventoryIngredient = Inv1.findIngredient(ing->name);
//                if (inventoryIngredient != nullptr) 
//                {
//                    int currentQty = Inv1.quantity[inventoryIngredient - Inv1.IngList];
//                    Inv1.updateQuantity(inventoryIngredient->name, currentQty - requiredQuantity);
//                }
//            }
//        }
//    }
//
//    void manageInventory() 
//    {
//        int choice;
//        do 
//        {
//            cout << "\n--- Manage Inventory ---\n";
//            cout << "1. Add Ingredient\n";
//            cout << "2. Remove Ingredient\n";
//            cout << "3. Update Ingredient Quantity\n";
//            cout << "4. View Inventory\n";
//            cout << "5. Back to Main Menu\n";
//            cout << "Enter your choice: ";
//            cin >> choice;
//            cout << "---------------------------------------------------------------------" << endl;
//            switch (choice) {
//            case 1: 
//            {
//                string name;
//                int quantity;
//                cout << "Enter ingredient name: ";
//                cin >> name;
//                cout << "Enter quantity: ";
//                cin >> quantity;
//                Ingredient newIngredient;
//                newIngredient.changename(name);
//                Inv1.addIngredient(&newIngredient, quantity);
//                cout << "Ingredient added to inventory.\n";
//                break;
//            }
//            case 2: 
//            {
//                string name;
//                cout << "Enter ingredient name to remove: ";
//                cin >> name;
//                Inv1.removeIngredient(name);
//                break;
//            }
//            case 3: 
//            {
//                string name;
//                int quantity;
//                cout << "Enter ingredient name to update: ";
//                cin >> name;
//                cout << "Enter new quantity: ";
//                cin >> quantity;
//                Inv1.updateQuantity(name, quantity);
//                break;
//            }
//            case 4:
//                Inv1.print();
//                break;
//            case 5:
//                cout << "Returning to the main menu.\n";
//                break;
//            default:
//                cout << "Invalid choice! Please select a valid option.\n";
//                break;
//            }
//        } while (choice != 5);
//    }
//
//    void manageMenu() 
//    {
//        int choice;
//        do
//        {
//            cout << "\n--- Manage Menu ---\n";
//            cout << "1. Add Item\n";
//            cout << "2. Remove Item\n";
//            cout << "3. View Menu\n";
//            cout << "4. Back to Main Menu\n";
//            cout << "Enter your choice: ";
//            cin >> choice;
//            cout << "---------------------------------------------------------------------" << endl;
//            switch (choice)
//            {
//            case 1: 
//            {
//                string name;
//                int price;
//                cout << "Enter item name: ";
//                cin >> name;
//                cout << "Enter item price: ";
//                cin >> price;
//                Item newItem;
//                newItem.name = name;
//                newItem.price = price;
//                newItem.status = "AVAILABLE";
//                menu1.addItem(&newItem);
//                cout << "Item added to menu.\n";
//                break;
//            }
//            case 2: 
//            {
//                string name;
//                cout << "Enter item name to remove: ";
//                cin >> name;
//                menu1.removeItem(name);
//                break;
//            }
//            case 3:
//                menu1.print();
//                break;
//            case 4:
//                cout << "Returning to the main menu.\n";
//                break;
//            default:
//                cout << "Invalid choice! Please select a valid option.\n";
//                break;
//            }
//        } while (choice != 4);
//    }
//
//    void createOrder() 
//    {
//        Order newOrder;
//        newOrder.status = "PENDING";
//        int choice;
//        do 
//        {
//            cout << "\n--- Create Order ---\n";
//            cout << "1. Add Item to Order\n";
//            cout << "2. Remove Item from Order\n";
//            cout << "3. Update Item Quantity\n";
//            cout << "4. View Order\n";
//            cout << "5. Complete Order\n";
//            cout << "6. Cancel Order\n";
//            cout << "Enter your choice: ";
//            cin >> choice;
//            cout << "---------------------------------------------------------------------" << endl;
//            switch (choice) 
//            {
//            case 1:
//            {
//                string itemName;
//                int quantity;
//                cout << "Enter item name to add: ";
//                cin >> itemName;
//                Item* menuItem = menu1.findItem(itemName);
//                if (menuItem != nullptr) {
//                    cout << "Enter quantity: ";
//                    cin >> quantity;
//                    newOrder.addItem(menuItem, quantity);
//                    cout << "Item added to order.\n";
//                }
//                else 
//                {
//                    cout << "Item not found in menu.\n";
//                }
//                break;
//            }
//            case 2: 
//            {
//                string itemName;
//                cout << "Enter item name to remove: ";
//                cin >> itemName;
//                newOrder.removeItem(itemName);
//                break;
//            }
//            case 3: 
//            {
//                string itemName;
//                int newQuantity;
//                cout << "Enter item name to update quantity: ";
//                cin >> itemName;
//                cout << "Enter new quantity: ";
//                cin >> newQuantity;
//                newOrder.updateQuantity(itemName, newQuantity);
//                break;
//            }
//            case 4:
//                newOrder.print();
//                break;
//            case 5:
//                newOrder.status = "COMPLETED";
//                addOrder(&newOrder);
//                updateInventoryForCompletedOrder(&newOrder);
//                cout << "Order completed and added to the list of orders.\n";
//                break;
//            case 6:
//                cout << "Order canceled. Returning to the main menu.\n";
//                break;
//            default:
//                cout << "Invalid choice! Please select a valid option.\n";
//                break;
//            }
//        } while (choice != 5 && choice != 6);
//    }
//
//    void viewOrder()
//    {
//        if (orderCount == 0) 
//        {
//            cout << "\nNo orders have been placed yet.\n";
//            return;
//        }
//
//        cout << "\n--- Viewing All Orders ---\n";
//        for (int i = 0; i < orderCount; i++) 
//        {
//            cout << "Order " << i + 1 << ": ";
//            orders[i].print();
//        }
//    }
//};
//int main() 
//{
//    cafeManagement cafe;
//    int choice;
//    do 
//    {
//        cout << "Press\n1. Manage Inventory\n2. Manage Menu\n3. Place Order\n4. View All Orders\n5.Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        cout << "---------------------------------------------------------------------" << endl;
//
//        switch (choice) 
//        {
//        case 1:
//            cafe.manageInventory();
//            break;
//        case 2:
//            cafe.manageMenu();
//            break;
//        case 3:
//            cafe.createOrder();
//            break;
//        case 4:
//            cafe.viewOrder();
//            break;
//        case 5:
//            cout << "Exiting system. Goodbye!\n";
//            break;
//        default:
//            cout << "Invalid choice! Please select a valid option.\n";
//            break;
//        }
//    } while (choice != 5);
//
//    return 0;
//}
