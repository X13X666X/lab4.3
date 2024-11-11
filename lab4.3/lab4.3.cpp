#include <iostream>
#include <iomanip>

int main() {
    double a, b, c, X_start, X_end, dX;

    std::cout << "a: "; std::cin >> a;
    std::cout << "b: "; std::cin >> b;
    std::cout << "c: "; std::cin >> c;
    std::cout << "X_start: "; std::cin >> X_start;
    std::cout << "X_end: "; std::cin >> X_end;
    std::cout << "dX: "; std::cin >> dX;

    std::cout << "+------------+-------------------+" << std::endl;
    std::cout << "|     X      |        F(X)       |" << std::endl;
    std::cout << "+------------+-------------------+" << std::endl;

    for (double x = X_start; x <= X_end; x += dX) {
        double F;

        if (x + c < 0 && a != 0) {
            F = -a * x * x - b;
        }
        else if (x + c > 0 && a == 0) {
            F = (x - a) / (x - c);
        }
        else {
            F = (x / c) + (c / x);
        }

        std::cout << "| " << std::setw(10) << std::fixed << std::setprecision(4) << x
            << " | " << std::setw(17) << F << " |" << std::endl;
    }

    std::cout << "+------------+-------------------+" << std::endl;

    return 0;
}
