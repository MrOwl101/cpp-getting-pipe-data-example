#include <iostream>

int main(int argc, char** argv)
{
    /*
        // handling flags
        // not used now

        // display no. of arguments
        std::cout<<"argc: "<<argc<<std::endl;
        for(int i=0;i<argc;i++)
        {
            // display each flag
            std::cout<<argv[i]<<std::endl;
        }
    */

    /*
        using string to get output, which will be provided using pipe

        assuming the program has been compiled to the name of "app"

        we use it like:
            "command" | ./app

        i.e.:
            tree | ./app

        will produce sth like:
            .
            ├── app
            ├── main.cpp
            └── makefile

            0 directories, 3 files
    */

    std::string line;
    while(std::getline(std::cin,line))
    {
        // after the line is aquired, it is displayed, and the variable is used to get another one
        std::cout<<line<<std::endl;
    }
    
    return 0;
}