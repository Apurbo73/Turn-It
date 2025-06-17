#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int U, V, A, S;
        cin >> U >> V >> A >> S;


        int finalVelocitySquared = U * U - 2 * A * S;

        if (finalVelocitySquared <= V * V) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}