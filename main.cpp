#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int c[size] {0};

    for (int i = 0; i < size; i++) {
        cout << "Enter the value of c[" <<i<<"]: " << endl;
        cin >> c[i];
    }

    int min = c[0], max = c[0];

    for (int i = 0; i < size; i++) {
        if (min > c[i]) {
            min = c[i];
        }
        if (max < c[i]) {
            max = c[i];
        }
    }

    cout << "Max value: " << max << endl;
    cout << "Min value: " << min << endl;

    return 0;
}