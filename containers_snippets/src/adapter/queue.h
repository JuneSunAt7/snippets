#include <queue>
#include <array>

template <typename T>
int get_size(std::queue <T> &que);

template <typename T, std::size_t N>
std::queue<T> add_elems(std::queue <T> &que, std::array <T,N> &arr);

template <typename T>
void delete_all(std::queue <T> &que);

void queue_main();