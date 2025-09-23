#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, media;

    cin >> a >> b >> c;

    media = ((a * 2.0) + (b * 3.0) + (c * 5.0)) / 10.0;

    cout << "MEDIA = " << fixed << setprecision(1) << media << endl;

    return 0;
}
