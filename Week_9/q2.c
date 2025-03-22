#include <stdio.h>
#include <stdlib.h>

struct FamilyMember {
    char name[50];
    int money;
    struct FamilyMember* next;
};

struct Client {
    int id;
    struct FamilyMember* familyHead;
    struct Client* next;
};

struct Client* head = NULL;


void AddNewClient() {
    struct Client* newClient = (struct Client*)malloc(sizeof(struct Client));
    newClient->next = NULL;
    newClient->familyHead = NULL;

    printf("Enter ID: ");
    scanf("%d", &newClient->id);

    int n;
    printf("Enter number of family members: ");
    scanf("%d", &n);

    struct FamilyMember* lastMember = NULL;
    for (int i = 0; i < n; i++) {
        struct FamilyMember* newMember = (struct FamilyMember*)malloc(sizeof(struct FamilyMember));
        printf("Enter the family member name: ");
        scanf("%s", newMember->name);
        printf("Enter the family member money: ");
        scanf("%d", &newMember->money);
        newMember->next = NULL;

        if (lastMember == NULL) {
            newClient->familyHead = newMember;
        } else {
            lastMember->next = newMember;
        }
        lastMember = newMember;
    }

   
    if (head == NULL) {
        head = newClient;
    } else {
        struct Client* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newClient;
    }

    printf("Run again?\n1-yes\n2-no\n");
}


void ListClient() {
    if (head == NULL) {
        printf("\nThere is no clients yet\n");
        printf("\nRun again?\n1-yes\n2-no\n");
        return;
    }

    struct Client* temp = head;
    while (temp != NULL) {
        printf("Client id: %d\n", temp->id);
        struct FamilyMember* member = temp->familyHead;
        while (member != NULL) {
            printf("  Member: %s\n   Money: %d\n", member->name, member->money);
            member = member->next;
        }
        temp = temp->next;
    }
    printf("Run again?\n1-yes\n2-no\n");
}


void EditClientData() {
    if (head == NULL) {
        printf("There are no clients yet.\n");
        printf("Run again?\n1-yes\n2-no\n");
        return;
    }

    int searchId;
    printf("Enter client ID to edit: ");
    scanf("%d", &searchId);

    struct Client* temp = head;
    while (temp != NULL) {
        if (temp->id == searchId) {
            printf("Editing Client ID: %d\n", temp->id);
            struct FamilyMember* member = temp->familyHead;
            while (member != NULL) {
                printf("Editing Member: %s\n", member->name);
                printf("Enter new name: ");
                scanf("%s", member->name);
                printf("Enter new money: ");
                scanf("%d", &member->money);
                member = member->next;
            }
            printf("Client data updated successfully!\n");
            printf("Run again?\n1-yes\n2-no\n");
            return;
        }
        temp = temp->next;
    }
    printf("Client with ID %d not found.\n", searchId);
    printf("Run again?\n1-yes\n2-no\n");
}

int main() {
    int x;
    while (1) {
        printf("    \n****Welcome****\n");
        printf("1- List Clients\n2- Add New Client\n3- Edit Client Data\n");
		printf("\nYour choice:");
        scanf("%d", &x);

        switch (x) {
            case 1:
                ListClient();
                break;
            case 2:
                AddNewClient();
                break;
            case 3:
                EditClientData();
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }

        int choice;
        scanf("%d", &choice);
        if (choice != 1) {
            printf("Exiting program...\n");
            break;
        }
    }

    return 0;
}