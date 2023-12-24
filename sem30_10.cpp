//// #1
//#!/bin/bash
//
//# Переменная для хранения имени файла логов
//        log_file="log.txt"
//
//# Проверка наличия файла логов
//if [ ! -f "$log_file" ]; then
//        echo "Файл $log_file не найден."
//exit 1
//fi
//
//# Функция для расшифровки времени
//decode_timestamp() {
//    timestamp=$1
//    decoded_timestamp=$(date -d "@$timestamp" "+%d/%b/%Y:%H:%M:%S %z")
//    echo "$decoded_timestamp"
//}
//
//# Функция для обработки строки лога
//process_log_line() {
//    log_line=$1
//# Разделение строки на отдельные поля
//    IFS=' ' read -ra fields <<< "$log_line"
//
//# Извлечение необходимой информации
//    host="${fields[0]}"
//    timestamp="${fields[3]} ${fields[4]}"
//    decoded_timestamp=$(decode_timestamp "$(date -d"${timestamp:1:-1}" "+%s")")
//    request="${fields[5]} ${fields[6]} ${fields[7]}"
//    status="${fields[8]}"
//    bytes="${fields[9]}"
//    referer="${fields[10]}"
//    user_agent="${fields[@]:11}"
//
//# Вывод информации в консоль
//    echo "Хост: $host"
//    echo "Время: $decoded_timestamp"
//    echo "Запрос: $request"
//    echo "Статус: $status"
//    echo "Байты: $bytes"
//    echo "Реферер: $referer"
//    echo "Клиент: $user_agent"
//    echo "------------------------------"
//}
//
//# Обработка файла логов
//while IFS= read -r log_line; do
//process_log_line "$log_line"
//done < "$log_file"

//// #2
//#!/bin/bash
//
//# Переменная для хранения имени файла логов
//        log_file="log.txt"
//
//# Проверка наличия файла логов
//if [ ! -f "$log_file" ]; then
//        echo "Файл $log_file не найден."
//exit 1
//fi
//
//# Переменная для кода завершения операции (если передан аргумент)
//        exit_code=$1
//
//# Функция для расшифровки времени
//decode_timestamp() {
//    timestamp=$1
//    decoded_timestamp=$(date -d "@$timestamp" "+%d/%b/%Y:%H:%M:%S %z")
//    echo "$decoded_timestamp"
//}
//
//# Функция для обработки строки лога
//process_log_line() {
//    log_line=$1
//# Разделение строки на отдельные поля
//    IFS=' ' read -ra fields <<< "$log_line"
//
//# Извлечение необходимой информации
//    host="${fields[0]}"
//    timestamp="${fields[3]} ${fields[4]}"
//    decoded_timestamp=$(decode_timestamp "$(date -d"${timestamp:1:-1}" "+%s")")
//    request="${fields[5]} ${fields[6]} ${fields[7]}"
//    status="${fields[8]}"
//    bytes="${fields[9]}"
//    referer="${fields[10]}"
//    user_agent="${fields[@]:11}"
//
//# Проверка на соответствие коду завершения
//    if [ -z "$exit_code" ] || [ "$status" == "$exit_code" ]; then
//# Вывод информации в консоль
//    echo "Хост: $host"
//    echo "Время: $decoded_timestamp"
//    echo "Запрос: $request"
//    echo "Статус: $status"
//    echo "Байты: $bytes"
//    echo "Реферер: $referer"
//    echo "Клиент: $user_agent"
//    echo "------------------------------"
//    fi
//}
//
//# Обработка файла логов
//while IFS= read -r log_line; do
//process_log_line "$log_line"
//done < "$log_file"


