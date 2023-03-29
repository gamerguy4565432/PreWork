#include <iostream>
#include "question.h"
#include <string>
#include <vector>


std::string getString( std::istream& is, std::ostream& os, const std::string& prompt)
{
    std::string new_string;
    os << prompt;
    is >> new_string;
    return new_string;

}
int getInteger( std::istream& is, std::ostream& os, const std::string& prompt)
{
    int new_int;
    os << prompt;
    is >> new_int;
    return new_int;

}
double getDouble(std::istream& is, std::ostream& os, const std::string& prompt)
{
    double new_double;
    os << prompt;
    is >> new_double;
    return new_double;


}
int askQuestions3(std::istream& is, std::ostream& os)
{
    std::string final_output;

    std::string question1 = getString(is, os, "What is your favorite Color? ");
    


    int question2 = getInteger(is, os, "What is your favorit Integer? ");



    double question3 = getDouble(is, os, "What is your favorite number? ");



    

    for(int i = 1; i <= question2; i++)
    {
        final_output += std::to_string(i) + " ";
        final_output += question1 + " ";
        final_output += std::to_string(question3);



        os << final_output << std::endl;

        final_output = "";
    }

    return question2; 


}