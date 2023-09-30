//
// Created by Kirill Kiselev on 18.09.2023.
//

#include <iostream>
#include <stdio.h>

using namespace std;

#define MAXLINE 1000 // Максимальный размер строки

int getline(char line[], int max);

int strindex(char source[], char searchfor[0]);

char pattern[] = "ouid";

int power(int base, int n) {
    int p;
    p = 1;
    for (int i = 1; i <= n; i++) {
        p *= base;
    }
    return p;
}

int getline(char s[], int lim) {
    int c, i;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[]) {
    int k;
    for (int i = 0; s[i] != '\0'; i++) {
        for (int j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
            if (k > 0 && t[k] == '\0') {
                return i;
            }
        }
    }
    return -1;
}

int factorial(int n) {
    if (n == 1) {
        return n;
    } else {
        return n * factorial(n - 1);
    }
}

int** ones_matrix(int n) {
    static int** m = new int* [n];
    for (int i = 0; i < n; i++) {
        m[i] = new int [n];
        for (int j = 0; j < n; j++) {
            m[i][j] = 1;
        }
    }
    return m;
}

int main() {
//    int c, nwhite, nother;
//    int ndigit[10];
//    nwhite = nother = 0;
//    for (int i = 0; i < 10; i++) {
//        ndigit[i] = 0;
//    }
//    while ((c = getchar()) != EOF) {
//        if (c >= '0' && c <= '9') {
//            ndigit[c - '0']++;
//        } else if (c == ' ' || c == '\n' || c == '\t') {
//            nwhite++;
//        } else {
//            nother++;
//        }
//    }
//    printf("Цифры=");
//    for (int i=0; i<10; i++) {
//        printf("%d ", ndigit[i]);
//    }
//    printf(", пробельные символы = %d, остальные символы = %d ", nwhite, nother);

//    printf("%d", power(2, 10));

//    char line[MAXLINE];
//    int found = 0;
//    while (getline(line, MAXLINE) > 0) {
//        if (strindex(line, pattern) >= 0){
//            printf("%s", line);
//            found++;
//        }
//    }
//    return found;

//    printf("%d", factorial(5));

    // 1
    int n;
    cin >> n;
    int m[n][n];
    int **Mass = ones_matrix(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", Mass[i][j]);
        }
        printf("\n");
    }
}

