#include "longmethod/Order.h"

namespace refactoring::longmethod {

Order::Order(std::optional<std::vector<OrderItem>> items, Customer customer)
    : items_(std::move(items)), customer_(customer) {}

void Order::validateItems() const {
    if (!items_.has_value()) {
        throw IllegalStateException("Items cannot be null");
    }
    if (items_->empty()) {
        throw IllegalStateException("Order must contain items");
    }
}

double Order::calculateSubtotal() const {
    double subtotal = 0.0;
    for (const OrderItem& item : *items_) {
        subtotal += item.getPrice() * item.getQuantity();
    }
    return subtotal;
}

double Order::calculateDiscount(double subtotal) const {
    double discount = 0.0;
    if (customer_.isLoyal()) {
        discount = subtotal * 0.10;
    } else if (subtotal > 100) {
        discount = subtotal * 0.05;
    }
    return discount;
}

double Order::calculateTax(double subtotal, double discount) const {
    return taxableAmount(subtotal, discount) * 0.20;
}

double Order::taxableAmount(double subtotal, double discount) const
{
    return subtotal - discount;
}

double Order::calculateTotal(double subtotal, double discount, double tax) const {
    return taxableAmount(subtotal, discount) + tax;
}

OrderSummary Order::summarise() const {

    validateItems();

    double subtotal = calculateSubtotal();

    double discount = calculateDiscount(subtotal);

    double tax = calculateTax(subtotal, discount);

    double total = calculateTotal(subtotal, discount, tax);

    return OrderSummary(subtotal, discount, tax, total);
}

} // namespace refactoring::longmethod
