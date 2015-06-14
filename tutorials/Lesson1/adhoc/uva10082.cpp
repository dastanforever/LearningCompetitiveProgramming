#include <iostream>
#include <string>
 
using namespace std;
 
string line = "";
char keymapping[300];
 
int main() {
    for(int i = 0; i < 300; i++)
        keymapping[i] = i;
    // remap
    keymapping['1'] = '`';
    keymapping['2'] = '1';
    keymapping['3'] = '2';
    keymapping['4'] = '3';
    keymapping['5'] = '4';
    keymapping['6'] = '5';
    keymapping['7'] = '6';
    keymapping['8'] = '7';
    keymapping['9'] = '8';
    keymapping['0'] = '9';
    keymapping['-'] = '0';
    keymapping['='] = '-';
    keymapping['W'] = 'Q';
    keymapping['E'] = 'W';
    keymapping['R'] = 'E';
    keymapping['T'] = 'R';
    keymapping['Y'] = 'T';
    keymapping['U'] = 'Y';
    keymapping['I'] = 'U';
    keymapping['O'] = 'I';
    keymapping['P'] = 'O';
    keymapping['['] = 'P';
    keymapping[']'] = '[';
    keymapping['\\'] = ']';
    keymapping['S'] = 'A';
    keymapping['D'] = 'S';
    keymapping['F'] = 'D';
    keymapping['G'] = 'F';
    keymapping['H'] = 'G';
    keymapping['J'] = 'H';
    keymapping['K'] = 'J';
    keymapping['L'] = 'K';
    keymapping[';'] = 'L';
    keymapping['\''] = ';';
    keymapping['X'] = 'Z';
    keymapping['C'] = 'X';
    keymapping['V'] = 'C';
    keymapping['B'] = 'V';
    keymapping['N'] = 'B';
    keymapping['M'] = 'N';
    keymapping[','] = 'M';
    keymapping['.'] = ',';
    keymapping['/'] = '.';
 
    while(getline(cin, line)) {
        for(int i = 0; i < line.length(); i++) {
            line[i] = keymapping[line[i]];
        }
        cout << line << endl;
    }
}