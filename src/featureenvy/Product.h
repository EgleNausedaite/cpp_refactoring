#pragma once

namespace refactoring::featureenvy {

class Product {
public:
    Product(double price, bool onSale);

    double getPrice() const;
    bool isOnSale() const;

    double calculateProductFinalPrice(const Product &product) const {
        double price = product.getPrice();

        if (product.isOnSale()) {
            price = price * 0.8;
        }

        return price;
    }

private:
    double price_;
    bool onSale_;
};

} // namespace refactoring::featureenvy
