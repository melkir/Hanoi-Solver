#include <iostream>
#include <hanoi.h>

using namespace std;

void solve_hanoi_with_2_disk() {
    Hanoi hanoi(2);
    cout << "Etat initial :\n" << hanoi << "\n\n";
    hanoi.move(hanoi.tower(1), hanoi.tower(2));
    cout << "Etape 1 :\n" << hanoi << "\n\n";
    hanoi.move(hanoi.tower(1), hanoi.tower(3));
    cout << "Etape 2 :\n" << hanoi << "\n\n";
    hanoi.move(hanoi.tower(2), hanoi.tower(3));
    cout << "Etape 3 :\n" << hanoi << "\n\n";
}

void solve(Hanoi &hanoi, int n, int D, int A, int I) {
    if (n == 0) return;
    solve(hanoi, n - 1, D, I, A);
    // Déplacer le disque de D vers A
    hanoi.move(hanoi.tower((unsigned int) D), hanoi.tower((unsigned int) A));
    solve(hanoi, n - 1, I, A, D);
}

void solve_hanoi_with_n_disk(int n) {
    Hanoi hanoi((unsigned int) n);
    cout << "Etat initial :\n" << hanoi;
    solve(hanoi, n, 1, 3, 2);
    cout << "\nEtat final :\n" << hanoi;
}

int main() {
//    solve_hanoi_with_2_disk();
    solve_hanoi_with_n_disk(10);
}
