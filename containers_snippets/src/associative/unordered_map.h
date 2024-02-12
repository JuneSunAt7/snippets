#include <unordered_map>
#include <string>

template <typename T>
void print_elems(std::unordered_map<T, std::string> &unord_map);

template <typename T>
int get_size(std::unordered_map <T, std::string> &unord_map);

template <typename T>
void delete_unord_map(std::unordered_map <T, std::string> &unord_map);

void unord_map_main();