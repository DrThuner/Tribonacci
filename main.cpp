#include <iostream>

using namespace std;

int Tribonacci(int n) {                         //
    int an = 1, an_1 = 0, an_2 = 0, pom;
    if (n == 0)
        return an_2;
    if (n == 1)
        return an_1;
    if (n == 2)
        return an;
    for (int i = 2; i < n; i++) {
        pom = an + an_1 + an_2;
        an_2 = an_1;
        an_1 = an;
        an = pom;
    }
    return an;
}

int main() {
    int n;
    cin >> n;
    cout << Tribonacci(n) << endl;
    system("pause");
    return 0;
}