
#include <iostream>
using namespace std;
void printBinary(int num) {
    for (int i = 31; i >= 0; i--) {
        cout << ((num >> i) & 1);
        if (i % 4 == 0) cout << " "; // Separar en grupos de 4
    }
    cout << endl;
}
int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "Representación binaria: ";
    printBinary(num);
    return 0;

}


