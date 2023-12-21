//// #1
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Matrix {
//private:
//    vector<vector<double>> data;
//    int rows;
//    int cols;
//
//public:
//    // Конструктор
//    Matrix(int rows, int cols) : rows(rows), cols(cols), data(rows, vector<double>(cols, 0.0)) {}
//
//    // Метод для получения транспонированной матрицы
//    Matrix transpose() const {
//        Matrix result(cols, rows);
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                result(j, i) = data[i][j];
//            }
//        }
//        return result;
//    }
//
//    // Метод для сложения матриц
//    Matrix operator+(const Matrix& other) const {
//        if (rows != other.rows || cols != other.cols) {
//            throw invalid_argument("Matrices must have the same dimensions for addition.");
//        }
//
//        Matrix result(rows, cols);
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                result(i, j) = data[i][j] + other(i, j);
//            }
//        }
//        return result;
//    }
//
//    // Метод для вычитания матриц
//    Matrix operator-(const Matrix& other) const {
//        if (rows != other.rows || cols != other.cols) {
//            throw invalid_argument("Matrices must have the same dimensions for subtraction.");
//        }
//
//        Matrix result(rows, cols);
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                result(i, j) = data[i][j] - other(i, j);
//            }
//        }
//        return result;
//    }
//
//    // Метод для умножения матрицы на число
//    Matrix operator*(double scalar) const {
//        Matrix result(rows, cols);
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                result(i, j) = data[i][j] * scalar;
//            }
//        }
//        return result;
//    }
//
//    // Метод для умножения двух матриц
//    Matrix operator*(const Matrix& other) const {
//        if (cols != other.rows) {
//            throw invalid_argument("Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.");
//        }
//
//        Matrix result(rows, other.cols);
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < other.cols; ++j) {
//                for (int k = 0; k < cols; ++k) {
//                    result(i, j) += data[i][k] * other(k, j);
//                }
//            }
//        }
//        return result;
//    }
//
//    // Метод для возведения матрицы в степень
//    Matrix power(int exponent) const {
//        if (exponent < 0) {
//            throw invalid_argument("Exponent must be non-negative.");
//        }
//
//        if (exponent == 0) {
//            // Возвращаем единичную матрицу
//            Matrix result(rows, cols);
//            for (int i = 0; i < rows; ++i) {
//                result(i, i) = 1.0;
//            }
//            return result;
//        }
//
//        Matrix result = *this;
//        for (int i = 1; i < exponent; ++i) {
//            result = result * (*this);
//        }
//        return result;
//    }
//
//    // Оператор для доступа к элементам матрицы
//    double& operator()(int row, int col) {
//        return data[row][col];
//    }
//
//    const double& operator()(int row, int col) const {
//        return data[row][col];
//    }
//
//    // Методы для получения числа строк и столбцов
//    int getRows() const {
//        return rows;
//    }
//
//    int getCols() const {
//        return cols;
//    }
//
//};
//
// // Пример использования
//int main() {
//    Matrix mat1(2, 3);
//    mat1(0, 0) = 1.0;
//    mat1(0, 1) = 2.0;
//    mat1(0, 2) = 3.0;
//    mat1(1, 0) = 4.0;
//    mat1(1, 1) = 5.0;
//    mat1(1, 2) = 6.0;
//
//    Matrix mat2(3, 2);
//    mat2(0, 0) = 7.0;
//    mat2(0, 1) = 8.0;
//    mat2(1, 0) = 9.0;
//    mat2(1, 1) = 10.0;
//    mat2(2, 0) = 11.0;
//    mat2(2, 1) = 12.0;
//
//    Matrix result = mat1 * mat2;
//
//    // Вывод результата
//    for (int i = 0; i < result.getRows(); ++i) {
//        for (int j = 0; j < result.getCols(); ++j) {
//            cout << result(i, j) << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//

//// #2
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//class Vector3D {
//private:
//    double x, y, z;
//
//public:
//    // Конструктор с параметрами
//    Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}
//
//    // Метод для вычисления длины вектора
//    double length() const {
//        return sqrt(x * x + y * y + z * z);
//    }
//
//    // Метод для вычисления скалярного произведения
//    double dotProduct(const Vector3D& other) const {
//        return x * other.x + y * other.y + z * other.z;
//    }
//
//    // Метод для вычисления векторного произведения
//    Vector3D crossProduct(const Vector3D& other) const {
//        return Vector3D(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x);
//    }
//
//    // Метод для вычисления угла между векторами (в радианах)
//    double angle(const Vector3D& other) const {
//        double dot = dotProduct(other);
//        double lengthProduct = length() * other.length();
//        return acos(dot / lengthProduct);
//    }
//
//    // Методы для суммы и разности
//    Vector3D operator+(const Vector3D& other) const {
//        return Vector3D(x + other.x, y + other.y, z + other.z);
//    }
//
//    Vector3D operator-(const Vector3D& other) const {
//        return Vector3D(x - other.x, y - other.y, z - other.z);
//    }
//
//    // Статический метод для создания массива случайных векторов размером N
//    static vector<Vector3D> generateRandomVectors(int N) {
//        vector<Vector3D> randomVectors;
//        srand(time(0));  // Инициализация генератора случайных чисел
//
//        for (int i = 0; i < N; ++i) {
//            double randX = static_cast<double>(rand()) / RAND_MAX;
//            double randY = static_cast<double>(rand()) / RAND_MAX;
//            double randZ = static_cast<double>(rand()) / RAND_MAX;
//            randomVectors.push_back(Vector3D(randX, randY, randZ));
//        }
//
//        return randomVectors;
//    }
//
//    // Возвращение нового объекта вместо изменения базового
//    Vector3D scalarMultiply(double scalar) const {
//        return Vector3D(x * scalar, y * scalar, z * scalar);
//    }
//
//    // Вывод вектора
//    void print() const {
//        cout << "(" << x << ", " << y << ", " << z << ")";
//    }
//};
//
// // Пример использования
//int main() {
//    Vector3D v1(1.0, 2.0, 3.0);
//    Vector3D v2(4.0, 5.0, 6.0);
//
//    // Вычисление длины вектора
//    cout << "Длина v1: " << v1.length() << endl;
//
//    // Вычисление скалярного произведения
//    cout << "Скалярное произведение v1 и v2: " << v1.dotProduct(v2) << endl;
//
//    // Вычисление векторного произведения
//    Vector3D v3 = v1.crossProduct(v2);
//    cout << "Векторное произведение v1 и v2: ";
//    v3.print();
//    cout << endl;
//
//    // Вычисление угла между векторами
//    cout << "Угол между v1 и v2: " << v1.angle(v2) << " радиан" << endl;
//
//    // Сумма и разность векторов
//    Vector3D sum = v1 + v2;
//    Vector3D diff = v1 - v2;
//
//    cout << "Сумма v1 и v2: ";
//    sum.print();
//    cout << endl;
//
//    cout << "Разность v1 и v2: ";
//    diff.print();
//    cout << endl;
//
//    // Создание массива случайных векторов
//    vector<Vector3D> randomVectors = Vector3D::generateRandomVectors(3);
//
//    cout << "Рандомные вектора:" << endl;
//    for (const Vector3D& v : randomVectors) {
//        v.print();
//        cout << endl;
//    }
//
//    return 0;
//}
//

////// #3
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Shape {
//public:
//    virtual ~Shape() {}
//    virtual double getVolume() const = 0; // виртуальный метод с ограничением на возможные переопределения
//};
//
//class Box {
//private:
//    double s, h;
//    vector<Shape*> shapes;
//
//public:
//    Box(double s, double h) : s(s), h(h) {}
//
//    void add(Shape* shape) {
//        double volume = 0;
//        for (auto& item : shapes) {
//            volume += item->getVolume();
//        }
//        if (volume + shape->getVolume() <= s * h) {
//            shapes.push_back(shape);
//        } else {
//            cout << "No space left in the box!" << endl;
//        }
//    }
//};
//
//class Pyramid : public Shape {
//private:
//    double s, h;
//
//public:
//    Pyramid(double s, double h) : s(s), h(h) {}
//
//    double getVolume() const override {
//        return (s * s * h) / 3;
//    }
//};
//
//class Ball : public Shape {
//private:
//    double radius;
//
//public:
//    Ball(double radius) : radius(radius) {}
//
//    double getVolume() const override {
//        return (4.0 / 3.0) * 3.14159265358979323846 * radius * radius * radius;
//    }
//};
//
//int main() {
//    Box box(10, 10);
//    Pyramid pyramid(5, 5);
//    Ball ball(2);
//
//    box.add(&pyramid);
//    box.add(&ball);
//
//    return 0;
//}
//

//// #4
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Shape {
//public:
//    virtual ~Shape() {}
//    virtual double getVolume() const = 0; // абстрактный метод с ограничением на возможные переопределения
//};
//
//class Box {
//private:
//    double s, h;
//    vector<Shape*> shapes;
//
//public:
//    Box(double s, double h) : s(s), h(h) {}
//
//    void add(Shape* shape) {
//        double volume = 0;
//        for (auto& item : shapes) {
//            volume += item->getVolume();
//        }
//        if (volume + shape->getVolume() <= s * h) {
//            shapes.push_back(shape);
//        } else {
//            cout << "No space left in the box!" << endl;
//        }
//    }
//};
//
//class Pyramid : public Shape {
//private:
//    double s, h;
//
//public:
//    Pyramid(double s, double h) : s(s), h(h) {}
//
//    double getVolume() const override {
//        return (s * s * h) / 3;
//    }
//};
//
//class Ball : public Shape {
//private:
//    double radius;
//
//public:
//    Ball(double radius) : radius(radius) {}
//
//    double getVolume() const override {
//        return (4.0 / 3.0) * 3.14159265358979323846 * radius * radius * radius;
//    }
//};
//
//int main() {
//    Box box(10, 10);
//    Pyramid pyramid(5, 5);
//    Ball ball(2);
//
//    box.add(&pyramid);
//    box.add(&ball);
//
//    return 0;
//}
//

//// #5
//#include <iostream>
//#include <vector>
//#include <random>
//#include <algorithm>
//
//using namespace std;
//
//class WeightedRandomPicker {
//private:
//    vector<int> values;
//    vector<int> weights;
//    mutable mt19937 generator;  // Изменено на mutable
//
//public:
//    // Конструктор с двумя массивами: значений и весов значений
//    WeightedRandomPicker(const vector<int>& values, const vector<int>& weights)
//            : values(values), weights(weights), generator(random_device{}()) {}
//
//    // Метод для выбора случайного элемента с учётом веса
//    int pickRandom() const {
//        // Проверка на пустоту массивов
//        if (values.empty() || weights.empty() || values.size() != weights.size()) {
//            throw invalid_argument("Invalid input arrays");
//        }
//
//        // Сумма всех весов
//        int totalWeight = accumulate(weights.begin(), weights.end(), 0);
//
//        // Генерация случайного числа в диапазоне от 1 до суммы весов
//        uniform_int_distribution<int> distribution(1, totalWeight);
//        int randomNumber = distribution(generator);
//
//        // Выбор элемента в соответствии с весами
//        int cumulativeWeight = 0;
//        for (size_t i = 0; i < values.size(); ++i) {
//            cumulativeWeight += weights[i];
//            if (randomNumber <= cumulativeWeight) {
//                return values[i];
//            }
//        }
//
//        // Недостижимый код (для избежания предупреждений компилятора)
//        return values.back();
//    }
//};
//
// // Пример использования
//int main() {
//    // Пример с массивами [1, 2, 3] и [1, 2, 10]
//    vector<int> values = {1, 2, 3};
//    vector<int> weights = {1, 2, 10};
//
//    WeightedRandomPicker picker(values, weights);
//
//    // Выбор случайного элемента с учётом веса
//    for (int i = 0; i < 10; ++i) {
//        cout << "Random pick: " << picker.pickRandom() << endl;
//    }
//
//    return 0;
//}
//

//// #6
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Tiles {
//public:
//    string brand;
//    double size_h;
//    double size_w;
//    double price;
//
//    // Метод для вывода данных
//    void getData() const {
//        cout << "Brand: " << brand << endl;
//        cout << "Size (height x width): " << size_h << " x " << size_w << endl;
//        cout << "Price: " << price << endl;
//    }
//};
//
//int main() {
//    // Создание объектов класса Tiles
//    Tiles tiles1;
//    Tiles tiles2;
//
//    // Внесение данных в поля объектов
//    tiles1.brand = "TileBrand1";
//    tiles1.size_h = 10.0;
//    tiles1.size_w = 5.0;
//    tiles1.price = 15.99;
//
//    tiles2.brand = "TileBrand2";
//    tiles2.size_h = 8.0;
//    tiles2.size_w = 6.0;
//    tiles2.price = 12.99;
//
//    // Вывод данных с использованием метода getData()
//    cout << "Tile 1:" << endl;
//    tiles1.getData();
//    cout << endl;
//
//    cout << "Tile 2:" << endl;
//    tiles2.getData();
//
//    return 0;
//}
//

//// #7
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Children {
//private:
//    string firstName;
//    string lastName;
//    int age;
//
//public:
//    // Метод для ввода данных о ребенке
//    void input() {
//        cout << "Enter the first name: ";
//        cin >> firstName;
//
//        cout << "Enter the last name: ";
//        cin >> lastName;
//
//        cout << "Enter the age: ";
//        cin >> age;
//    }
//
//    // Метод для отображения данных о ребенке
//    void display() const {
//        cout << "Child's Name: " << firstName << " " << lastName << endl;
//        cout << "Age: " << age << " years old" << endl;
//    }
//};
//
//int main() {
//    // Создание двух объектов класса Children
//    Children child1;
//    Children child2;
//
//    // Внесение данных о детях
//    cout << "Enter data for Child 1:" << endl;
//    child1.input();
//
//    cout << "\nEnter data for Child 2:" << endl;
//    child2.input();
//
//    // Отображение данных о детях
//    cout << "\nChild 1 Information:" << endl;
//    child1.display();
//
//    cout << "\nChild 2 Information:" << endl;
//    child2.display();
//
//    return 0;
//}
//

//// #8
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class ArrayTransformer {
//private:
//    vector<vector<int>> array;
//
//public:
//    // Метод для заполнения массива значениями
//    void fillArray(const vector<vector<int>>& values) {
//        array = values;
//    }
//
//    // Метод для замены значений строк на значения столбцов
//    void transformRowsToColumns() {
//        // Проверка на пустоту массива
//        if (array.empty() || array[0].empty()) {
//            cerr << "Error: Array is empty." << endl;
//            return;
//        }
//
//        // Создание нового массива для хранения значений столбцов
//        vector<vector<int>> resultArray(array[0].size(), vector<int>(array.size(), 0));
//
//        // Проход по оригинальному массиву и замена значений строк на значения столбцов
//        for (size_t i = 0; i < array.size(); ++i) {
//            for (size_t j = 0; j < array[i].size(); ++j) {
//                resultArray[j][i] = array[i][j];
//            }
//        }
//
//        // Присваивание нового массива оригинальному
//        array = resultArray;
//    }
//
//    // Метод для отображения массива
//    void displayArray() const {
//        for (const auto& row : array) {
//            for (int value : row) {
//                cout << value << ' ';
//            }
//            cout << endl;
//        }
//    }
//};
//
//int main() {
//    ArrayTransformer transformer;
//
//    // Пример заполнения массива и отображения исходного состояния
//    vector<vector<int>> values = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//    transformer.fillArray(values);
//
//    cout << "Начальный массив:" << endl;
//    transformer.displayArray();
//
//    // Произведение замены значений строк на значения столбцов
//    transformer.transformRowsToColumns();
//
//    // Отображение измененного состояния массива
//    cout << "\nМассив после преобразования строк в столбцы:" << endl;
//    transformer.displayArray();
//
//    return 0;
//}
//

//// #9
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//
// using namespace std;
//
//class Worker {
//protected:
//    int id;
//    string name;
//
//public:
//    Worker(int id, const string& name) : id(id), name(name) {}
//
//    virtual double calculateAverageMonthlySalary() const = 0;
//
//    virtual ~Worker() = default;
//
//    int getId() const {
//        return id;
//    }
//
//    const string& getName() const {
//        return name;
//    }
//};
//
//class HourlyWorker : public Worker {
//private:
//    double hourlyRate;
//
//public:
//    HourlyWorker(int id, const string& name, double hourlyRate)
//            : Worker(id, name), hourlyRate(hourlyRate) {}
//
//    double calculateAverageMonthlySalary() const override {
//        return 20.8 * 8 * hourlyRate;
//    }
//};
//
//class FixedWorker : public Worker {
//private:
//    double monthlySalary;
//
//public:
//    FixedWorker(int id, const string& name, double monthlySalary)
//            : Worker(id, name), monthlySalary(monthlySalary) {}
//
//    double calculateAverageMonthlySalary() const override {
//        return monthlySalary;
//    }
//};
//
// // Функция для сравнения работников по среднемесячной зарплате (убывание) и имени (возрастание)
//bool compareWorkers(const Worker* a, const Worker* b) {
//    if (a->calculateAverageMonthlySalary() > b->calculateAverageMonthlySalary())
//        return true;
//    else if (a->calculateAverageMonthlySalary() == b->calculateAverageMonthlySalary())
//        return a->getName() < b->getName();
//    else
//        return false;
//}
//
//int main() {
//    // Создаем объекты работников
//    HourlyWorker hourlyWorker1(1, "John", 15.0);
//    HourlyWorker hourlyWorker2(2, "Alice", 20.0);
//    FixedWorker fixedWorker1(3, "Bob", 3000.0);
//    FixedWorker fixedWorker2(4, "Eva", 2500.0);
//
//    // Создаем вектор указателей на объекты Worker
//    vector<Worker*> workers = {&hourlyWorker1, &hourlyWorker2, &fixedWorker1, &fixedWorker2};
//
//    // a) Упорядочиваем работников по среднемесячной зарплате и имени
//    sort(workers.begin(), workers.end(), compareWorkers);
//
//    // b) Выводим первые 5 имен работников
//    cout << "First 5 names of workers:" << endl;
//    for (size_t i = 0; i < min<size_t>(5, workers.size()); ++i) {
//        cout << workers[i]->getName() << endl;
//    }
//
//    // c) Выводим последние 3 идентификатора работников
//    cout << "\nLast 3 IDs of workers:" << endl;
//    for (size_t i = max(0, static_cast<int>(workers.size()) - 3); i < workers.size(); ++i) {
//        cout << workers[i]->getId() << endl;
//    }
//
//    // d) Записываем в файл
//    ofstream outFile("workers.txt");
//    if (outFile.is_open()) {
//        for (const auto& worker : workers) {
//            outFile << worker->getId() << " " << worker->getName() << " " << worker->calculateAverageMonthlySalary() << endl;
//        }
//        outFile.close();
//        cout << "\nData written to workers.txt." << endl;
//    } else {
//        cerr << "Unable to open the file for writing." << endl;
//    }
//
//    // e) Чтение из файла
//    vector<Worker*> loadedWorkers;
//    ifstream inFile("workers.txt");
//    if (inFile.is_open()) {
//        int loadedId;
//        string loadedName;
//        double loadedSalary;
//
//        while (inFile >> loadedId >> loadedName >> loadedSalary) {
//            Worker* worker = new FixedWorker(loadedId, loadedName, loadedSalary);
//            loadedWorkers.push_back(worker);
//        }
//
//        inFile.close();
//        cout << "\nData loaded from workers.txt." << endl;
//    } else {
//        cerr << "Unable to open the file for reading." << endl;
//    }
//
//    // Освобождение памяти для созданных объектов
//    for (auto& worker : loadedWorkers) {
//        delete worker;
//    }
//
//    return 0;
//}
// Файл workers.txt в папке cmake-build-debug

//// #10
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class TransportCard {
//protected:
//    string cardType;
//    double monthlyFee;
//    double balance;
//
//public:
//    TransportCard(const string& cardType, double monthlyFee)
//            : cardType(cardType), monthlyFee(monthlyFee), balance(0.0) {}
//
//    virtual void topUp(double amount) {
//        balance += amount;
//    }
//
//    virtual void deduct(double amount) {
//        balance -= amount;
//    }
//
//    virtual void makePayment() = 0;
//
//    virtual ~TransportCard() = default;
//
//    const string& getCardType() const {
//        return cardType;
//    }
//
//    double getBalance() const {
//        return balance;
//    }
//};
//
//class MonthlyCard : public TransportCard {
//public:
//    MonthlyCard(const string& cardType, double monthlyFee)
//            : TransportCard(cardType, monthlyFee) {}
//
//    void makePayment() override {
//        balance -= monthlyFee;
//        cout << "Monthly fee deducted for " << cardType << " card." << endl;
//    }
//};
//
//class PayPerRideCard : public TransportCard {
//private:
//    int ridesLeft;
//
//public:
//    PayPerRideCard(const string& cardType, double initialBalance, int initialRides)
//            : TransportCard(cardType, 0.0), ridesLeft(initialRides) {
//        balance = initialBalance;
//    }
//
//    void makePayment() override {
//        if (ridesLeft > 0) {
//            ridesLeft--;
//            cout << "Ride deducted from " << cardType << " card." << endl;
//        } else {
//            balance -= 2.5; // Default fare for additional rides
//            cout << "Additional ride deducted from " << cardType << " card." << endl;
//        }
//    }
//
//    int getRidesLeft() const {
//        return ridesLeft;
//    }
//};
//
//class ATM {
//public:
//    void topUp(TransportCard& card, double amount) {
//        card.topUp(amount);
//        cout << "Card topped up with $" << amount << " via ATM." << endl;
//    }
//};
//
//class MobileApp {
//public:
//    void topUp(TransportCard& card, double amount) {
//        card.topUp(amount);
//        cout << "Card topped up with $" << amount << " via mobile app." << endl;
//    }
//};
//
//class PaymentTerminal {
//public:
//    void processPayment(TransportCard& card) {
//        card.makePayment();
//    }
//
//    void displayStatistics(const TransportCard& card) {
//        cout << "Card Type: " << card.getCardType() << endl;
//        cout << "Balance: $" << card.getBalance() << endl;
//
//        if (const PayPerRideCard* payPerRideCard = dynamic_cast<const PayPerRideCard*>(&card)) {
//            cout << "Rides Left: " << payPerRideCard->getRidesLeft() << endl;
//        }
//    }
//};
//
//int main() {
//    MonthlyCard studentCard("Student", 30.0);
//    PayPerRideCard regularCard("Regular", 20.0, 5);
//
//    ATM atm;
//    MobileApp mobileApp;
//    PaymentTerminal paymentTerminal;
//
//    atm.topUp(studentCard, 50.0);
//    mobileApp.topUp(regularCard, 10.0);
//
//    paymentTerminal.processPayment(studentCard);
//    paymentTerminal.processPayment(regularCard);
//
//    paymentTerminal.displayStatistics(studentCard);
//    paymentTerminal.displayStatistics(regularCard);
//
//    return 0;
//}
//