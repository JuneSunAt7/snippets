#include <list>

template <typename T>
void print_elems(std::list <T> &list);

template <typename T>
int size_list(std::list <T> &list);

template <typename T>
bool get_data(std::list <T> &list, T &data);

template <typename T>
void delete_list(std::list <T> &list);

template <typename T>
std::list <T> add_elem(std::list <T> &list, T &elem, int &index);

template <typename T>
std::list <T> sorted_list(std::list <T> &list);

void list_main();

