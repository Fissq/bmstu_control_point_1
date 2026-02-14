#include <cstdlib>
#include <cstring>
#include <gtest/gtest.h>

extern "C" {
#include "student_tasks.h"
}

// ========== Задание 1: Сумма массива (0.5 балла) ==========
TEST(Task01_ArraySum, SingleElement) {
  int arr[] = {42};
  EXPECT_EQ(arraySum(arr, 1), 42);
}

TEST(Task01_ArraySum, MultiplePositive) {
  int arr[] = {1, 2, 3, 4, 5};
  EXPECT_EQ(arraySum(arr, 5), 15);
}

TEST(Task01_ArraySum, WithNegatives) {
  int arr[] = {-1, -2, -3};
  EXPECT_EQ(arraySum(arr, 3), -6);

  int arr2[] = {10, -10, 20, -20};
  EXPECT_EQ(arraySum(arr2, 4), 0);
}

// ========== Задание 2: Максимум массива (0.5 балла) ==========
TEST(Task02_ArrayMax, SingleElement) {
  int arr[] = {42};
  EXPECT_EQ(arrayMax(arr, 1), 42);
}

TEST(Task02_ArrayMax, AllPositive) {
  int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
  EXPECT_EQ(arrayMax(arr, 8), 9);
}

TEST(Task02_ArrayMax, WithNegatives) {
  int arr[] = {-5, -1, -3, -2};
  EXPECT_EQ(arrayMax(arr, 4), -1);

  int arr2[] = {-10, 0, 10};
  EXPECT_EQ(arrayMax(arr2, 3), 10);
}

// ========== Задание 3: Минимум массива (0.5 балла) ==========
TEST(Task03_ArrayMin, SingleElement) {
  int arr[] = {42};
  EXPECT_EQ(arrayMin(arr, 1), 42);
}

TEST(Task03_ArrayMin, AllPositive) {
  int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
  EXPECT_EQ(arrayMin(arr, 8), 1);
}

TEST(Task03_ArrayMin, WithNegatives) {
  int arr[] = {-5, -1, -3, -2};
  EXPECT_EQ(arrayMin(arr, 4), -5);

  int arr2[] = {-10, 0, 10};
  EXPECT_EQ(arrayMin(arr2, 3), -10);
}

// ========== Задание 4: Разворот массива (0.5 балла) ==========
TEST(Task04_ArrayReverse, SingleElement) {
  int arr[] = {1};
  arrayReverse(arr, 1);
  EXPECT_EQ(arr[0], 1);
}

