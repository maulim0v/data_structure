

#ifndef STACK_HPP
#define STACK_HPP

#include <cmath>
#include <functional>
#include <iostream>
#include <memory>
#include <type_traits>
#include <vector>

/// @brief Class to handle stack data structure
template <typename T>
class Stack
{
public:

    /// @brief Default constructor
    Stack() = default;

    /// @brief Default destructor
    ~Stack() = default;

    /// @brief Default copy constructor
    Stack(const Stack&) = default;

    /// @brief Default copy assignment constructor
    /// @return Copy assigned stack
    Stack& operator=(const Stack&) = default;

    /// @brief Default move constructor
    Stack(Stack&&) noexcept = default;

    /// @brief Default move assignment constructor
    /// @return Move assigned stack
    Stack& operator=(Stack&&) = default;

protected:

private:


};

#endif // STACK_HPP
