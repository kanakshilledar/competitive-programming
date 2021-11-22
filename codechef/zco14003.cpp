#include <bits/stdc++.h>
using namespace std;

int main() {
	int num_customers;
	cin >> num_customers;
	long long int customers[num_customers];

	for (int i = 0; i < num_customers; i ++) {
		cin >> customers[i];
	}

	sort(customers, customers + num_customers);
	long long int budgets, favourable_price{INT16_MIN};
	
	for (int i = 0; i < num_customers; i++) {
		budgets = customers[i] * (num_customers - i);
		if (budgets > favourable_price) {
			favourable_price = budgets;
		}
	}

	cout << favourable_price;

	return 0;
}