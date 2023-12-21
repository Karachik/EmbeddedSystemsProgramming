//// #1
//#include <iostream>
//
//using namespace std;
//
// // Структура узла дерева
//struct Node {
//    int key;
//    Node* left;
//    Node* right;
//
//    Node(int value) : key(value), left(nullptr), right(nullptr) {}
//};
//
// // Класс для двоичного дерева поиска
//class BinarySearchTree {
//public:
//    // Конструктор
//    BinarySearchTree() : root(nullptr) {}
//
//    // Функция для вставки значения в дерево
//    void insert(int value) {
//        root = insertRecursive(root, value);
//    }
//
//    // Функция для поиска значения в дереве
//    bool search(int value) {
//        return searchRecursive(root, value);
//    }
//
//private:
//    // Рекурсивная функция для вставки значения
//    Node* insertRecursive(Node* current, int value) {
//        if (current == nullptr) {
//            return new Node(value);
//        }
//
//        if (value < current->key) {
//            current->left = insertRecursive(current->left, value);
//        } else if (value > current->key) {
//            current->right = insertRecursive(current->right, value);
//        }
//
//        return current;
//    }
//
//    // Рекурсивная функция для поиска значения
//    bool searchRecursive(Node* current, int value) {
//        if (current == nullptr) {
//            return false;
//        }
//
//        if (value == current->key) {
//            return true;
//        } else if (value < current->key) {
//            return searchRecursive(current->left, value);
//        } else {
//            return searchRecursive(current->right, value);
//        }
//    }
//
//    Node* root; // Корень дерева
//};
//
//int main() {
//    BinarySearchTree bst;
//
//    // Заполнение дерева значениями
//    bst.insert(10);
//    bst.insert(5);
//    bst.insert(15);
//    bst.insert(3);
//    bst.insert(7);
//
//    // Поиск значения в дереве
//    int searchValue = 7;
//    if (bst.search(searchValue)) {
//        cout << "Значение " << searchValue << " найдено в дереве.\n";
//    } else {
//        cout << "Значение " << searchValue << " не найдено в дереве.\n";
//    }
//
//    return 0;
//}
//

//// #2
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class MaxHeap {
//public:
//    // Конструктор
//    MaxHeap() {}
//
//    // Функция для вставки значения в кучу
//    void insert(int value) {
//        heap.push_back(value);
//        heapifyUp();
//    }
//
//    // Функция для поиска значения в куче
//    bool search(int value) {
//        for (int i = 0; i < heap.size(); ++i) {
//            if (heap[i] == value) {
//                return true;
//            }
//        }
//        return false;
//    }
//
//    // Функция для вывода значений кучи
//    void printHeap() {
//        for (int value : heap) {
//            cout << value << " ";
//        }
//        cout << "\n";
//    }
//
//private:
//    vector<int> heap;
//
//    // Вспомогательная функция для поддержания свойства "кучи" при вставке
//    void heapifyUp() {
//        int index = heap.size() - 1;
//
//        while (index > 0) {
//            int parentIndex = (index - 1) / 2;
//
//            if (heap[index] > heap[parentIndex]) {
//                swap(heap[index], heap[parentIndex]);
//                index = parentIndex;
//            } else {
//                break;
//            }
//        }
//    }
//};
//
//int main() {
//    MaxHeap maxHeap;
//
//    // Заполнение кучи значениями
//    maxHeap.insert(10);
//    maxHeap.insert(5);
//    maxHeap.insert(15);
//    maxHeap.insert(3);
//    maxHeap.insert(7);
//
//    // Вывод значений кучи
//    cout << "Куча: ";
//    maxHeap.printHeap();
//
//    // Поиск значения в куче
//    int searchValue = 7;
//    if (maxHeap.search(searchValue)) {
//        cout << "Значение " << searchValue << " найдено в куче.\n";
//    } else {
//        cout << "Значение " << searchValue << " не найдено в куче.\n";
//    }
//    return 0;
//}
//

//// #3
//#include <iostream>
//
//using namespace std;
//
// // Структура узла связного списка
//struct Node {
//    int data;
//    Node* next;
//
//    Node(int value) : data(value), next(nullptr) {}
//};
//
// // Класс для связного списка
//class LinkedList {
//public:
//    // Конструктор
//    LinkedList() : head(nullptr) {}
//
//    // Функция для вставки значения в конец списка
//    void insert(int value) {
//        Node* newNode = new Node(value);
//
//        if (head == nullptr) {
//            head = newNode;
//        } else {
//            Node* current = head;
//            while (current->next != nullptr) {
//                current = current->next;
//            }
//            current->next = newNode;
//        }
//    }
//
//    // Функция для вывода значений списка
//    void printList() {
//        Node* current = head;
//        while (current != nullptr) {
//            cout << current->data << " ";
//            current = current->next;
//        }
//        cout << "\n";
//    }
//
//private:
//    Node* head; // Указатель на начало списка
//};
//
//int main() {
//    LinkedList linkedList;
//
//    // Заполнение связного списка значениями
//    linkedList.insert(10);
//    linkedList.insert(5);
//    linkedList.insert(15);
//    linkedList.insert(3);
//    linkedList.insert(7);
//
//    // Вывод значений связного списка
//    cout << "Связный список: ";
//    linkedList.printList();
//
//    return 0;
//}
//

//// #4
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
// // Структура узла префиксного дерева
//struct TrieNode {
//    unordered_map<char, TrieNode*> children;
//    bool isEndOfWord;
//
//    TrieNode() : isEndOfWord(false) {}
//};
//
// // Класс для префиксного дерева
//class Trie {
//public:
//    // Конструктор
//    Trie() : root(new TrieNode()) {}
//
//    // Функция для вставки слова в префиксное дерево
//    void insert(const string& word) {
//        TrieNode* current = root;
//
//        for (char ch : word) {
//            if (current->children.find(ch) == current->children.end()) {
//                current->children[ch] = new TrieNode();
//            }
//            current = current->children[ch];
//        }
//
//        current->isEndOfWord = true;
//    }
//
//private:
//    TrieNode* root; // Корень префиксного дерева
//};
//
//int main() {
//    Trie trie;
//
//    // Заполнение префиксного дерева словами
//    trie.insert("apple");
//    trie.insert("app");
//    trie.insert("banana");
//    trie.insert("bat");
//
//    // (Опционально) Можете добавить другие слова
//
//    return 0;
//}
