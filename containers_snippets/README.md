# Example for stl containers and compile with g++ 

## [Sequential based containers](src/sequential/)

### The following containers are considered:

1) [list](src/sequential/list.h)

    Supports only sequential bidirectional element access.

    Provides removal and addition of elements at the beginning and end of the container.

2) [vector](src/sequential/vector.h)

    Supports random access to any element in the container.

    Provides adding and removing elements from anywhere in the container.
3) [array](src/sequential/array.h)

    Supports random access to any element in the container.

    You cannot add or remove elements from a container.
4) [dequeue](src/sequential/deque.h)

    Supports random access to any element in the container.

    Provides removal and addition of elements at the beginning and end of the container.

## [Associative based containers](src/associative/)

### The following containers are considered:

1) [map](src/associative/map.h)

    A map or std::map represents a container where each value is associated with a specific key. And using this key you can get the element. Moreover, keys can only have unique values. An example of such a container is a dictionary, where each word is associated with its translation or explanation. Therefore, such structures are also called dictionaries.

2) [set](src/associative/set.h)

    A set represents a container that can only store unique values. Typically, sets are used to create collections that must not have duplicates.

3) [multiset](src/associative/multiset.h)

    The multiset class in the C++ Standard Library is used to store and retrieve data from a collection in which the values ​​of the contained elements do not need to be unique and in which they act as key values ​​according to which the data is automatically ordered.
    
4) [unordered map](src/associative/unordered_map.h)

    A class template describes an object that manages a variable-length sequence of elements of type std::pair<const Key, Ty>. The sequence is loosely ordered by a hash function, which divides the sequence into an ordered set of subsequences called blocks. Within each container, the comparison function determines whether any pair of elements has an equivalent ordering.


## [Adapter based containers](src/adapter/)

### The following containers are considered:

1) [queue](src/adapter/queue.h)

    A container adapter class that provides a functionality constraint on some underlying container type, restricting access to its front and back elements. Elements can be added to the back or removed from the front, and elements can be checked at either end of the queue element.

2) [stack](src/adapter/stack.h)

    A template container adapter class that provides a functionality constraint by restricting access to the element that was last added to some underlying container type. The stack class is used when it is important to make it clear that only stack operations are performed in the container.
