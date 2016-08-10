# Random strange CPP snippets

### Trigraphs

```c++
// This prints "LOL|" :
printf("LOL??!");
```

### Function pointers

```c++
void foo() { }
void (*f)() = &foo;
void (*f)() = foo;
void (*f)() = *foo;
void (*f)() = &*foo;
void (*f)() = *******foo;
void (*f)() = ***&*** foo;
 ```
 
### Ternary Operators

```c++
// This does the same as b ? foo() : bar();
(b ? foo : bar)();

// The arguments can be lvalues
(a == 0 ? a : b) = 1;

// This is not in the ISO standard, but most compilers accept it.
a = b ? : c;
```

 
### Index Operator

```c++
a[10] == 10[a]
```
 
### Miscellaneous

```c++
// What is this?
*_*=*_**_;

// Or this?
for (auto _ : std::vector<int>{1,2,3,4,5})
std::cout << *__for_begin << std::endl; 

// How big are these structs?
struct A1{
    char b;
    struct {
        char c;
        char a;
    };
};
 
struct A2{
    char b;
    struct B{
        char c;
        char a;
    };
};

cout<<sizeof(A1)<<endl;
cout<<sizeof(A2)<<endl;

// This is legal:

int main()
{
    return 1,2,3;
}
```