//// #3
//#!/bin/bash
//
//# Переменная для хранения имени файла логов
//        log_file="log.txt"
//
//# Проверка наличия файла логов
//if [ ! -f "$log_file" ]; then
//        echo "Файл $log_file не найден."
//exit 1
//fi
//
//# Функция для расшифровки времени
//decode_timestamp() {
//    timestamp=$1
//    decoded_timestamp=$(date -d "@$timestamp" "+%d/%b/%Y:%H:%M:%S %z")
//    echo "$decoded_timestamp"
//}
//
//# Функция для обработки строки лога
//process_log_line() {
//    log_line=$1
//# Разделение строки на отдельные поля
//    IFS=' ' read -ra fields <<< "$log_line"
//
//# Извлечение необходимой информации
//    host="${fields[0]}"
//    timestamp="${fields[3]} ${fields[4]}"
//    decoded_timestamp=$(decode_timestamp "$(date -d"${timestamp:1:-1}" "+%s")")
//    request="${fields[5]} ${fields[6]} ${fields[7]}"
//    status="${fields[8]}"
//    bytes="${fields[9]}"
//    referer="${fields[10]}"
//    user_agent="${fields[@]:11}"
//
//# Проверка на соответствие фильтрам
//    match=true
//
//# Перебор переданных ключей и значений для фильтрации
//    while [ $# -gt 0 ]; do
//        key="$1"
//    value="$2"
//    shift 2
//
//    case "$key" in
//        -h|--host)
//    [ "$host" != "$value" ] && match=false
//            ;;
//    -t|--timestamp)
//    [ "$decoded_timestamp" != "$value" ] && match=false
//            ;;
//    -r|--request)
//    [ "$request" != "$value" ] && match=false
//            ;;
//    -s|--status)
//    [ "$status" != "$value" ] && match=false
//            ;;
//    -b|--bytes)
//    [ "$bytes" != "$value" ] && match=false
//            ;;
//    -ref|--referer)
//    [ "$referer" != "$value" ] && match=false
//            ;;
//    -ua|--user-agent)
//    [ "$user_agent" != "$value" ] && match=false
//            ;;
//    *)
//    echo "Неизвестный ключ: $key"
//    exit 1
//            ;;
//    esac
//            done
//
//# Вывод информации, если соответствует фильтру
//    if [ "$match" = true ]; then
//    echo "Хост: $host"
//    echo "Время: $decoded_timestamp"
//    echo "Запрос: $request"
//    echo "Статус: $status"
//    echo "Байты: $bytes"
//    echo "Реферер: $referer"
//    echo "Клиент: $user_agent"
//    echo "------------------------------"
//    fi
//}
//
//# Обработка файла логов
//while IFS= read -r log_line; do
//process_log_line "$log_line" "$@"
//done < "$log_file"

//// #4
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
// // Структура для хранения информации о записи лога
//struct LogEntry {
//    char host[20];
//    char timestamp[30];
//    char request[255];
//    int status;
//    int bytes;
//    char referer[255];
//    char user_agent[255];
//};
//
// // Функция для расшифровки времени
//void decode_timestamp(char *timestamp) {
//    struct tm tm_time;
//    memset(&tm_time, 0, sizeof(struct tm));
//
//    if (strptime(timestamp, "%d/%b/%Y:%H:%M:%S %z", &tm_time) == NULL) {
//        fprintf(stderr, "Ошибка при расшифровке времени.\n");
//        return;
//    }
//
//    // Преобразование структуры tm в строку
//    char decoded_time[50];
//    strftime(decoded_time, sizeof(decoded_time), "%Y-%m-%d %H:%M:%S %z", &tm_time);
//
//    // Вывод расшифрованного времени
//    printf("Расшифрованное время: %s\n", decoded_time);
//}
//
// // Функция для обработки строки лога
//void process_log_line(char *log_line) {
//    struct LogEntry entry;
//
//    // Разделение строки на отдельные поля и заполнение структуры
//    sscanf(log_line, "%s - - [%29[^]]] \"%254[^\"]\" %d %d \"%254[^\"]\" \"%254[^\"]\"",
//           entry.host, entry.timestamp, entry.request, &entry.status, &entry.bytes,
//           entry.referer, entry.user_agent);
//
//    // Расшифровка времени
//    decode_timestamp(entry.timestamp);
//
//    // Вывод информации в консоль
//    printf("Хост: %s\n", entry.host);
//    printf("Время: %s\n", entry.timestamp);
//    printf("Запрос: %s\n", entry.request);
//    printf("Статус: %d\n", entry.status);
//    printf("Байты: %d\n", entry.bytes);
//    printf("Реферер: %s\n", entry.referer);
//    printf("Клиент: %s\n", entry.user_agent);
//    printf("------------------------------\n");
//}
//
//int main() {
//    FILE *file;
//    char log_line[1024];
//
//    // Открытие файла логов
//    file = fopen("log.txt", "r");
//    if (file == NULL) {
//        perror("Не удалось открыть файл log.txt");
//        return 1;
//    }
//
//    // Обработка файла логов
//    while (fgets(log_line, sizeof(log_line), file) != NULL) {
//        process_log_line(log_line);
//    }
//
//    // Закрытие файла
//    fclose(file);
//
//    return 0;
//}
