class Customer {
public:
    Customer(
            const std::string& firstName,
            const std::string& lastName
    ) : m_firstName(firstName), m_lastName(lastName) {
        
    }

    std::string getFullName() const {
        return m_firstName + " " + m_lastName;
    }

    std::string m_firstName;
    std::string m_lastName;
};