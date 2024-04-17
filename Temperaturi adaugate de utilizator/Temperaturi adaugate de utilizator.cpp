// Temperaturi adaugate de utilizator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include <iomanip>

int cnt = 0;
std::string luni = " Luni : ";
std::string marti = " Marti : ";
std::string miercuri = " Miercuri : ";
std::string joi = " Joi : ";
std::string vineri = " vineri : ";
std::string sambata = " Sambata : ";
std::string duminica = " Duminica : ";
std::string temp1 = "Temperatura 1 : ";
std::string temp2 = "Temperatura 2 : ";
char selector = 0;
double va1 = 0, va2 = 0;
double temperaturi[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
void page1();
void page2();
void spatii();

int main()
{
    page1();
    page2();

}
void page1() {
    if (cnt == 0) {
        int derulator = 0;
        double temp_temp = 0;
        spatii();
        std::cout << "Adaugati temperaturile\n\n";
        if (derulator == 0) {
            std::cout << luni << "\n";
            std::cout << temp1;
            std::cin >> temperaturi[0];
            std::cout << temp2;
            std::cin >> temperaturi[1];
            system("CLS");
            derulator = 1;
        }
        spatii();
        std::cout << "Adaugati temperaturile\n\n";
        if (derulator == 1) {
            std::cout << marti << "\n";
            std::cout << temp1;
            std::cin >> temperaturi[2];
            std::cout << temp2;
            std::cin >> temperaturi[3];
            system("CLS");
            derulator = 2;
        }
        spatii();
        std::cout << "Adaugati temperaturile\n\n";
        if (derulator == 2) {
            std::cout << miercuri << "\n";
            std::cout << temp1;
            std::cin >> temperaturi[4];
            std::cout << temp2;
            std::cin >> temperaturi[5];
            system("CLS");
            derulator = 3;
        }
        spatii();
        std::cout << "Adaugati temperaturile\n\n";
        if (derulator == 3) {
            std::cout << joi << "\n";
            std::cout << temp1;
            std::cin >> temperaturi[6];
            std::cout << temp2;
            std::cin >> temperaturi[7];
            system("CLS");
            derulator = 4;
        }
        spatii();
        std::cout << "Adaugati temperaturile\n\n";
        if (derulator == 4) {
            std::cout << vineri << "\n";
            std::cout << temp1;
            std::cin >> temperaturi[8];
            std::cout << temp2;
            std::cin >> temperaturi[9];
            system("CLS");
            derulator = 5;
        }
        spatii();
        std::cout << "Adaugati temperaturile\n\n";
        if (derulator == 5) {
            std::cout << sambata << "\n";
            std::cout << temp1;
            std::cin >> temperaturi[10];
            std::cout << temp2;
            std::cin >> temperaturi[11];
            system("CLS");
            derulator = 6;
        }
        spatii();
        std::cout << "Adaugati temperaturile\n\n";
        if (derulator == 6) {
            std::cout << duminica << "\n";
            std::cout << temp1;
            std::cin >> temperaturi[12];
            std::cout << temp2;
            std::cin >> temperaturi[13];
            system("CLS");
            cnt = 1;
            page2();
        }
    }
}


void page2() {
    if (cnt == 1) {
        char simbol = 0;
        spatii();
        for (int i = 0; i < 1; i++) {
            simbol = 201;
            std::cout << simbol;
            for (int a = 0; a < 34; a++) {
                simbol = 205;
                std::cout << simbol;
                if (a == 33) {
                    simbol = 187;
                    std::cout << simbol;
                }
            }
            for (int b = 0; b < 1; b++) {
                simbol = 186;
                std::cout << "\n";
                spatii();
                std::cout << simbol;
                spatii();
                std::cout << " Temperaturi  ";
                spatii();
                std::cout << simbol << "\n";
                spatii();
                simbol = 204;
                std::cout << simbol;
                for (int a = 0; a < 34; a++) {
                    simbol = 205;
                    std::cout << simbol;
                    if (a == 33) {
                        simbol = 185;
                        std::cout << simbol << "\n";
                    }
                }
            }
            // Afisare 1
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << "Temperaturile setate de noi  ";
            std::cout << "\n";
            spatii();
            simbol = 186;
            std::cout << simbol;
            for (int a = 0; a < 34; a++) {
                std::cout << " ";
            }
            std::cout << "\n";
            // Luni
            spatii();
            std::cout << simbol;
            std::cout << luni;
            for (int b = 0; b < 2; b++) {
                double temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 12; a++) {
                std::cout << " ";
                if (a == 11) {
                    std::cout << "\n";
                }
            }
            // Marti
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << marti;
            for (int b = 2; b < 4; b++) {
                double temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 11; a++) {
                std::cout << " ";
                if (a == 10) {
                    std::cout << "\n";
                }
            }
            // Miercuri
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << miercuri;
            for (int b = 4; b < 6; b++) {
                double temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 11; a++) {
                std::cout << " ";
                if (a == 10) {
                    std::cout << "\n";
                }
            }
            // Joi
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << joi;
            for (int b = 6; b < 8; b++) {
                double temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 13; a++) {
                std::cout << " ";
                if (a == 12) {
                    std::cout << "\n";
                }
            }
            // Vineri
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << vineri;
            for (int b = 8; b < 10; b++) {
                double temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 10; a++) {
                std::cout << " ";
                if (a == 9) {
                    std::cout << "\n";
                }
            }
            // Sambata
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << sambata;
            for (int b = 10; b < 12; b++) {
                double temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 9; a++) {
                std::cout << " ";
                if (a == 8) {
                    std::cout << "\n";
                }
            }
            // Duminica
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << duminica;
            for (int b = 12; b < 14; b++) {
                double temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 9; a++) {
                std::cout << " ";
                if (a == 8) {
                    std::cout << "\n";
                }
            }
            spatii();
            simbol = 204;
            std::cout << simbol;
            for (int a = 0; a < 34; a++) {
                simbol = 205;
                std::cout << simbol;
                if (a == 33) {
                    simbol = 185;
                    std::cout << simbol << "\n";
                }
            }
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << "Afisam temperaturile rotunjite";
            for (int a = 0; a < 4; a++) {
                std::cout << " ";
            }
            std::cout << "\n";
            spatii();
            std::cout << simbol;
            for (int a = 0; a < 34; a++) {
                std::cout << " ";
            }
            std::cout << "\n";
            // Afisare 2
            // Luni
            spatii();
            std::cout << simbol;
            std::cout << luni;
            for (int b = 0; b < 2; b++) {
                int temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 18; a++) {
                std::cout << " ";
                if (a == 17) {
                    std::cout << "\n";
                }
            }
            // Marti
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << marti;
            for (int b = 2; b < 4; b++) {
                int temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 17; a++) {
                std::cout << " ";
                if (a == 16) {
                    std::cout << "\n";
                }
            }
            // Miercuri
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << miercuri;
            for (int b = 4; b < 6; b++) {
                int temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 14; a++) {
                std::cout << " ";
                if (a == 13) {
                    std::cout << "\n";
                }
            }
            // Joi
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << joi;
            for (int b = 6; b < 8; b++) {
                int temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 19; a++) {
                std::cout << " ";
                if (a == 18) {
                    std::cout << "\n";
                }
            }
            // Vineri
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << vineri;
            for (int b = 8; b < 10; b++) {
                int temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 16; a++) {
                std::cout << " ";
                if (a == 15) {
                    std::cout << "\n";
                }
            }
            // Sambata
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << sambata;
            for (int b = 10; b < 12; b++) {
                int temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 15; a++) {
                std::cout << " ";
                if (a == 14) {
                    std::cout << "\n";
                }
            }
            // Duminica
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << duminica;
            for (int b = 12; b < 14; b++) {
                int temp = 0;
                temp += temperaturi[b];
                simbol = 248;
                std::cout << temp << simbol;
                std::cout << " ";
            }
            for (int a = 0; a < 14; a++) {
                std::cout << " ";
                if (a == 13) {
                    std::cout << "\n";
                }
            }
            spatii();
            simbol = 204;
            std::cout << simbol;
            for (int a = 0; a < 34; a++) {
                simbol = 205;
                std::cout << simbol;
                if (a == 33) {
                    simbol = 185;
                    std::cout << simbol << "\n";
                }
            }
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << "Media temperaturilor L - D   ";
            for (int a = 0; a < 5; a++) {
                std::cout << " ";
            }
            std::cout << "\n";
            spatii();
            std::cout << simbol;
            for (int b = 0; b < 34; b++) {
                std::cout << " ";
                if (b == 33) {
                    std::cout << "\n";
                    spatii();
                    std::cout << simbol;
                }
            }
            // Afisare 3
            // Luni
            std::cout << luni;
            double temp = 0;
            double rezultat1 = 0;
            for (int b = 0; b < 2; b++) {
                temp += temperaturi[b];
            }
            rezultat1 = temp / 2;
            std::cout << std::setprecision(4) << rezultat1;
            simbol = 248;
            std::cout << simbol;
            for (int a = 0; a < 20; a++) {
                std::cout << " ";
                if (a == 19) {
                    std::cout << "\n";
                }
            }
            // Marti
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << marti;
            temp = 0;
            rezultat1 = 0;
            for (int b = 2; b < 4; b++) {
                temp += temperaturi[b];
            }
            rezultat1 = temp / 2;
            std::cout << std::setprecision(4) << rezultat1;
            simbol = 248;
            std::cout << simbol;
            for (int a = 0; a < 19; a++) {
                std::cout << " ";
                if (a == 18) {

                    std::cout << "\n";
                }
            }
            // Miercuri
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << miercuri;
            temp = 0;
            rezultat1 = 0;
            for (int b = 4; b < 6; b++) {
                temp += temperaturi[b];
            }
            rezultat1 = temp / 2;
            std::cout << std::setprecision(4) << rezultat1;
            simbol = 248;
            std::cout << simbol;
            for (int a = 0; a < 16; a++) {
                std::cout << " ";
                if (a == 15) {

                    std::cout << "\n";
                }
            }
            // Joi
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << joi;
            temp = 0;
            rezultat1 = 0;
            for (int b = 6; b < 8; b++) {
                temp += temperaturi[b];
            }
            rezultat1 = temp / 2;
            std::cout << std::setprecision(4) << rezultat1;
            simbol = 248;
            std::cout << simbol;
            for (int a = 0; a < 21; a++) {
                std::cout << " ";
                if (a == 20) {
                    std::cout << "\n";
                }
            }
            // Vineri
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << vineri;
            temp = 0;
            rezultat1 = 0;
            for (int b = 8; b < 10; b++) {
                temp += temperaturi[b];
            }
            rezultat1 = temp / 2;
            std::cout << std::setprecision(4) << rezultat1;
            simbol = 248;
            std::cout << simbol;
            for (int a = 0; a < 18; a++) {
                std::cout << " ";
                if (a == 17) {

                    std::cout << "\n";
                }
            }
            // Sambata
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << sambata;
            temp = 0;
            rezultat1 = 0;
            for (int b = 10; b < 12; b++) {
                temp += temperaturi[b];
            }
            rezultat1 = temp / 2;
            std::cout << std::setprecision(4) << rezultat1;
            simbol = 248;
            std::cout << simbol;
            for (int a = 0; a < 17; a++) {
                std::cout << " ";
                if (a == 16) {

                    std::cout << "\n";
                }
            }
            // Duminica
            spatii();
            simbol = 186;
            std::cout << simbol;
            std::cout << duminica;
            temp = 0;
            rezultat1 = 0;
            for (int b = 12; b < 14; b++) {
                temp += temperaturi[b];
            }
            rezultat1 = temp / 2;
            std::cout << std::setprecision(4) << rezultat1;
            simbol = 248;
            std::cout << simbol;
            for (int a = 0; a < 16; a++) {
                std::cout << " ";
                if (a == 15) {

                    std::cout << "\n";
                }
            }
            spatii();
            simbol = 200;
            std::cout << simbol;
            for (int b = 0; b < 34; b++) {
                simbol = 205;
                std::cout << simbol;
                if (b == 33) {
                    simbol = 188;
                    std::cout << simbol << "\n";
                }
            }
            cnt = 3;
        }
    }
}

void spatii() {
    std::cout << "          ";
}