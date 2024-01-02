#include <string>
namespace MM
{
    class Transaction
    {
    private:
        int transaction_ID;
        double transaction_amount;
        std::string transaction_type;
    public:
        void print_transaction();
        void edit_transaction();
    };

    class Account
    {
    public:
        void display_balance();
    };
} // namespace MM
