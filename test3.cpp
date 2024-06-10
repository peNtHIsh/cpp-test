#include <cassert>
#include "string_utils.h"

int main() {
    // ���� 1: ���������� ������
    assert(areEqual("Hello", "Hello") == true);

    // ���� 2: ������ ������ �����
    assert(areEqual("Hello", "Helloo") == false);

    // ���� 3: ������ � ������� ���������
    assert(areEqual("Hello", "World") == false);

    // ���� 4: ������ � ������ ���������
    assert(areEqual("Hello", "hello") == true);

    // ���� 5: ���� ������ ������
    assert(areEqual("Hello", "") == false);

    // ���� 6: ��� ������ ������
    assert(areEqual("", "") == true);

    // ���� 7: ���� ������ NULL
    assert(areEqual("Hello", nullptr) == false);

    // ���� 8: ��� ������ NULL
    assert(areEqual(nullptr, nullptr) == false);

    // ���� 9: ������ � ���������� �������, �� ������� �������
    assert(areEqual("HelloWorld", "Helloworld") == true); // ���������� �� true

    // ���� 10: ������ � ��������� ������ ���������
    assert(areEqual("HeLLo", "hElLo") == true);

    return 0;
}
