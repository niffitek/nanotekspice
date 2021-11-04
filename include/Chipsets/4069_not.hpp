/*
** EPITECH PROJECT, 2019
** FILE_NAME
** File description:
** FILE DESCRIPTION
*/

#ifndef B_OOP_400_BER_4_1_TEKSPICE_NIKLAS_SCHEFFLER_4069_NOT_HPP
#define B_OOP_400_BER_4_1_TEKSPICE_NIKLAS_SCHEFFLER_4069_NOT_HPP

#include <string>

#include "../IComponent.hpp"
#include "../PinManager.hpp"
#include "../Gates.hpp"
#include "../Help.hpp"

namespace nts
{
    class not_4069 : public IComponent
    {
    public:
        not_4069(std::string const &value);
        ~not_4069() = default;

        void simulate(std::size_t tick) override;
        Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, IComponent &other, std::size_t
        otherPin) override;
        void dump() const override;

    private:
        PinManager pins;
    };

}

#endif //B_OOP_400_BER_4_1_TEKSPICE_NIKLAS_SCHEFFLER_4069_NOT_HPP
