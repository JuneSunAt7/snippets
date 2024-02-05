#include <iostream>
#include <windows.h>

class IntArray
{
public:
    IntArray(unsigned size) : data{ new int[size] } {}  // выделяем память
    ~IntArray()
    {
        if(data)
        {
            std::cout << "Freeing memory..." << std::endl;
            delete[] data;      // освобождаем память
        }
    }
    // Удаляем конструктор копирования и оператор присваивания
    IntArray(const IntArray&) = delete;
    IntArray& operator=(const IntArray&) = delete;
 
    // оператор индексирования для доступа к элементам
    int& operator[](unsigned index) { return data[index]; }
 
    // возвращаем инкапсулированный ресурс
    int* get() const { return data; }
    // передаем ресурс другогому объекту
    int* release()
    {
        int* result = data;
        data = nullptr;
        return result;
    }
private:
    int* data;
};
 
int main()
{   
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(handle, FOREGROUND_GREEN);

    const unsigned count {9};   // количество элементов
    IntArray values{count};     // создаем объект, который управляет ресурсом
 
    // изменяем элементы динамического массива
    for (unsigned i {}; i < count; ++i)
    {
        values[i] = i+2;
    }
    
    // выводим элементы динамического массива на консоль
    for (unsigned i {}; i < count; ++i)
    {
        std::cout << values[i] << "\t";
    }
    int* data = values.release();
    std::cout << std::endl;


    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY);

}