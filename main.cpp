
#include <iostream>

void Coding (char *str, int number, char *secstr,int a){
    if (str[a] != ' '){
        if ((static_cast<int>(str[a])+ number) > (122)) {
            secstr[a] = static_cast<char>(str[a] + number - 26);
            std::cout << secstr[a];
        }
        else {
            secstr[a] = static_cast<char>(str[a] + number);
            std::cout << secstr[a];
        }
        }
    else {
        secstr[a] = ' ';
        std::cout << secstr[a];
    }
}

void DeCoding (char *secstr, int a, int number){
    a = 0;
    std::cout << "Decoded: " << std::endl;
    while (secstr[a] != '\0'){
        if (secstr[a] != ' '){
            if ((static_cast<int>(secstr[a]) - number) < (97)) {
                std::cout<< static_cast<char>(secstr[a] - number + 26);
            }
            else {
                std::cout <<static_cast<char>(secstr[a] - number);
            }
        }
        else {
            std::cout << " ";

        }
        a++;
    }
}


int main() {
    using namespace std;
    int a = 0;
    const int n = 500;
    char *str = new char[n];
    char *secstr = new char[n];
    int number = 0;

    cout << "Write any word on english" << endl;
    cin.getline(str,n);
    cout << "Write a number of moves" << endl;
    cin >> number;

    cout << "Coded: " << endl;
    while (str[a] != '\0') {
        if (str[a] != ' ') {
            Coding (str, number, secstr, a);
        }
        else{
         secstr[a] = ' ';
        }
        a++;
    }
    secstr[a] = '\0';
    cout << "" << endl;
    DeCoding (secstr, a, number);
}
