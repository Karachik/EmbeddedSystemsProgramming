//#include <stdio.h>
//#include <math.h>
//#include <algorithm>
//#include <iostream>
//
//using namespace std;
//
//int factorial(int n) {
//    if (n == 0) {
//        return 1;
//    } else {
//        return n * factorial(n - 1);
//    }
//}
//
//bool simple_number(int n) {
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
////    // #1, 2
////    int N;
////    float ans1, ans2;
////    printf("Введите целое чило N: ");
////    scanf("%d", &N);
////    for (int i = 1; i <= N; i++) {
////        ans1 += i / pow(2, i);
////        ans2 += (float) i / factorial(i);
////    }
////    printf("Ответ задачи #1 %f \n", ans1);
////    printf("Ответ задачи #2 %f \n", ans2);
//
////    // #1
////    int a, b, c;
////    scanf("%d %d", &a, &b);
////    printf("%d %d \n", a, b);
////    swap(a, b);
////    printf("%d %d \n", a, b);
////    c = a;
////    a = b;
////    b = c;
////    printf("%d %d \n", a, b);
//
////    // #2
////    int a, b;
////    scanf("%d%d", &a, &b);
////    printf("%f \n", sqrt(pow(a, 2) + pow(b, 2)));
//
////    // #3
////    int n;
////    cin >> n;
////    cout << n % 10;
//
////    // #4
////    int n;
////    cin >> n;
////    cout << (n % 100) / 10;
//
////    //# 5
////    int n;
////    cin >> n;
////    cout << n / 10;
//
////    // #6
////    int a, b;
////    scanf("%d%d", &a, &b);
////    printf("%f \n", double(a + b) / 2);
//
////    // #7
////    int a, b;
////    scanf("%d%d", &a, &b);
////    printf("%f \n", sqrt(a * b));
//
////    // #8
////    float x1, y1, x2, y2;
////    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
////    printf("%f \n", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
//
////    // #9
////    int a, b, c;
////    scanf("%d%d%d", &a, &b, &c);
////    if ((a > b && a < c) || (a < c && a > b)) {
////        printf("Среднее число: %d", a);
////    } else if ((b > a && b < c) || (b > c && b < a)) {
////        printf("Среднее число: %d", b);
////    } else {
////        printf("Среднее число: %d", c);
////    }
//
////    // 10
////    int a, b, c;
////    double d;
////    scanf("%d%d%d", &a, &b, &c);
////    d = pow(b, 2) - 4 * a * c;
////    if (d < 0) {
////        printf("Нет корней");
////    } else if (d == 0) {
////        printf("Корни уравнения совпадают: %f", (double) (-b / (2 * a)));
////    } else {
////        printf("Корни уравнения: %f и %f", (double) ((-b + sqrt(d)) / (2 * a)), (double) ((-b - sqrt(d)) / (2 *a)));
////    }
//
////    // 11
////    int x1, x2, x3;
////    scanf("%d%d%d", &x1, &x2, &x3);
////    printf("Наибольшее число: %d", max(x1, max(x2, x3)));
//
////    //12
////    int a, b, c;
////    scanf("%d%d%d", &a, &b, &c);
////    if ((a + b > c) && (a + c > b) && (b + c > a)){
////        if ((a == b) && (b == c)) {
////            printf("Треугольник равносторонний");
////        } else if ((a == b) || (a == c) || (b == c)) {
////            printf("Треугольник равнобедренный");
////        } else {
////            printf("Треугольник разносторонний");
////        }
////    } else {
////        printf("Треугольника не существует");
////    }
//
////    // 13
////    int x, y;
////    scanf("%d%d", &x, &y);
////    if (x > 0 && y > 0) {
////        printf("Точка лежит в 1ой плоскости");
////    } else if (x < 0 && y > 0) {
////        printf("Точка лежит во 2ой плоскости");
////    } else if (x < 0 && y < 0) {
////        printf("Точка лежит в 3ой плоскости");
////    } else if (x > 0 && y < 0) {
////        printf("Точка лежит в 4ой плоскости");
////    } else {
////        printf("Точка лежит на координатной оси");
////    }
//
////    // 14
////    int n, ans = 1;
////    cin >> n;
////    while (n > 1) {
////        ans *= n;
////        n -= 2;
////    }
////    printf("Двойной факториал заданного числа: %d", ans);
//
////    // 15
////    int n, ans = 1;
////    cin >> n;
////    for (int i = n % 2; i <= n; i += 2) {
////        if (i != 0) ans *= i;
////    }
////    printf("Двойной факториал заданного числа: %d", ans);
//
////    // 16
////    int a, b;
////    scanf("%d%d", &a, &b);
////    for (int i = a; i <= b; i++) {
////        if (simple_number(i)) {
////            printf("%d ", i);
////        }
////    }
//
////    // 17
////    int x, su = 0;
////    cin >> x;
////    printf("Последовательность ");
////    while (x != -9999) {
////        printf("%d ", x);
////        su += x;
////        cin >> x;
////    }
////    printf("\nСумма последовательности: %d", su);
//
////    // 18
////    int x;
////    cin >> x;
////    int ma = x, mi = x;
////    while (x != 0) {
////        if (x > ma) {
////            ma = x;
////        } else if (x < mi) {
////            mi = x;
////        }
////        cin >> x;
////    }
////    printf("Максимум: %d\nМинимум: %d", ma, mi);
//
////    // 19
////    int N;
////    cin >> N;
////    for (int i = 1; i <= N; i++) {
////        cout << pow(i, 2) << " ";
////    }
//
////    // 20
////    int N;
////    cin >> N;
////    while (abs(N) != 1 || N != 0) {
////        if (N % 22 == 0) {
////            N /= 22;
////        } else {
////            break;
////        }
////    }
////    if (abs(N) == 1) {
////        printf("Число N является степенью числа 22");
////    } else {
////        printf("Число N не является степенью числа 22");
////    }
//
////    // 21
////    int N;
////    cin >> N;
////    while (N > 0) {
////        cout << N % 10;
////        N /= 10;
////    }
//
////    // 22
////    int a, b, c;
////    cin >> a >> b;
////    if (a < b) {
////        swap(a, b);
////    }
////    while (a % b != 0) {
////        c = a % b;
////        a = b;
////        b = c;
////    }
////    printf("НОД = %d", b);
//
////    // 23
////    int n;
////    cin >> n;
////    switch(n) {
////        case 1:
////            printf("плохо");
////            break;
////        case 2:
////            printf("неудовлетворительно");
////            break;
////        case 3:
////            printf("удовлетворительно");
////            break;
////        case 4:
////            printf("хорошо");
////            break;
////        case 5:
////            printf("отлично");
////            break;
////        default:
////            printf("неизвестная оценка");
////    }
//
////    // 24
////    int x1, y1, z1, x2, y2, z2;
////    scanf("%d%d%d%d%d%d", &x1, &y1, &z1, &x2, &y2, &z2);
////    double len1, len2, skalar_prod, cx, cy, cz, c1, c2;
////    len1 = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2)); // 1
////    printf("Длина вектора 1 = %f\n", len1);
////    skalar_prod = x1 * x2 + y1 * y2 + z1 * z2; // 2
////    printf("Скалярное произведение векторов = %d\n", skalar_prod);
////    cx = y1 * z2 - z1 * y2; // 4
////    cy = z1 * x2 - x1 * z2;
////    cz = x1 * y2 - y1 * z2;
////    printf("Векторное произведение между векторами равно вектору c={%d, %d, %d}", cx, cy, cz);
//}