#include<iostream>
using namespace std;

int factorial(int);
int main(int argc, char **argv) {
    int N, k;
    cin >> N >> k;
    cout << factorial(N) / (factorial(k) * factorial(N - k));
return 0; }

int factorial(int N) {
    if (N <= 1) {
        return 1;
    }
    else { return N * factorial(N - 1); }
}
