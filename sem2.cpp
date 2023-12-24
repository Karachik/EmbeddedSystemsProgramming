////
//// Created by Kirill Kiselev on 18.09.2023.
////
//
//#include <iostream>
//#include <stdio.h>
//#include <time.h>
//#include <algorithm>
//#include <vector>
//#include <stdlib.h>
//#include <cmath>
//
//using namespace std;
//
//#define MAXLINE 1000 // Максимальный размер строки
//
//int getline(char line[], int max);
//
//int strindex(char source[], char searchfor[0]);
//
//char pattern[] = "ouid";
//
//int power(int base, int n) {
//    int p;
//    p = 1;
//    for (int i = 1; i <= n; i++) {
//        p *= base;
//    }
//    return p;
//}
//
//int getline(char s[], int lim) {
//    int c, i;
//    while (--lim > 0 && (c = getchar()) != EOF && c != '\n') {
//        s[i++] = c;
//    }
//    if (c == '\n') {
//        s[i++] = c;
//    }
//    s[i] = '\0';
//    return i;
//}
//
//int strindex(char s[], char t[]) {
//    int k;
//    for (int i = 0; s[i] != '\0'; i++) {
//        for (int j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
//            if (k > 0 && t[k] == '\0') {
//                return i;
//            }
//        }
//    }
//    return -1;
//}
//
//int factorial(int n) {
//    if (n == 1) {
//        return n;
//    } else {
//        return n * factorial(n - 1);
//    }
//}
//
//int **ones_matrix(int n) {
//    static int **m = new int *[n];
//    for (int i = 0; i < n; i++) {
//        m[i] = new int[n];
//        for (int j = 0; j < n; j++) {
//            m[i][j] = 1;
//        }
//    }
//    return m;
//}
//
//void from_one_to_n(int n, int cur) {
//    if (cur == n) {
//        printf("%d ", n);
//        return;
//    } else {
//        printf("%d ", cur);
//        from_one_to_n(n, cur + 1);
//    }
//}
//
//bool simple_search_in_massive(vector<int> m, int len, int n) {
//    for (int i = 0; i < len; i++) {
//        if (m[i] == n) {
//            return true;
//        }
//    }
//    return false;
//}
//
//bool bin_search_in_massive(vector<int> m, int n, int left, int right) {
//    if (left >= right) {
//        return false;
//    }
//    int mid = (right + left) / 2;
//
//    if (m[mid] == n) {
//        return true;
//    } else if (m[mid] > n) {
//        return bin_search_in_massive(m, n, left, mid - 1);
//    } else {
//        return bin_search_in_massive(m, n, mid + 1, right);
//    }
//}
//
//vector<vector<int>> sum_dif_matrix(vector<vector<int>> m1, vector<vector<int>> m2, char sign) {
//    vector<vector<int>> ans;
//    if (m1.size() != m2.size() && m1[0].size() != m2[0].size()) {
//        cout << "Матрицы разных размеров";
//        return ans;
//    }
//    ans.resize(m1.size(), vector<int>(m1[0].size()));
//    if (sign == '-') {
//        for (int i = 0; i < m1.size(); i++) {
//            for (int j = 0; j < m1[0].size(); j++) {
//                ans[i][j] = m1[i][j] - m2[i][j];
//            }
//        }
//    } else {
//        for (int i = 0; i < m1.size(); i++) {
//            for (int j = 0; j < m1[0].size(); j++) {
//                ans[i][j] = m1[i][j] + m2[i][j];
//            }
//        }
//    }
//    return ans;
//}
//
//vector<vector<int>> prod_matrix_by_num(vector<vector<int>> m1, int num) {
//    vector<vector<int>> ans(m1.size(), vector<int>(m1[0].size()));
//    for (int i = 0; i < m1.size(); i++) {
//        for (int j = 0; j < m1[0].size(); j++) {
//            ans[i][j] = m1[i][j] * num;
//        }
//    }
//    return ans;
//}
//
//vector<vector<int>> prod_matrix_by_matrix(vector<vector<int>> m1, vector<vector<int>> m2) {
//    vector<vector<int>> ans;
//    if (m1[0].size() != m2.size()) {
//        cout << "Умножение матриц не возможно (неправильные размерности)";
//        return ans;
//    }
//    ans.resize(m1.size(), vector<int>(m2[0].size()));
//    for (int i = 0; i < m1.size(); i++) {
//        for (int j = 0; j < m2[0].size(); j++) {
//            int elem = 0;
//            for (int t = 0; t < m1[0].size(); t++) {
//                ans[i][j] += m1[i][t] * m2[t][j];
//            }
//        }
//    }
//    return ans;
//}
//
//vector<vector<int>> matrix_transpose(vector<vector<int>> m) {
//    vector<vector<int>> ans(m[0].size(), vector<int>(m.size()));
//    for (int i = 0; i < m.size(); i++) {
//        for (int j = 0; j < m[0].size(); j++) {
//            ans[j][i] = m[i][j];
//        }
//    }
//    return ans;
//}
//
//bool matrix_equality(vector<vector<int>> m1, vector<vector<int>> m2) {
//    if (m1.size() != m2.size() && m1[0].size() != m2[0].size()) {
//        return false;
//    }
//    for (int i = 0; i < m1.size(); i++) {
//        for (int j = 0; j < m1[0].size(); j++) {
//            if (m1[i][j] != m2[i][j]) {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//vector<int> sorted_numbers(vector<int> nums, bool way) {
//    if (way) {
//        sort(nums.begin(), nums.end());
//    } else {
//        sort(nums.rbegin(), nums.rend());
//    }
//    return nums;
//}
//
//double equation(double x) {
//    return cos(pow(x, 5)) + pow(x, 4) - 345.3 * x - 23;
//}
//
//double solve_equation(double l, double r, double epsilon) {
//    double mid = (r + l) / 2;
//    if (abs(equation(mid)) < epsilon) {
//        return mid;
//    }
//    if (equation(mid) * equation(l) < 0) {
//        return solve_equation(l, mid, epsilon);
//    } else {
//        return solve_equation(mid, r, epsilon);
//    }
//}
//
//int main() {
////    int c, nwhite, nother;
////    int ndigit[10];
////    nwhite = nother = 0;
////    for (int i = 0; i < 10; i++) {
////        ndigit[i] = 0;
////    }
////    while ((c = getchar()) != EOF) {
////        if (c >= '0' && c <= '9') {
////            ndigit[c - '0']++;
////        } else if (c == ' ' || c == '\n' || c == '\t') {
////            nwhite++;
////        } else {
////            nother++;
////        }
////    }
////    printf("Цифры=");
////    for (int i=0; i<10; i++) {
////        printf("%d ", ndigit[i]);
////    }
////    printf(", пробельные символы = %d, остальные символы = %d ", nwhite, nother);
//
////    printf("%d", power(2, 10));
//
////    char line[MAXLINE];
////    int found = 0;
////    while (getline(line, MAXLINE) > 0) {
////        if (strindex(line, pattern) >= 0){
////            printf("%s", line);
////            found++;
////        }
////    }
////    return found;
//
////    printf("%d", factorial(5));
//
////    // 1
////    int n;
////    cin >> n;
////    int m[n][n];
////    int **Mass = ones_matrix(n);
////    for (int i = 0; i < n; i++) {
////        for (int j = 0; j < n; j++) {
////            printf("%d ", Mass[i][j]);
////        }
////        printf("\n");
////    }
//
////    // 2
////    vector<vector<int>> m1, m2, ans;
////    int row, col;
////    cin >> row >> col;
////    m1.resize(row, vector<int>(col));
////    m2.resize(row, vector<int>(col));
////    for (int i = 0; i < row; i++) {
////        for (int j = 0; j < col; j++) {
////            // ввод данных поочередно в каждый массив по элементу
////            cin >> m1[i][j];
////            cin >> m2[i][j]; // для сложения и вычитания если равные размерности
////        }
////    }
////    // 1 Сложение и вычитание
////    char sign;
////    cin >> sign;
////    ans = sum_dif_matrix(m1, m2, sign);
////    // 2 Усножение на число
////    int num;
////    cin >> num;
////    ans = prod_matrix_by_num(m1, num);
////    // 3 Усножение на матрицу
////    ans = prod_matrix_by_matrix(m1, m2);
////    // 4 Транспонирование матрицы
////    ans = matrix_transpose(m1);
////    // 5 Равенство матриц
////    cout << matrix_equality(m1, m2);
////    for (int i = 0; i < ans.size(); i++) {
////        for (int j = 0; j < ans[0].size(); j++) {
////            cout << ans[i][j] << " ";
////        }
////        cout << "\n";
////    }
//
////    // 3
////    vector<int> nums(10);
////    bool sort_way = false;
////    for (int i = 0; i < nums.size(); i++) {
////        nums[i] = rand() % nums.size();
////        cout << nums[i] << " ";
////    }
////    cout << "\n";
////    nums = sorted_numbers(nums, sort_way);
////    for (int i = 0; i < nums.size(); i++) {
////        cout << nums[i] << " ";
////    }
//
////    // 4
////    int n;
////    cin >> n;
////    from_one_to_n(n, 1);
//
////    // 5
////    int num, size, ans;
////    vector<int> m;
////    clock_t start, end;
////
////    cin >> num;
////    size = 1000000;
////    m.resize(size);
////    for (int i = 0; i < size; i++) {
////        m[i] = rand() % size;
////    }
////    start = clock();
////    ans = simple_search_in_massive(m, size, num);
////    printf("Simple result = %d\n", ans);
////    end = clock();
////    printf("time: %f\n", ((double) end - start) / CLOCKS_PER_SEC);
////
////    sort(m.begin(), m.end());
////    cout << "\n";
////
////    start = clock();
////    ans = bin_search_in_massive(m, num, 0, size - 1);
////    printf("Binary result = %d\n", ans);
////    end = clock();
////    printf("time: %f\n", ((double) end - start) / CLOCKS_PER_SEC);
//
////    // 6
////    cout << solve_equation(0, 10, 0.001);
//
////    // 7
////    vector<int> lst(100);
////    double mid = 0;
////    for (int i = 0; i < 100; i++) {
////        lst[i] = rand() % 1000;
////        mid += lst[i];
////    }
////    mid = mid / 100;
////    double res = abs(mid - lst[0]);
////    int ans = lst[0];
////    for (int i = 0; i < 100; i++) {
////        if (abs(mid - lst[i]) < res) {
////            res = mid - lst[i];
////            ans = lst[i];
////        }
////    }
////    cout << "\n" << ans;
//
////    // 8
////    vector<int> lst(100);
////    for (int i = 0; i < 100; i++) {
////        lst[i] = rand() % 1000;
////    }
////    sort(lst.begin(), lst.end());
////    for (int i = 0; i < lst.size() - 1; i++) {
////        if (lst[i] == lst[i + 1]) {
////            cout << "Есть одинаковые элементы";
////            exit(0);
////        }
////    }
////    cout << "Нет одинаковых элементов";
//
////    // 9
////    vector<int> lst(100);
////    for (int i = 0; i < 100; i++) {
////        lst[i] = rand() % 1000;
////    }
////    sort(lst.begin(), lst.end());
////    int i = 0, cnt = 0;
////    while (i < lst.size()) {
////        if (lst[i] == lst[i + 1]) {
////            cnt += 1;
////            i++;
////            while (lst[i] == lst[i + 1]) {
////                i++;
////            }
////        } else {
////            i++;
////        }
////    }
////    cout << cnt;
//
////    // 10
////    vector<int> lst(10);
////    int ma_index = 0;
////    for (int i = 0; i < 10; i++) {
////        cin >> lst[i];
////        if (abs(lst[i]) > abs(lst[ma_index])) {
////            ma_index = i;
////        }
////    }
////    lst[ma_index] = -lst[ma_index];
//
////    // 11
////    vector<int> lst1(20);
////    vector<int> lst2(10);
////    vector<int> ans;
////    for (int i = 0; i < lst1.size(); i++) {
////        cin >> lst1[i];
////    }
////    for (int j = 0; j < lst2.size(); j++) {
////        cin >> lst2[j];
////    }
////    sort(lst1.begin(), lst1.end());
////    sort(lst2.begin(), lst2.end());
////    int i = 0, j = 0;
////    while (i < lst1.size() && j < lst2.size()) {
////        if (lst1[i] <= lst2[j]) {
////            ans.push_back(lst1[i]);
////            i++;
////        } else {
////            ans.push_back(lst2[j]);
////            j++;
////        }
////    }
////    while (i < lst1.size()) {
////        ans.push_back(lst1[i]);
////        i++;
////    }
////    while (j < lst2.size()) {
////        ans.push_back(lst2[j]);
////        j++;
////    }
////    for (int k = 0; k < ans.size(); k++) {
////        cout << ans[k] << " ";
////    }
//
////    // 12
////    vector<int> lst(10);
////    for (int i = 0; i < lst.size(); i++) {
////        lst[i] = rand() % 100;
////        cout << lst[i] << " ";
////    }
////    cout << "\n";
////
////    for (int i = lst.size() - 1; i > -1; i--) {
////        int ma_index = i;
////        for (int j = i - 1; j > -1; j--) {
////            if (lst[j] > lst[ma_index]) {
////                ma_index = j;
////            }
////        }
////        swap(lst[ma_index], lst[i]);
////    }
////
////    for (int i = 0; i < lst.size(); i++) {
////        cout << lst[i] << " ";
////    }
//
////    // 13
////    vector<int> lst(10);
////    int mi = 101, ma = -1, su = 0, mi_index = -1, ma_index = -1;
////    for (int i = 0; i < lst.size(); i++) {
////        lst[i] = rand() % 100;
////        if (lst[i] < mi) {
////            mi = lst[i];
////            mi_index = i;
////        }
////        if (lst[i] > ma) {
////            ma = lst[i];
////            ma_index = i;
////        }
////    }
////    for (int i = min(ma_index, mi_index); i <= max(mi_index, ma_index); i++) {
////        su += lst[i];
////    }
////    cout << su;
//
////    // 14
////    vector<int> lst(10);
////    int ans = 0, prod = 1;
////    for (int i = 0; i < lst.size(); i++) {
////        cin >> lst[i];
////        prod *= lst[i];
////        ans += prod;
////        if (lst[i] < 0) {
////            break;
////        }
////    }
////    cout << ans;
//
////    // 15
////    vector<int> lst(10);
////    for (int i = 0; i < lst.size(); i++) {
////        cin >> lst[i];
////    }
////    int first = lst[0], second = lst[1];
////    for (int i = 0; i < lst.size() - 2; i++) {
////        lst[i] = lst[i + 2];
////    }
////    lst[lst.size() - 2] = first;
////    lst[lst.size() - 1] = second;
////    for (int i = 0; i < lst.size(); i++) {
////        cout << lst[i] << " ";
////    }
//}
//
//
