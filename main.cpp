
#include <iostream>
using namespace std;

void GetCoded (char* str, int number) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = ' ';
        } else {
            if (str[i] + number > 122) {
                str[i] = str[i] - 26 + number;
            } else {
                if (str[i] < 97 && str[i] + number > 90) {
                    str[i] = str[i] + number - 26;
                } else {
                    str[i] = str[i] + number;
                }
            }
        }
        i++;
    }
}

void GetDecoded (char* str, int number) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = ' ';
        }
        else {
            if (str[i] - number < 97 && str[i] > 96) {
                str[i] = str[i] + 26 - number;
            } else {
                if (str[i] < 97 && str[i] - number < 65) {
                    str[i] = str[i] - number + 26;
                } else {
                    str[i] = str[i] - number;
                }
            }
        }
        i++;
    }
}

int main()
{
    const int N = 100;
    setlocale(LC_ALL, "Russian");
    int number = 0;
    char* str;

    cout<<"Введите сообщение на английском"<<endl;
    cin.getline(str, N);
    cout <<"Введите количество сдвигов"<<endl;
    cin >> number;
    GetCoded(str, number);
    cout << str<< endl;
    GetDecoded (str, number);
    cout << str;
    return 0;
}
