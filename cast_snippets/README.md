# Example for explicit type conversion and compile with g++ 

## That is a simple example snippets to dynamic_cast type (exprecion)

## [dynamic_cast](src/dynamic.h)

That casting only working in runtime programm.

Dynamic cast may be only for pointers and links to polimorfic type class with virtual function.

It consist `downcast` and `crosscast` casting.

1) Perform from pointer base class to pointer children class.

            base class 
                 ↑
            children clases
                 

2) Perform base types in only hierarchy 

            base class → children classes

## [static cast](src/static.h)

This casting using for perform in base class pointer to children class pointer. 

Typically, you use static_cast when you need to convert numeric data types, such as enums to ints or ints to floating point, and some data types involved in the conversion. static_cast conversions are not as safe as dynamic_cast conversions, since static_cast does not have run-time type checking. dynamic_cast An ambiguous dynamic_cast pointer will fail, while static_cast will return as if nothing was wrong; It may be dangerous.