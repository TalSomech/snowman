

#include "snowman.hpp"
#include <array>
#include <iostream>
#include <stdexcept>
//using namespace std;

namespace ariel {
    std::string snowman(int key) {
        std::array<int,8> inp = {};
        std::string ans;
        for (int i = 0; i < 8; i++) {
            inp[i] = key % 10;
            key = key / 10;
        }
        switch (inp[7]) {
            case 1:
                ans += " _===_\n";
                break;
            case 2:
                ans += "  ___ \n"
                       " .....\n";
                break;
            case 3:
                ans += "   _  \n"
                       "  /_\\ \n";
                break;
            case 4:
                ans += "  ___ \n"
                       " (_*_)\n";
                break;
        }
        char body[8][2] = {};
        body[7][0] = body[7][1] = '\n';
        body[1][0] = body[1][1] = '(';
        body[5][0] = body[5][1] = ')';
        switch (inp[6]) {
            case 1:
                body[3][0] = ',';
                break;
            case 2:
                body[3][0] = '.';
                break;
            case 3:
                body[3][0] = '_';
                break;
            case 4:
                body[3][0] = ' ';
                break;
        }//nose
        switch (inp[5]) {
            case 1:
                body[2][0] = '.';
                break;
            case 2:
                body[2][0] = 'o';
                break;
            case 3:
                body[2][0] = '0';
                break;
            case 4:
                body[2][0] = '-';
                break;
        }//left eye
        switch (inp[4]) {
            case 1:
                body[4][0] = '.';
                break;

            case 2:
                body[4][0] = 'o';
                break;

            case 3:
                body[4][0] = '0';
                break;
            case 4:
                body[4][0] = '-';
                break;

        }// right eye
        switch (inp[3]) {
            case 1:
                body[0][1] = '<';
                body[0][0] = ' ';
                break;
            case 2:
                body[0][0] = '\\';
                body[0][1] = ' ';
                break;
            case 3:
                body[0][1] = '/';
                body[0][0] = ' ';
                break;
            case 4:
                body[0][0] = ' ';
                body[0][1] = ' ';
                break;
        }
        switch (inp[2]) {
            case 1:
                body[6][1] = '>';
                body[6][0] = ' ';
                break;
            case 2:
                body[6][0] = '/';
                body[6][1] = ' ';
                break;
            case 3:
                body[6][1] = '\\';
                body[6][0] = ' ';
                break;
            case 4:
                body[6][0] = ' ';
                body[6][1] = ' ';
                break;
        }
        switch (inp[1]) {
            case 1:
                body[3][1] = ':';
                body[2][1] = ' ';
                body[4][1] = ' ';
                break;
            case 2:
                body[3][1] = ' ';
                body[2][1] = ']';
                body[4][1] = '[';
                break;
            case 3:
                body[3][1] = ' ';
                body[2][1] = '>';
                body[4][1] = '<';
                break;
            case 4:
                body[3][1] = ' ';
                body[2][1] = ' ';
                body[4][1] = ' ';
                break;
        }
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 8; j++)
                ans += body[j][i];
        }
        switch (inp[0]) {
            case 1:
                ans += " ( : ) \n";
                break;
            case 2:
                ans += " (\" \") \n";
                break;
            case 3:
                ans += " (___) \n";
                break;
            case 4:
                ans += " (   ) \n";
                break;
        }
        return ans;
    }

};