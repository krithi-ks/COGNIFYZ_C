// C PROGRAM - COGNIFYZ
// TASK 10 - SIMPLE INVENTORY MANAGEMENT SYSTEM

#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct
{ 
    int id; 
    char name[50]; 
    int quantity; 
} item;

item inventory[MAX];
int count = 0;

// Function to add items
void addItem() 
{
    if (count < MAX) 
    {
        printf("\nID: "); 
        scanf("%i", &inventory[count].id);
        printf("Name: "); 
        scanf("%s", inventory[count].name);
        printf("Quantity: "); 
        scanf("%i", &inventory[count].quantity);
        printf("\nITEM ADDED!\n");
        count++;
    } 
    else 
        printf("\nINVENTORY FULL!\n");
}


// Function to display the items
void showItems() 
{
    if (count == 0) 
        printf("\nINVENTORY EMPTY!\n");
    else
    {
        printf("\nINVENTORY ITEMS LIST:\n");
        printf("ID\tNAME\tQUANTITY\n");
    for (int i = 0; i < count; i++)
        printf("%d\t%s\t%d\n", inventory[i].id, inventory[i].name, inventory[i].quantity);
    }
}

// Function to search item by ID
void searchID() 
{
    int id, found = 0; 
    printf("\nID: "); 
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
        if (inventory[i].id == id) 
        {
            printf("\nITEM FOUND!\nName: %s\nQuantity: %d\n", inventory[i].name, inventory[i].quantity); 
            found = 1;
        }
    if (!found) 
        printf("ITEM NOT FOUND!\n");
}

// Function to search item by Name
void searchName() 
{
    char name[50]; 
    int found = 0; 
    printf("\nName: "); 
    scanf("%s", name);
    for (int i = 0; i < count; i++)
        if (strcmp(inventory[i].name, name) == 0) 
        { 
            printf("ITEM FOUND!\nID: %d\nQuantity: %d\n", inventory[i].id, inventory[i].quantity); 
            found = 1;
        }
    if (!found) 
        printf("ITEM NOT FOUND!\n");
}

int main(void) 
{
    int choice = 0; 
    while (1) 
    {
        printf("\nINVENTORY MANAGEMENT\n");
        printf("\n1. ADD ITEM\n2. DISPLAY ITEM\n3. SEARCH BY ID\n4. SEARCH BY NAME\n5. QUIT\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1: 
                addItem(); 
                break;
            case 2: 
                showItems(); 
                break;
            case 3: 
                searchID(); 
                break;
            case 4: 
                searchName(); 
                break;
            case 5: 
                printf("\nExiting.....\n");
                return 0;
            default: 
                printf("INVALID CHOICE!\n");
        }
    }
}
