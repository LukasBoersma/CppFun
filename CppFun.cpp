// Trigraphen, das hier gibt LOL| aus:
printf("LOL??!");

//Warum wird die nächste Zeile nicht ausgeführt??/
printf("Ich bin ein noop :(");
 
// Funktionsnamen dereferenzieren:
void foo() { }
void (*f)() = &foo;
void (*f)() = foo;
void (*f)() = *foo;
void (*f)() = &*foo;
void (*f)() = *******foo;
void (*f)() = ***&*** foo;
 
// Spaß mit dem ternären Operator
b ? foo() : bar(); /* ist das gleiche wie: */ (b ? foo : bar)();
(a == 0 ? a : b) = 1;
 
// Index-Operator
a[10] == 10[a]
 
// Quizfrage: Was macht das?
*_*=*_**_;
 
// Oder das?
for (auto _ : std::vector<int>{1,2,3,4,5})
std::cout << *__for_begin << std::endl; 

// Fun fact: Die spitzen Klammern bei static_cast<...> sind keine Template-Klammern.

// Wie groß sind diese structs?
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
