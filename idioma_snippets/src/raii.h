class CharArray
{
private:
    char* data;
public:
    CharArray(unsigned size) : data{ new char[size] } {}  // allocate mem
    ~CharArray();
    
    // del copy constructor and assignment operator
    CharArray(const CharArray&) = delete;
    CharArray& operator=(const CharArray&) = delete;
 
    // index operator for access to elements
    char& operator[](unsigned index) { return data[index]; }
 
    // return incapsulate resource
    char* get() const { return data; }

    char* release();
};