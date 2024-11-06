#include <stdio.h>

typedef struct {
    char name[20];
    int id;
    int count;
    double price;
} Product;

void printProduct(const Product product) {
    printf("Product: %s, %d, %d, %f\n", product.name, product.id, product.count, product.price);
}

void swapProduct(Product *a, Product *b) {
    const Product temp = *a;
    *a = *b;
    *b = temp;
}

void printProducts(const Product products[], const int count) {
    for (int i = 0; i < count; i++) {
        printProduct(products[i]);
    }
}

void shiftProducts(Product products[], const int count) {
    Product current = products[0];
    for (int i = 1; i < count; i++) {
        const Product temp = current;
        current = products[i];
        products[i] = temp;
    }
    products[0] = current;
}

int main() {
    Product products[5];
    products[0] = (Product){
        "Apple",
        1,
        6,
        2.0
    };
    products[1] = (Product){
        "Water",
        2,
        12,
        1.5
    };
    products[2] = (Product){
        "Laptop",
        3,
        1,
        800.0
    };

    printProducts(products, 5);
    printf("\n---\n");

    shiftProducts(products, 5);

    printProducts(products, 5);
    return 0;
}
