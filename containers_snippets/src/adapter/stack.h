#include <stack>
#include <array>

template <typename T>
int get_size(std::stack<T> &stack) { return stack.size(); };

template <typename T, std::size_t N>
std::stack<T> add_elems(std::stack<T> &stack, std::array<T, N> &arr);

template <typename T>
void delete_all(std::stack<T> &stack);

void main_stack();