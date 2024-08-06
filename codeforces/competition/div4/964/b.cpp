#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int wins = 0;

        int games[4][4] = {
            {a1, a2, b1, b2},
            {a1, a2, b2, b1},
            {a2, a1, b1, b2},
            {a2, a1, b2, b1}
        };
        
        for (int i = 0; i < 4; i++) {
            int suneet = 0, slavic = 0;
            
            if (games[i][0] > games[i][2]) suneet++;
            else if (games[i][0] < games[i][2]) slavic++;
            
            if (games[i][1] > games[i][3]) suneet++;
            else if (games[i][1] < games[i][3]) slavic++;
            
            if (suneet > slavic) wins++;
        }
        
        cout << wins << endl;

    }
    return 0;
}