#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book {
    char name[100];
    int page_numbers;
    char publication[100];
    float cost;
} Book;

int main() {
    int num;
    printf("Enter the number of books: ");
    scanf("%d", &num);

    // Consume the newline character left in the buffer
    getchar();

    Book books[num]; // Declare an array of structures

    // Input loop
    for (int i = 0; i < num; i++) {
        printf("\nEnter Book Name: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);

        printf("Enter Page Numbers: ");
        scanf("%d", &books[i].page_numbers);
        
        // Consume the newline character left in the buffer
        getchar();
    
        printf("Enter Publication: ");
        fgets(books[i].publication, sizeof(books[i].publication), stdin);

        printf("Enter Cost: ");
        scanf("%f", &books[i].cost);
        
        // Consume the newline character left in the buffer
        getchar();
    }

    // Output loop
    printf("\nBooks Details:\n");
    for (int i = 0; i < num; i++) {
        printf("\nBook Name: %s", books[i].name);
        printf("\nPage Numbers: %d", books[i].page_numbers);
        printf("\nPublication: %s", books[i].publication);
        printf("\nCost: %.2f\n", books[i].cost);
    }

    // strcpy(books[1].name,"Think Like A Monk");
    // printf("%d",books[1].name);
    return 0;
}
