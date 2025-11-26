#include <iostream>
#include <string>
#include <stdio.h>

#include <iomanip>

int main(int argc, char **argv)
{
    // std::cout << "\n============================= TEST CAST IMPLICIT / EXPLICIT SIMPLE ===============================\n\n";
    // int a = 42;
    // double b = 42.5;
    // double c = 42.95;

    // int test1 = (int)b;
    // int test2 = (int)c;
    // double test3 = a;
    // double test4 = (double)a; 

    // // int test1 = b;
    // // int test2 = c;

    // std::cout << "Valeur de a = " << a << std::endl;
    // std::cout << "Valeur de double b = " << b << "   Valeur de int b = " << test1 << std::endl;
    // std::cout << "Valeur de double c = " << c << "   Valeur de int c = " << test2 << std::endl;
    // std::cout << "Valeur de double a = " << a << "   Valeur de int a = " << test3 << std::endl;
    // std::cout << "Valeur de double a = " << a << "   Valeur de int a = " << test4 << std::endl;

    // std::cout << "\n============================= TEST CAST REINTERPRETATION ===============================\n\n";
    // float a1 = 42.42f;

    // void * test5 = &a1;
    // int * test6 = (int*)test5;

    // std::cout << "Valeur de a1 = " << a1 << std::endl;
    // std::cout << "Adresse de a1 = " << &a1 << std::endl;
    // std::cout << "Valeur de test5 = " << test5 << std::endl;
    // std::cout << "Valeur de test6 = " << test6 << std::endl;

    // printf("\n%d\n", *test6);

    // std::cout << "\n============================= TEST STATIC CAST ===============================\n\n";

    // float a2 = 42.42f;

    // void * test7 = &a1;
    // int test8 = static_cast<int>(*static_cast<float*>((test7)));

    // std::cout << "Valeur de a2 = " << a2 << std::endl;
    // std::cout << "Adresse de a2 = " << &a2 << std::endl;
    // std::cout << "Valeur de test7 = " << test7 << std::endl;
    // std::cout << "Valeur de test8 = " << test8 << std::endl;

    // std::cout << "Valeur de test8 = " << *(reinterpret_cast<int*>(test8)) << std::endl;

    // std::cout << "\n================================= TEST STATIC CAST ===========================\n\n";

    // double a = 42.42;

    // // float b = static_cast<float>(a);
    // float b = (float)a;
    // char c = static_cast<char>(a);
    // int d = static_cast<int>(a);
    // // std::string test = "42";


    // std::cout << "Valeur de a = " << a << std::endl;
    // std::cout << "Valeur de b = " << b << std::endl;
    // std::cout << "Valeur de de c = " << c << std::endl;
    // std::cout << "Valeur de d = " << d << std::endl;

    // std::string test = "ceci est un test";
    if (argc == 2)
    {
        // try 
        // {
            float a;
            char *end;
            if (!(a = std::strtof(argv[1], &end)))
                return(printf("je sors\n"), 1);
            // double b = std::stod(argv[1]);
            // char c = std::stoi(argv[1]);
            // int  d = std::stoi(argv[1]);
            
            // printf("char = '%c'\n", c);
            // printf("int = %d\n", d);
            // printf("float = %.1ff\n", a);
            std::cout << a << "f" << std::endl;
            // printf("double = %.1f\n", b);
        // }
        // catch (std::exception &e)
        // {
        //     std::cout << e.what() << std::endl;
        // }
    }
    return (0);
}