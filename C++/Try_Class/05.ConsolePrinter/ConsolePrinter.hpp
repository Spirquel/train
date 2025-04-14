#ifndef _CONSOLEPRINTER_
    #define _CONSOLEPRINTER_

    #include <iostream>
    #include <string>

    class ConsolePrinter
    {
        public:
        ConsolePrinter() = default;
        void print(int n);
        void print(std::string s);
        void print(std::string s, int n);
        void print(std::string s, int n, int m);

        private:

    };

#endif