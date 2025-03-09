#include <iostream>
using namespace std;

// Функция для перемещения дисков
int tower(int n, int source, int auxiliary, int target) {
    if (n == 1) {
        cout << source << "->" << target << endl;
        return 1;
    }
    else {
        int count = 0;
        count += tower(n - 1, source, target, auxiliary); // Перемещаем n-1 дисков на вспомогательный стержень
        cout << source << "->" << target << endl; // Перемещаем самый большой диск на целевой стержень
        count += 1;
        count += tower(n - 1, auxiliary, source, target); // Перемещаем n-1 дисков с вспомогательного на целевой стержень
        return count;
    }
}

int main() {
    int kolDisk;
    cin >> kolDisk;
    int kol = tower(kolDisk, 1, 2, 3);
    cout << "Количество действий: " << kol << endl;
    return 0;
}
