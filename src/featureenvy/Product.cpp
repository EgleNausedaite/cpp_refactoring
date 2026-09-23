#include "featureenvy/Product.h"

namespace refactoring::featureenvy {

Product::Product(double price, bool onSale) : price_(price), onSale_(onSale) {}

double Product::getPrice() const {
    return price_;
}

bool Product::isOnSale() const {
    return onSale_;
}

    double Product::calculateProductFinalPrice(const Product &product) const {
        double price = product.getPrice();

        if (product.isOnSale()) {
            price = price * 0.8;
        }

        return price;
    }

} // namespace refactoring::featureenvy
