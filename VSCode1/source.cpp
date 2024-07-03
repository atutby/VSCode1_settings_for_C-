#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // изменить кодировку консоли для русского языка
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    system("chcp 65001");
#endif

    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!", "ляляжужу"};
    
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    system("pause");
#endif
}