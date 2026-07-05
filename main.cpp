#include <cstdlib>

int main() {
    // atualizar o windows pelo powershell
    system("powershell -Command \"winget upgrade --all\"");
    system("pause");
    return 0;
}
