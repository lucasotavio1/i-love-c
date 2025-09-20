#include <iomanip>
#include <iostream>


using namespace std;

int main() {
    double raio;
    constexpr double PI = 3.14159;

    cin >> raio;

    double const area = PI * raio * raio;

    cout << "A=" << fixed << setprecision(4) <<area << endl;

    return 0;
}
