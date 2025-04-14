#ifndef _NUMBER_
    #define _NUMBER

    template <typename T> 
    T sum(T a, T b); //on crée un template et on y crée un type nommé "T" (qui sera interprété par le gcc)
    /*on peut faire template <typename T, typename U>*/

    #include "number.tpp" /*pour incluer le type créé*/

#endif