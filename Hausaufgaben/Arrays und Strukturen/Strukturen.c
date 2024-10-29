#include <stdio.h>

typedef struct {
    char name[20];
    int id;
    int count;
    double price;
} Product;

void setName(Product* product, const char name[20]) {
    int i = 0;
    while (i < 20) {
        product->name[i] = name[i];
        i++;
    }
}

void setId(Product* product, const int id) {
    product->id = id;
}

void setCount(Product* product, const int count) {
    product->count = count;
}

void setPrice(Product* product, const double price) {
    product->price = price;
}

void printName(Product product) {
    printf("Name: %s\n", product.name);
}

void printId(const Product product) {
    printf("Id: %d\n", product.id);
}

void printCount(const Product product) {
    printf("Count: %d\n", product.count);
}

void printPrice(const Product product) {
    printf("Price: %.2f\n", product.price);
}

void printProduct(const Product product) {
    printName(product);
    printId(product);
    printCount(product);
    printPrice(product);
    printf("\n");
}

void copyProduct(const Product* source, Product* destination) {
    setName(destination, source->name);
    setId(destination, source->id);
    setCount(destination, source->count);
    setPrice(destination, source->price);
}


void swapProduct(Product* a, Product* b) {
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
    products[0] = (Product) {
        "Apple",
        1,
        6,
        2.0
    };
    products[1] = (Product) {
        "Water",
        2,
        12,
        1.5
    };
    products[2] = (Product) {
        "Laptop",
        3,
        1,
        800.0        
    };

    printProducts(products, 5);
    printf("---\n\n");

    shiftProducts(products, 5);

    printProducts(products, 5);
    return 0;
}
