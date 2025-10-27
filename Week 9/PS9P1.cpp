#include<iostream>
#include<iomanip>
using namespace std;
float compute_total(float quantity, float price)
{
    float t;

    t = quantity * price;

    return t;
}
float compute_discount_price(float total)
{
    float discount_amount, discount_price;

    if (total > 10000) {
        discount_amount = total * .10;
    }
    else if (total <= 10000) {
        discount_amount = total * .05;
    }
    discount_price = total - discount_amount;

    return discount_price;
}
int main()
{
    float quantity, price, total;
    float discount_price;
    float sum_total = 0, sum_discounted_total = 0;

    cout << "Enter quantity and price of item: ";

    while (cin >> quantity >> price)
    {
        total = compute_total(quantity, price);
        discount_price = compute_discount_price(total);

        sum_total = sum_total + total;
        sum_discounted_total = sum_discounted_total + discount_price;
        
        cout << fixed << setprecision(2);
        cout << "Total (before discount): $" << total << endl
            << "Disounted total: $" << discount_price << endl
            << "Enter quantity and price of item (CTRL + Z when done): ";
    }
    cout << fixed << setprecision(2);
    cout << "Overall total (Before discount): $" << sum_total << endl
        << "Overall discounted total: $" << sum_discounted_total;
}