#pragma once

namespace refactoring::featureenvy {

class Product {
public:
    Product(double price, bool onSale);

    double getPrice() const;
    bool isOnSale() const;

    double calculateProductFinalPrice(const Product &product) const;

private:
    double price_;
    bool onSale_;
};

} // namespace refactoring::featureenvy
