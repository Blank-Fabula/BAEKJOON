#include <iostream>
#include <string>
using namespace std;

int arr[10000];
int stack(string, int);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N; cin >> N;
    for (int size = 0; N!=0; N--) {
        string word;
        cin >> word;
        size = stack(word, size);
    }
return 0; }

int stack(string word, int size) {
    if (word == "push") {
        cin >> arr[size];
        size++;
	}
    else if (word == "pop") {
        if (arr[size - 1]) {
            cout << arr[size - 1] << "\n";
            arr[size - 1] = NULL;
            size--;
        }
        else cout << -1 << "\n";
    }
    else if (word == "size") {
        cout << size << "\n";
    }
    else if (word == "empty") {
        if (size) cout << 0 << "\n";
        else cout << 1 << "\n";
    }
    else if (word == "top") {
        if (arr[size - 1])cout << arr[size - 1] << "\n";
        else cout << -1 << "\n";
    }
return size; }
