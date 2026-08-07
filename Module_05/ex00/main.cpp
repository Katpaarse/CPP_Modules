/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/07 14:29:09 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/07 18:21:13 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
    std::cout << "TEST 1: Normal Creating & Printing" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 75);
        std::cout << bob << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "\nTEST 2: Invalid Creation (Grade too high: 0)" << std::endl;
    try
    {
        Bureaucrat high("CEO", 0);
        std::cout << high << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "\nTEST 3: Invalid Creation (Grade too low: 151)" << std::endl;
    try
    {
        Bureaucrat low("Intern", 151);
        std::cout << low << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "\nTEST 4: Incrementing to the limit and more (Grade: 2 + 1 = 1 + 1 = 0)" << std::endl;
    try
    {
        Bureaucrat alice("Alice", 2);
        std::cout << alice << std::endl;
        
        alice.incrementGrade();
        std::cout << alice << std::endl;

        alice.incrementGrade();
        std::cout << alice << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "\nTEST 5: Decrementing to the limit (Grade: 149 + 1 = 150 + 1)" << std::endl;
    try
    {
        Bureaucrat charlie("Charlie", 149);
        std::cout << charlie << std::endl;
        
        charlie.decrementGrade();
        std::cout << charlie << std::endl;

        charlie.decrementGrade();
        std::cout << charlie << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return (0);
}
