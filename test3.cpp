#include <cassert>
#include "string_utils.h"

int main() {
    // Тест 1: Одинаковые строки
    assert(areEqual("Hello", "Hello") == true);

    // Тест 2: Строки разной длины
    assert(areEqual("Hello", "Helloo") == false);

    // Тест 3: Строки с разными символами
    assert(areEqual("Hello", "World") == false);

    // Тест 4: Строки с разным регистром
    assert(areEqual("Hello", "hello") == true);

    // Тест 5: Одна строка пустая
    assert(areEqual("Hello", "") == false);

    return 0;
}
