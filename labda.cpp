#include <iostream>
#include <windows.h> // A kurzor pozícionálásához és késleltetéshez
using namespace std;

// Függvény a kurzor mozgatásához (hogy ne kelljen törölni a teljes képernyőt)
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    // Pálya méretei
    const int szelesseg = 40;
    const int magassag = 20;

    // Kezdőpozíció és sebesség
    int x = 5, y = 5;
    int dx = 1, dy = 1;



    while (true) {
        // Előző pozíció törlése (szóköz beírása)
        gotoxy(x, y);
        cout << " ";

        // Pozíció frissítése
        x += dx;
        y += dy;

        // Ütközés a szélekkel (X tengely)
        if (x <= 0 || x >= szelesseg - 1) {
            dx *= -1;
        }

        // Ütközés a szélekkel (Y tengely)
        if (y <= 0 || y >= magassag - 1) {
            dy *= -1;
        }

        // Új pozíció kirajzolása
        gotoxy(x, y);
        cout << "O";

        // Keret kirajzolása (csak jelzésértékkel az első körben érdemes fixen kitenni)
        // Rövid várakozás, hogy látható legyen a mozgás
        Sleep(50); 
    }

    return 0;
}