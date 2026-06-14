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