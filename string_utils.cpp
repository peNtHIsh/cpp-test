#include <cstring>
#include <cctype>

// Функция для сравнения строк на равенство без учета регистра
bool areEqual(const char* str1, const char* str2) {
    if (str1 == nullptr || str2 == nullptr) {
        return false;
    }
    while (*str1 && *str2) {
        if (std::tolower(static_cast<unsigned char>(*str1)) != std::tolower(static_cast<unsigned char>(*str2))) {
            return false;
        }
        ++str1;
        ++str2;
    }
    return *str1 == *str2;
}
