// Modul 1 (Preprocessor Directives)
#include <iostream> 
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <limits>

// Modul 1 (Deklarasi Global)
using namespace std; 

// Modul 8 (Prosedur)
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Menampilkan status permainan
void displayGameState(const string& current_guess, int attempts_left) {
    cout << "\n=========================================\n";
    cout << "Kata saat ini: " << current_guess << endl;
    cout << "Kesempatan tersisa: " << attempts_left << endl;
    cout << "=========================================\n";
}

// Modul 2 (Pernyataan, Konstanta, Variabel, dan Tipe Data)
// Modul 4 (Operator & Seleksi)
// Modul 7 (Array)
void playGame() {
    char secret_word[50];
    string hint;
    const int max_attempts = 6;
    int attempts_left = max_attempts;
    string guessed_letters = "";
    string nama1, nama2;
