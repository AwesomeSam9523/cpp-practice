#include <iostream>
using namespace std;

int runMove(int position, int direction, int maxPlayers) {
    // returns back the new postion
    if (direction == -1) {
        // we are going in reverse
        if (position == 0)
            position = maxPlayers;
        else
            position--;
    } else {
        if (position == maxPlayers)
            position = 0;
        else
            position++;
    }
    return position;
}

void runTestCase() {
    int n, k;
    cin >> n >> k;
    char *cards = new char[k];
    for (int i = 0; i < k; i++) {
        cin >> cards[i];
    }
    int *players = new int[n];
    for (int i = 0; i < n; i++) {
        players[i] = i;
    }

    int position = 0;
    int direction = 1;
    for (int i = 0; i < k; i++) {
        char move = cards[i];
        // cout << "move: " << move << " pos: " << position;
        switch (move)
        {
        case 'U':
            position = runMove(position, direction, n-1);
            break;
        
        case 'S':
            position = runMove(position, direction, n-1);
            position = runMove(position, direction, n-1);
            break;

        case 'R':
            direction *= -1;
            position = runMove(position, direction, n-1);
            break;
        }
        // cout << " new pos: " << position << endl;
    }
    cout << position+1 << endl;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) runTestCase();
    return 0;
}
