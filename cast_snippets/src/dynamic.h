#include <iostream>
 
// for dynamic cast u must have pointers or polymorphic types class
// and class must have virtual function
// that can dynamic cast works correctly and checking the correctness of the conversion


class Book     // parent's class for books
{
public:
    Book(std::string title, unsigned pages): title{title}, pages{pages}{}
    std::string getTitle() const {return title;}
    unsigned getPages() const {return pages;}
    virtual void print() const 
    {
        std::cout << title << ". Pages: " << pages << std::endl;
    }
private:
    std::string title;  
    unsigned pages;     
};
class File  // parent's class 
{
public:
    File(unsigned size): size{size}{}
    unsigned getSize() const {return size;}
    virtual void print() const // so too virtual function in parent's class
    {
        std::cout << "Size: " << size << std::endl;
    }
private:
    unsigned size;     // megabytes
};
 
class Ebook : public Book, public File     // children class, for use dynamic cast
{
public:
    Ebook(std::string title, unsigned pages, unsigned size): Book{title, pages}, File{size}{}
    void print() const override
    {
        std::cout << getTitle() << "\tPages: " << getPages() << "\tSize: " << getSize() << "Mb" << std::endl;
        // that code use all parent's function and override print func
    }
};
void dynamic_cast_main();