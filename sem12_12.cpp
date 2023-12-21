//// #1
//#include <iostream>
//#include <queue>
//
//using namespace std;
//
// // Структура, представляющая элемент очереди с приоритетом
//struct PriorityQueueElement {
//    int value; // Значение элемента
//    int priority; // Приоритет элемента
//    // Конструктор для удобного создания элемента
//    PriorityQueueElement(int val, int pri) : value(val), priority(pri) {}
//    // Перегрузка оператора '<' для сравнения элементов по приоритету
//    bool operator<(const PriorityQueueElement& other) const {
//        // Используем "больше", чтобы получить очередь с нисходящим приоритетом
//        return priority < other.priority;
//    }
//};
//
//int main() {
//    // Создаем приоритетную очередь
//    priority_queue<PriorityQueueElement> priorityQueue;
//    // Вставляем элементы с разными приоритетами
//    priorityQueue.push({1, 10});
//    priorityQueue.push({2, 5});
//    priorityQueue.push({3, 15});
//    priorityQueue.push({4, 8});
//    // Извлекаем элементы с наивысшим приоритетом
//    while (!priorityQueue.empty()) {
//        PriorityQueueElement element = priorityQueue.top();
//        cout << "Value: " << element.value << ", Priority: " << element.priority << endl;
//        priorityQueue.pop();
//    }
//    return 0;
//}
//

//// #2
//#include <iostream>
//
//using namespace std;
//
//const int MAX_SIZE = 5; // Максимальный размер очереди
//
//class CircularQueue {
//private:
//    int front, rear; // Указатели FRONT и REAR
//    int arr[MAX_SIZE]; // Массив для хранения элементов очереди
//
//public:
//    // Конструктор
//    CircularQueue() : front(-1), rear(-1) {}
//
//    // Проверка, является ли очередь пустой
//    bool isEmpty() {
//        return front == -1 && rear == -1;
//    }
//
//    // Проверка, является ли очередь полной
//    bool isFull() {
//        return (rear + 1) % MAX_SIZE == front;
//    }
//
//    // Добавление элемента в очередь
//    void enqueue(int value) {
//        if (isFull()) {
//            cout << "Queue is full. Cannot enqueue." << endl;
//            return;
//        }
//
//        if (isEmpty()) {
//            front = rear = 0;
//        } else {
//            rear = (rear + 1) % MAX_SIZE;
//        }
//
//        arr[rear] = value;
//        cout << "Enqueued: " << value << endl;
//    }
//
//    // Удаление элемента из очереди
//    int dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty. Cannot dequeue." << endl;
//            return -1;
//        }
//
//        int removedValue = arr[front];
//
//        if (front == rear) {
//            // Последний элемент в очереди
//            front = rear = -1;
//        } else {
//            front = (front + 1) % MAX_SIZE;
//        }
//
//        cout << "Dequeued: " << removedValue << endl;
//        return removedValue;
//    }
//
//    // Вывод элементов очереди
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is empty." << endl;
//            return;
//        }
//
//        int i = front;
//        do {
//            cout << arr[i] << " ";
//            i = (i + 1) % MAX_SIZE;
//        } while (i != (rear + 1) % MAX_SIZE);
//
//        cout << endl;
//    }
//};
//
//int main() {
//    CircularQueue queue;
//
//    queue.enqueue(1);
//    queue.enqueue(2);
//    queue.enqueue(3);
//    queue.enqueue(4);
//
//    queue.display();
//
//    queue.dequeue();
//    queue.dequeue();
//
//    queue.display();
//
//    queue.enqueue(5);
//    queue.enqueue(6);
//
//    queue.display();
//
//    return 0;
//}
//