TEST(Task04_ArrayReverse, EvenLength) {
  int arr[] = {1, 2, 3, 4};
  arrayReverse(arr, 4);
  int expected[] = {4, 3, 2, 1};
  for (int i = 0; i < 4; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

TEST(Task04_ArrayReverse, OddLength) {
  int arr[] = {1, 2, 3, 4, 5};
  arrayReverse(arr, 5);
  int expected[] = {5, 4, 3, 2, 1};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

// ========== Задание 5: Подсчёт чётных (0.5 балла) ==========
TEST(Task05_CountEven, NoEven) {
  int arr[] = {1, 3, 5, 7};
  EXPECT_EQ(countEven(arr, 4), 0);
}

TEST(Task05_CountEven, AllEven) {
  int arr[] = {2, 4, 6, 8};
  EXPECT_EQ(countEven(arr, 4), 4);
}

TEST(Task05_CountEven, Mixed) {
  int arr[] = {1, 2, 3, 4, 6};
  EXPECT_EQ(countEven(arr, 5), 3);

  int arr2[] = {0, -2, 3, -4};
  EXPECT_EQ(countEven(arr2, 4), 3); // 0, -2, -4
}

// ========== Задание 6: Поиск элемента (0.5 балла) ==========
TEST(Task06_ArrayFind, NotFound) {
  int arr[] = {1, 2, 3};
  EXPECT_EQ(arrayFind(arr, 3, 5), -1);
}

TEST(Task06_ArrayFind, Found) {
  int arr[] = {10, 20, 30, 40};
  EXPECT_EQ(arrayFind(arr, 4, 20), 1);
  EXPECT_EQ(arrayFind(arr, 4, 10), 0);
  EXPECT_EQ(arrayFind(arr, 4, 40), 3);
}

TEST(Task06_ArrayFind, FirstOccurrence) {
  int arr[] = {5, 3, 5, 3, 5};
  EXPECT_EQ(arrayFind(arr, 5, 5), 0);
  EXPECT_EQ(arrayFind(arr, 5, 3), 1);
}

// ========== Задание 7: Копирование массива (0.5 балла) ==========
TEST(Task07_ArrayCopy, SingleElement) {
  int src[] = {42};
  int dest[1];
  arrayCopy(dest, src, 1);
  EXPECT_EQ(dest[0], 42);
}

TEST(Task07_ArrayCopy, NormalCopy) {
  int src[] = {1, 2, 3, 4, 5};
  int dest[5];
  arrayCopy(dest, src, 5);
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(dest[i], src[i]);
}

TEST(Task07_ArrayCopy, WithNegatives) {
  int src[] = {-10, 0, 10, -20, 20};
  int dest[5];
  arrayCopy(dest, src, 5);
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(dest[i], src[i]);
}

// ========== Задание 8: Сортировка пузырьком (0.5 балла) ==========
TEST(Task08_BubbleSort, AlreadySorted) {
  int arr[] = {1, 2, 3, 4, 5};
  bubbleSort(arr, 5);
  int expected[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

TEST(Task08_BubbleSort, ReverseSorted) {
  int arr[] = {5, 4, 3, 2, 1};
  bubbleSort(arr, 5);
  int expected[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

TEST(Task08_BubbleSort, Unsorted) {
  int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
  bubbleSort(arr, 8);
  int expected[] = {1, 1, 2, 3, 4, 5, 6, 9};
  for (int i = 0; i < 8; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

TEST(Task08_BubbleSort, WithNegatives) {
  int arr[] = {-3, 5, -1, 0, 2};
  bubbleSort(arr, 5);
  int expected[] = {-3, -1, 0, 2, 5};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

// ========== Задание 9: Циклический сдвиг влево (0.5 балла) ==========
TEST(Task09_RotateLeft, RotateByZero) {
  int arr[] = {1, 2, 3, 4, 5};
  rotateLeft(arr, 5, 0);
  int expected[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

TEST(Task09_RotateLeft, RotateByTwo) {
  int arr[] = {1, 2, 3, 4, 5};
  rotateLeft(arr, 5, 2);
  int expected[] = {3, 4, 5, 1, 2};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

TEST(Task09_RotateLeft, RotateBySize) {
  int arr[] = {1, 2, 3, 4, 5};
  rotateLeft(arr, 5, 5);
  int expected[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

TEST(Task09_RotateLeft, RotateMoreThanSize) {
  int arr[] = {1, 2, 3, 4, 5};
  rotateLeft(arr, 5, 7); // 7 % 5 = 2
  int expected[] = {3, 4, 5, 1, 2};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

// ========== Задание 10: Слияние отсортированных (0.5 балла) ==========
TEST(Task10_MergeSorted, BothNonEmpty) {
  int a[] = {1, 3, 5};
  int b[] = {2, 4, 6};
  int result[6];
  mergeSorted(a, 3, b, 3, result);
  int expected[] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 6; i++)
    EXPECT_EQ(result[i], expected[i]);
}

TEST(Task10_MergeSorted, OneEmpty) {
  int a[] = {1, 2, 3};
  int result[3];
  mergeSorted(a, 3, NULL, 0, result);
  for (int i = 0; i < 3; i++)
    EXPECT_EQ(result[i], a[i]);
}

TEST(Task10_MergeSorted, DifferentSizes) {
  int a[] = {1, 5};
  int b[] = {2, 3, 4, 6, 7};
  int result[7];
  mergeSorted(a, 2, b, 5, result);
  int expected[] = {1, 2, 3, 4, 5, 6, 7};
  for (int i = 0; i < 7; i++)
    EXPECT_EQ(result[i], expected[i]);
}

// ========== Задание 11: Удаление дубликатов (0.5 балла) ==========
TEST(Task11_RemoveDuplicates, NoDuplicates) {
  int arr[] = {1, 2, 3, 4, 5};
  int newSize = removeDuplicates(arr, 5);
  EXPECT_EQ(newSize, 5);
}

TEST(Task11_RemoveDuplicates, AllSame) {
  int arr[] = {3, 3, 3, 3};
  int newSize = removeDuplicates(arr, 4);
  EXPECT_EQ(newSize, 1);
  EXPECT_EQ(arr[0], 3);
}

TEST(Task11_RemoveDuplicates, SomeDuplicates) {
  int arr[] = {1, 1, 2, 3, 3, 4, 5, 5};
  int newSize = removeDuplicates(arr, 8);
  EXPECT_EQ(newSize, 5);
  int expected[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
    EXPECT_EQ(arr[i], expected[i]);
}

// ========== Задание 12: Второй по величине (1 балл) ==========
TEST(Task12_SecondLargest, AllSame) {
  int arr[] = {5, 5, 5};
  EXPECT_EQ(secondLargest(arr, 3), 5);
}

TEST(Task12_SecondLargest, TwoElements) {
  int arr[] = {3, 7};
  EXPECT_EQ(secondLargest(arr, 2), 3);
}

TEST(Task12_SecondLargest, MultipleElements) {
  int arr[] = {3, 1, 4, 1, 5, 9, 2, 6};
  EXPECT_EQ(secondLargest(arr, 8), 6);
}

TEST(Task12_SecondLargest, WithDuplicateMax) {
  int arr[] = {9, 9, 5, 3};
  EXPECT_EQ(secondLargest(arr, 4), 5);
}

// ========== Задание 13: Проверка отсортированности (1 балл) ==========
TEST(Task13_IsSorted, EmptyAndSingle) {
  int arr[] = {1};
  EXPECT_TRUE(isSorted(arr, 1));
}

TEST(Task13_IsSorted, Sorted) {
  int arr[] = {1, 2, 3, 4, 5};
  EXPECT_TRUE(isSorted(arr, 5));

  int arr2[] = {1, 1, 2, 3, 3};
  EXPECT_TRUE(isSorted(arr2, 5));
}

TEST(Task13_IsSorted, NotSorted) {
  int arr[] = {1, 3, 2, 4, 5};
  EXPECT_FALSE(isSorted(arr, 5));

  int arr2[] = {5, 4, 3, 2, 1};
  EXPECT_FALSE(isSorted(arr2, 5));
}

// ========== Задание 14: Частота элемента (1 балл) ==========
TEST(Task14_MaxFrequency, SingleElement) {
  int arr[] = {42};
  EXPECT_EQ(maxFrequency(arr, 1), 1);
}

TEST(Task14_MaxFrequency, AllSame) {
  int arr[] = {7, 7, 7, 7};
  EXPECT_EQ(maxFrequency(arr, 4), 4);
}

TEST(Task14_MaxFrequency, MixedFrequencies) {
  int arr[] = {1, 3, 2, 3, 3, 1};
  EXPECT_EQ(maxFrequency(arr, 6), 3); // 3 appears 3 times

  int arr2[] = {1, 2, 3, 4, 5};
  EXPECT_EQ(maxFrequency(arr2, 5), 1); // all appear once
}

// ========== Задание 15: Two Sum (1.5 балла) ==========
TEST(Task15_TwoSum, Found) {
  int arr[] = {2, 7, 11, 15};
  int *result = twoSum(arr, 4, 9);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(arr[result[0]] + arr[result[1]], 9);
  free(result);
}

TEST(Task15_TwoSum, NotFound) {
  int arr[] = {1, 2, 3};
  int *result = twoSum(arr, 3, 100);
  EXPECT_EQ(result, nullptr);
}

TEST(Task15_TwoSum, MultipleValid) {
  int arr[] = {3, 2, 4};
  int *result = twoSum(arr, 3, 6);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(arr[result[0]] + arr[result[1]], 6);
  EXPECT_NE(result[0], result[1]);
  free(result);
}

TEST(Task15_TwoSum, WithNegatives) {
  int arr[] = {-1, 5, 3, -4};
  int *result = twoSum(arr, 4, -5);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(arr[result[0]] + arr[result[1]], -5);
  free(result);
}

// ========== Задание 16: Фильтрация положительных (3 балла) ==========
TEST(Task16_FilterPositive, AllPositive) {
  int arr[] = {1, 2, 3};
  int resultSize;
  int *result = filterPositive(arr, 3, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 3);
  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 2);
  EXPECT_EQ(result[2], 3);
  free(result);
}

TEST(Task16_FilterPositive, NoPositive) {
  int arr[] = {-1, -2, 0, -3};
  int resultSize;
  int *result = filterPositive(arr, 4, &resultSize);
  EXPECT_EQ(result, nullptr);
  EXPECT_EQ(resultSize, 0);
}

TEST(Task16_FilterPositive, Mixed) {
  int arr[] = {-1, 2, -3, 4, 5};
  int resultSize;
  int *result = filterPositive(arr, 5, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 3);
  EXPECT_EQ(result[0], 2);
  EXPECT_EQ(result[1], 4);
  EXPECT_EQ(result[2], 5);
  free(result);
}

TEST(Task16_FilterPositive, EmptyArray) {
  int resultSize;
  int *result = filterPositive(NULL, 0, &resultSize);
  EXPECT_EQ(result, nullptr);
  EXPECT_EQ(resultSize, 0);
}

// ========== Задание 17: Транспонирование матрицы (3 балла) ==========
TEST(Task17_MatrixTranspose, Square2x2) {
  int matrix[] = {1, 2, 3, 4};
  int *result = matrixTranspose(matrix, 2, 2);
  ASSERT_NE(result, nullptr);
  // [1,2; 3,4] -> [1,3; 2,4]
  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 3);
  EXPECT_EQ(result[2], 2);
  EXPECT_EQ(result[3], 4);
  free(result);
}

TEST(Task17_MatrixTranspose, Rectangular2x3) {
  int matrix[] = {1, 2, 3, 4, 5, 6};
  int *result = matrixTranspose(matrix, 2, 3);
  ASSERT_NE(result, nullptr);
  // [1,2,3; 4,5,6] -> [1,4; 2,5; 3,6]
  int expected[] = {1, 4, 2, 5, 3, 6};
  for (int i = 0; i < 6; i++)
    EXPECT_EQ(result[i], expected[i]);
  free(result);
}

TEST(Task17_MatrixTranspose, SingleRow) {
  int matrix[] = {1, 2, 3};
  int *result = matrixTranspose(matrix, 1, 3);
  ASSERT_NE(result, nullptr);
  // [1,2,3] -> [1; 2; 3]
  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 2);
  EXPECT_EQ(result[2], 3);
  free(result);
}

TEST(Task17_MatrixTranspose, SingleColumn) {
  int matrix[] = {1, 2, 3};
  int *result = matrixTranspose(matrix, 3, 1);
  ASSERT_NE(result, nullptr);
  // [1; 2; 3] -> [1,2,3]
  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 2);
  EXPECT_EQ(result[2], 3);
  free(result);
}

// ========== Задание 18: Спиральный обход матрицы (4 балла) ==========
TEST(Task18_SpiralOrder, Matrix3x3) {
  int matrix[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int resultSize;
  int *result = spiralOrder(matrix, 3, 3, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 9);
  int expected[] = {1, 2, 3, 6, 9, 8, 7, 4, 5};
  for (int i = 0; i < 9; i++)
    EXPECT_EQ(result[i], expected[i]);
  free(result);
}

TEST(Task18_SpiralOrder, Matrix2x3) {
  int matrix[] = {1, 2, 3, 4, 5, 6};
  int resultSize;
  int *result = spiralOrder(matrix, 2, 3, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 6);
  int expected[] = {1, 2, 3, 6, 5, 4};
  for (int i = 0; i < 6; i++)
    EXPECT_EQ(result[i], expected[i]);
  free(result);
}

TEST(Task18_SpiralOrder, SingleRow) {
  int matrix[] = {1, 2, 3, 4};
  int resultSize;
  int *result = spiralOrder(matrix, 1, 4, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 4);
  int expected[] = {1, 2, 3, 4};
  for (int i = 0; i < 4; i++)
    EXPECT_EQ(result[i], expected[i]);
  free(result);
}

TEST(Task18_SpiralOrder, Matrix4x4) {
  int matrix[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  int resultSize;
  int *result = spiralOrder(matrix, 4, 4, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 16);
  int expected[] = {1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5, 6, 7, 11, 10};
  for (int i = 0; i < 16; i++)
    EXPECT_EQ(result[i], expected[i]);
  free(result);
}

// ========== Задание 19: Разбиение строки (5 баллов) ==========
TEST(Task19_StringSplit, SimpleComma) {
  int count;
  char **result = stringSplit("hello,world,test", ',', &count);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(count, 3);
  EXPECT_STREQ(result[0], "hello");
  EXPECT_STREQ(result[1], "world");
  EXPECT_STREQ(result[2], "test");
  for (int i = 0; i < count; i++)
    free(result[i]);
  free(result);
}

TEST(Task19_StringSplit, SinglePart) {
  int count;
  char **result = stringSplit("hello", ',', &count);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(count, 1);
  EXPECT_STREQ(result[0], "hello");
  free(result[0]);
  free(result);
}

TEST(Task19_StringSplit, EmptyParts) {
  int count;
  char **result = stringSplit("a,,b", ',', &count);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(count, 3);
  EXPECT_STREQ(result[0], "a");
  EXPECT_STREQ(result[1], "");
  EXPECT_STREQ(result[2], "b");
  for (int i = 0; i < count; i++)
    free(result[i]);
  free(result);
}

TEST(Task19_StringSplit, DifferentDelimiter) {
  int count;
  char **result = stringSplit("one:two:three:four", ':', &count);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(count, 4);
  EXPECT_STREQ(result[0], "one");
  EXPECT_STREQ(result[1], "two");
  EXPECT_STREQ(result[2], "three");
  EXPECT_STREQ(result[3], "four");
  for (int i = 0; i < count; i++)
    free(result[i]);
  free(result);
}

TEST(Task19_StringSplit, EmptyString) {
  int count;
  char **result = stringSplit("", ',', &count);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(count, 1);
  EXPECT_STREQ(result[0], "");
  free(result[0]);
  free(result);
}

// ========== Задание 20: Умножение полиномов (5 баллов) ==========
TEST(Task20_PolynomialMultiply, SimpleLinear) {
  int a[] = {1, 2}; // 1 + 2x
  int b[] = {3, 4}; // 3 + 4x
  int resultSize;
  int *result = polynomialMultiply(a, 2, b, 2, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 3);
  // (1+2x)(3+4x) = 3 + 10x + 8x^2
  EXPECT_EQ(result[0], 3);
  EXPECT_EQ(result[1], 10);
  EXPECT_EQ(result[2], 8);
  free(result);
}

TEST(Task20_PolynomialMultiply, ConstantTimesPolynomial) {
  int a[] = {5};       // 5
  int b[] = {1, 2, 3}; // 1 + 2x + 3x^2
  int resultSize;
  int *result = polynomialMultiply(a, 1, b, 3, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 3);
  EXPECT_EQ(result[0], 5);
  EXPECT_EQ(result[1], 10);
  EXPECT_EQ(result[2], 15);
  free(result);
}

TEST(Task20_PolynomialMultiply, QuadraticTimesLinear) {
  int a[] = {1, 0, 1}; // 1 + x^2
  int b[] = {1, 1};    // 1 + x
  int resultSize;
  int *result = polynomialMultiply(a, 3, b, 2, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 4);
  // (1 + x^2)(1 + x) = 1 + x + x^2 + x^3
  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 1);
  EXPECT_EQ(result[2], 1);
  EXPECT_EQ(result[3], 1);
  free(result);
}

TEST(Task20_PolynomialMultiply, WithNegativeCoeffs) {
  int a[] = {1, -1}; // 1 - x
  int b[] = {1, 1};  // 1 + x
  int resultSize;
  int *result = polynomialMultiply(a, 2, b, 2, &resultSize);
  ASSERT_NE(result, nullptr);
  EXPECT_EQ(resultSize, 3);
  // (1-x)(1+x) = 1 - x^2
  EXPECT_EQ(result[0], 1);
  EXPECT_EQ(result[1], 0);
  EXPECT_EQ(result[2], -1);
  free(result);
}
