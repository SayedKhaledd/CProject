
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define maxSize 1000
#define namesSize 20

int ids[maxSize];
int quantities[maxSize];
int prices[maxSize];
char names[maxSize][namesSize];
char compNames[maxSize][namesSize];
char manufacturingDates[maxSize][namesSize];
char expireDates[maxSize][namesSize];
int size = 0;

void menu();

void addMedicine();

void deleteMedicine();

void updateMedicine();

void printMedicinesInStock();

int getMedicineInfo();

void getMedicineIdPos(int, int *);

void getMedicineNamePos(char [], int *);

void toLowerCase(char name[], int mySize);

void search(int *);

void sellMedicine();

int main() {

    int choice;
    menu();
    scanf("%d", &choice);
    while (choice >= 1 && choice <= 7) {
        switch (choice) {
            case 1:
                addMedicine();
                break;
            case 2:
                deleteMedicine();
                break;
            case 3: {
                updateMedicine();
                break;
            }
            case 4:
                printMedicinesInStock();
                break;
            case 5 :
                getMedicineInfo();
                break;
            case 6:
                sellMedicine();
                break;
            case 7:
                exit(0);

        }
        menu();
        scanf("%d", &choice);

    }
    printf("none");

}

void menu() {

    printf("Choose from this menu:\n"
           "1-Add Medicine\n"
           "2-Delete Medicine\n"
           "3-UpdateMedicine\n"
           "4-Print Medicines In Stock\n"
           "5-Get Medicine Info\n"
           "6-Sell Medicine\n"
           "7-Quit\n");

}

void addMedicine() {
    printf("Enter Medicine Id\n");
    scanf("%d", &ids[size]);
    printf("Enter Medicine Name\n");
    scanf("%myStack", names[size]);
    printf("Enter Company Name\n");
    scanf("%myStack", compNames[size]);
    printf("Enter Manufactured Date\n");
    scanf("%myStack", manufacturingDates[size]);
    printf("Enter Expire Date\n");
    scanf("%myStack", expireDates[size]);
    printf("Enter Quantity\n");
    scanf("%d", &quantities[size]);
    printf("Enter Price\n");
    scanf("%d", &prices[size]);


    printf("Medicine with id %d Added successfully\n", ids[size]);
    size++;
}

void deleteMedicine() {
    int *index;
    search(index);
    if (index == NULL)return;
    for (int i = *index; i < size - 1; i++) {
        ids[i - 1] = ids[i];
        quantities[i - 1] = quantities[i];
        prices[i - 1] = prices[i];
        strcpy(names[i - 1], names[i]);
        strcpy(manufacturingDates[i - 1], manufacturingDates[i]);
        strcpy(compNames[i - 1], compNames[i]);
        strcpy(expireDates[i - 1], expireDates[i]);

    }

    size--;
}

void getMedicineIdPos(int id, int *index) {

    for (int i = 0; i < size; i++) {
        if (id == ids[i])
            *index = i;
    }
}

void printMedicinesInStock() {

    for (int i = 0; i < size; i++) {
        printf("id: %d name: %myStack company name: %myStack manufacturing date: %myStack expiry date: %myStack quantity: %d price: %d\n",
               ids[i], names[i], compNames[i], manufacturingDates[i], expireDates[i],
               quantities[i],
               prices[i]);
    }

}

void getMedicineNamePos(char name[], int *index) {

    toLowerCase(name, namesSize);
    for (int i = 0; i < size; i++) {
        char temp[namesSize];
        strcpy(temp, names[i]);
        toLowerCase(temp, namesSize);
        if (!strcmp(name, temp))
            *index = i;
    }

}

void toLowerCase(char *name, int mySize) {

    for (int i = 0; i < mySize; i++) {
        name[i] = tolower(name[i]);
    }

}

void search(int *index) {
    int choice;
    printf("enter medicine id or medicine name?(1/2)\n");
    scanf("%d", &choice);

    if (choice == 1) {
        int id;
        printf("enter medicine id\n");
        scanf("%d", &id);
        getMedicineIdPos(id, index);

    } else if (choice == 2) {
        char name[namesSize];
        printf("enter medicine name\n");
        scanf("%myStack", name);
        getMedicineNamePos(name, index);

    }

}

void updateMedicine() {
    int *index;
    search(index);
    if (index == NULL)return;

    printf("Enter:\n"
           "1-change quantity\n"
           "2-change price\n"
           "3-change name\n"
           "4-change company\n"
           "5-change manufacturing date\n"
           "6-change expire date\n");
    int choice;
    scanf("%d", &choice);
    switch (choice) {
        case 1: {
            int quantity;
            printf("enter quantity\n");
            scanf("%d", &quantity);
            quantities[*index] = quantity;
            break;
        }

        case 2: {
            int price;
            printf("enter price\n");
            scanf("%d", &price);
            prices[*index] = price;
            break;
        }
        case 3: {
            char name[namesSize];
            printf("enter name\n");
            scanf("%myStack", name);
            strcpy(names[*index], name);
            break;
        }
        case 4: {
            char compName[namesSize];
            printf("enter compName\n");
            scanf("%myStack", compName);
            strcpy(compNames[*index], compName);
            break;
        }
        case 5: {
            char myManufDate[namesSize];
            printf("enter manufacturing Date\n");
            scanf("%myStack", myManufDate);
            strcpy(manufacturingDates[*index], myManufDate);
            break;
        }
        case 6: {
            char myExpireDate[namesSize];
            printf("enter expireDates\n");
            scanf("%myStack", myExpireDate);
            strcpy(expireDates[*index], myExpireDate);
            break;
        }
    }

}

int getMedicineInfo() {
    int *index;
    search(index);
    if (index == NULL) exit(1);

    printf("%d %myStack %myStack %myStack %myStack %d %d\n", ids[*index], names[*index], compNames[*index], manufacturingDates[*index],
           expireDates[*index],
           quantities[*index],
           prices[*index]);

    return *index;
}

void sellMedicine() {
    int index = getMedicineInfo();
    if (quantities[index] > 0) {
        printf("you want to buy it?:\n"
               "1-yes\n"
               "2-no\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1) {
            int quantity;
            printf("how many?\n");
            scanf("%d", &quantity);
            if (quantity <= quantities[index]) {
                printf("price equals %d\n", quantity * prices[index]);
                quantities[index] -= quantity;
            } else {
                printf("only are %d available", quantities[index]);
            }
        }

    }
}