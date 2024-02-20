template <class T>
class SmartPointer {
private:
    T* pointer; // create pointer

public:
    SmartPointer(T* ptr) : pointer(ptr) {}

    ~SmartPointer() {delete pointer;}

    T* operator->() {return pointer;} // override operators

    T& operator*() {return *pointer;}

    SmartPointer(SmartPointer&& other);

    SmartPointer& operator=(SmartPointer&& other);
    
    SmartPointer(const SmartPointer&) = delete; // realise raii idiom
    SmartPointer& operator=(const SmartPointer&) = delete;
};
