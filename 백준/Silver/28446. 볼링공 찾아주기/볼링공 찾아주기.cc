#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    map<int, int> balls;
    int num, weight;
    int M; cin >> M;
    for (int i = 0; i < M; i++) {
        int request; cin >> request;
        if (request == 1) { cin >> num >> weight;
            balls[weight] = num;
        } else if (request == 2) { cin >> weight;
            cout << balls[weight] << '\n';
        }
    }
return 0; }
