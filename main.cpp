#include <string>
#include <vector>

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void xor_checksum() {
    int values[4] = {12, 7, 25, 40};
    int checksum = 0;
    for (int i = 0; i < 4; ++i) checksum ^= values[i];
    (void)checksum;
}

void count_zeros() {
    int n = 102030;
    int zeros = 0;
    while (n > 0) { if (n % 10 == 0) zeros += 1; n /= 10; }
    (void)zeros;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

extern "C" int bright_thorn();
extern "C" void frost_crescent();
extern "C" void subtle_hollow();

int main() {
    text_contains();
    xor_checksum();
    count_zeros();
    count_vowels();
    frost_crescent();
    subtle_hollow();
    return bright_thorn();
}
