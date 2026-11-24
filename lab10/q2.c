#include <stdio.h>

struct Product {
    int id;
    char name[30];
    char cat[30];
    float price;
    int qty;
};

void displayProductDetails(struct Product p) {
    float fp = p.price - p.price * 0.05;
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.cat);
    printf("Price: %.2f\n", p.price);
    printf("Stock: %d\n", p.qty);
    printf("Final Price (5%% off): %.2f\n\n", fp);
}

int main() {
    struct Product p1 = {101, "Laptop", "Electronics", 85000.0, 15};
    struct Product p2 = {102, "Headphones", "Accessories", 4500.0, 40};

    displayProductDetails(p1);
    displayProductDetails(p2);
    return 0;
}
