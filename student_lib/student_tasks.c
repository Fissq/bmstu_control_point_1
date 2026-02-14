#include "student_tasks.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// ============== ПРОСТЫЕ ЗАДАНИЯ (15 заданий, 0.5-1.5 балла) ==============

// Задание 1: Сумма элементов массива (0.5 балла)
int arraySum(const int *arr, int size) {
  // TODO: Вычислить сумму всех элементов массива
  return 0;
}

// Задание 2: Максимальный элемент массива (0.5 балла)
int arrayMax(const int *arr, int size) {
  // TODO: Найти максимальный элемент массива
  return 0;
}

// Задание 3: Минимальный элемент массива (0.5 балла)
int arrayMin(const int *arr, int size) {
  // TODO: Найти минимальный элемент массива
  return 0;
}

// Задание 4: Разворот массива на месте (0.5 балла)
void arrayReverse(int *arr, int size) {
  // TODO: Развернуть массив (первый элемент меняется с последним и т.д.)
}

// Задание 5: Подсчитать чётные числа (0.5 балла)
int countEven(const int *arr, int size) {
  // TODO: Подсчитать количество чётных чисел в массиве
  return 0;
}

// Задание 6: Поиск элемента в массиве (0.5 балла)
int arrayFind(const int *arr, int size, int value) {
  // TODO: Вернуть индекс первого вхождения value или -1
  return -1;
}

// Задание 7: Копирование массива (0.5 балла)
void arrayCopy(int *dest, const int *src, int size) {
  // TODO: Скопировать size элементов из src в dest
}

// Задание 8: Сортировка пузырьком (0.5 балла)
void bubbleSort(int *arr, int size) {
  // TODO: Отсортировать массив по возрастанию методом пузырька
}

// Задание 9: Циклический сдвиг влево на k позиций (0.5 балла)
void rotateLeft(int *arr, int size, int k) {
  // TODO: Сдвинуть элементы массива влево на k позиций
  // Пример: [1,2,3,4,5], k=2 -> [3,4,5,1,2]
}

// Задание 10: Слияние двух отсортированных массивов (0.5 балла)
void mergeSorted(const int *a, int sizeA, const int *b, int sizeB,
                 int *result) {
  // TODO: Объединить два отсортированных массива в один отсортированный
}

// Задание 11: Удалить дубликаты из отсортированного массива (0.5 балла)
int removeDuplicates(int *arr, int size) {
  // TODO: Удалить дубликаты из отсортированного массива на месте
  // Вернуть новый размер массива
  return 0;
}

// Задание 12: Второй по величине элемент (1 балл)
int secondLargest(const int *arr, int size) {
  // TODO: Найти второй по величине элемент
  // Если все элементы одинаковые, вернуть этот элемент
  return 0;
}

// Задание 13: Проверить, отсортирован ли массив по неубыванию (1 балл)
bool isSorted(const int *arr, int size) {
  // TODO: Вернуть true, если массив отсортирован по неубыванию
  return false;
}

// Задание 14: Частота самого частого элемента (1 балл)
int maxFrequency(const int *arr, int size) {
  // TODO: Найти, сколько раз встречается самый частый элемент
  return 0;
}

// Задание 15: Найти два элемента с заданной суммой (1.5 балла)
int *twoSum(const int *arr, int size, int target) {
  // TODO: Найти два индекса i, j (i < j) таких, что arr[i] + arr[j] == target
  // Вернуть массив из двух элементов, выделенный через malloc
  // Если пара не найдена, вернуть NULL
  return NULL;
}

// ============== СЛОЖНЫЕ ЗАДАНИЯ (5 заданий, 3-5 баллов) ==============

// Задание 16: Фильтрация положительных элементов (3 балла)
int *filterPositive(const int *arr, int size, int *resultSize) {
  // TODO: Создать новый массив (malloc) только с положительными элементами
  // Записать размер в *resultSize
  // Если положительных нет, вернуть NULL и *resultSize = 0
  *resultSize = 0;
  return NULL;
}

// Задание 17: Транспонирование матрицы (3 балла)
int *matrixTranspose(const int *matrix, int rows, int cols) {
  // TODO: Создать новую матрицу (malloc) — транспонированную
  // Матрица хранится построчно (row-major)
  // result[j * rows + i] = matrix[i * cols + j]
  return NULL;
}

// Задание 18: Обход матрицы по спирали (4 балла)
int *spiralOrder(const int *matrix, int rows, int cols, int *resultSize) {
  // TODO: Вернуть элементы матрицы в порядке спирального обхода
  // Выделить результат через malloc, записать размер в *resultSize
  *resultSize = 0;
  return NULL;
}

// Задание 19: Разбиение строки по разделителю (5 баллов)
char **stringSplit(const char *str, char delimiter, int *count) {
  // TODO: Разбить строку по разделителю
  // Выделить массив строк и каждую строку через malloc
  // Записать количество частей в *count
  *count = 0;
  return NULL;
}

// Задание 20: Умножение полиномов (5 баллов)
int *polynomialMultiply(const int *a, int sizeA, const int *b, int sizeB,
                        int *resultSize) {
  // TODO: Перемножить два полинома
  // Размер результата: sizeA + sizeB - 1
  // Выделить результат через malloc, заполнить нулями, затем вычислить
  // result[i+j] += a[i] * b[j]
  *resultSize = 0;
  return NULL;
}