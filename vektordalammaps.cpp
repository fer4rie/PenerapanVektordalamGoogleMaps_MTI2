#include <iostream>
#include <cmath>
using namespace std;

// Rumus Euclidean: √((x2 - x1)^2 + (y2 - y1)^2)
double jarakEuclidean(double x1, double y1, double x2, double y2) {
    return sqrt(
        pow((x2 - x1), 2) +
        pow((y2 - y1), 2)
    ) * 111; // dikalikan 111 karena 1° lintang ≈ 111 km (konversi dari derajat ke kilometer)
}

int main() {
    cout << "Jarak antara UMY dan Universitas Alma Ata Yogyakarta : "
         << jarakEuclidean(-7.810313, 110.321807, -7.817716, 110.324678) << " km\n";

    cout << "Jarak antara UMY dan Universitas Islam Indonesia : "
         << jarakEuclidean(-7.810313, 110.321807, -7.683359, 110.414605) << " km\n";

    cout << "Jarak antara UMY dan Universitas Diponegoro : "
         << jarakEuclidean(-7.810313, 110.321807, -7.051718, 110.441616) << " km\n";

    cout << "Jarak antara UMY dan Universitas Hasanuddin : "
         << jarakEuclidean(-7.810313, 110.321807, -5.133889, 119.488109) << " km\n";

    return 0;
}

