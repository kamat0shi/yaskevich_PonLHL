#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>
#include <sqlite3.h>
#include <sstream>

class Product {
private:
    std::string name;
    double retailPrice;
    double wholesalePrice;
    int quantity;

    friend bool compareQuantity(const Product& p1, const Product& p2);

    friend Product operator+(Product lhs, int additionalQty) {
        lhs.quantity += additionalQty;
        return lhs;
    }

    friend std::ostream& operator<<(std::ostream& os, const Product& product) {
        os << "Название: " << product.name
           << ", Розничная цена: " << product.retailPrice
           << ", Количество: " << product.quantity;
        return os;
    }

public:
    Product(const std::string_view n, double rPrice, double wPrice, int q);
    
    void setName(const std::string_view n);
    void setRetailPrice(double rPrice);
    void setWholesalePrice(double wPrice);
    void setQuantity(int q);

    std::string getName() const;
    double getRetailPrice() const;
    double getWholesalePrice(bool isAdmin) const;
    int getQuantity() const;

    void reduceQuantity(int qty);

    int getIdByName(sqlite3* db, const std::string& productName) const;

    double calculateProfit(int qty) const;
    double calculateProfit(int qty, double discount) const;

    void displayInfo(bool isAdmin = false) const;
    std::string getInfo(bool isAdmin) const;
};

#endif