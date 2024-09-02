#include <iostream>
using namespace std;

int main() {
    // Define the quantities needed
    int num_notebooks = 15;
    int num_pens = 20;

    // Define the cost of each item
    float cost_per_notebook = 2.25;
    float cost_per_pen = 0.75;

    // Calculate the total cost
    float total_cost = (num_notebooks * cost_per_notebook) + (num_pens * cost_per_pen);

    // Output the total cost
    cout << "The total cost of the supplies is: Rs. " << total_cost << endl;

    return 0;
}