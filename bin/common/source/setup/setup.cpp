#include <iostream>
#include <thread>
using namespace std;

void drawProgressBar(int percent) {
    string bar;
    for (int i = 0; i < 50; i++) {
        if (i < (percent/2)) {
            bar.replace(i,1,"=");
        } else {
            bar.replace(i,1," ");
        }
    }
    cout << "\r" "[" << bar << "] " << percent << "%";
}

int main() {
    cout << "The MiniPE installation script will be executed right now, please be patient.\n\n";
    for (int i = 0; i <= 100; i++) {
        drawProgressBar(i);
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    cout << endl;
    return 0;
}
