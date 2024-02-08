#include <iostream>

// that code use STL containers

template <typename T>
class UserData{
    private:
        T *data; // example struct so it may be char, or user_type

    public:
        
        ExampleAlgorithms(): data{new T[]} {};
        ~ExampleAlgorithms();

        T &elem[](int index) {return data[index]}

        T *release(); // RAII idioma

        
        
};

template <typename T>
class Algorithms: public UserData<T>{

    private:

        int i
    public:
        

        Algorithms(T &data[]);
        ~Algorithms();

        T *find_min(T &user_data);
        T *find_max(T &user_data);
        T *find_elem(T &elem);

};
