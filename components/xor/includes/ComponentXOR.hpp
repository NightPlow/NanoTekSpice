/*
** EPITECH PROJECT, 2019
** OOP_nanotekspice_2018
** File description:
** 4071Component
*/

#ifndef COMPONENTXOR_HPP_
    #define COMPONENTXOR_HPP_

#include "AbstractComponent.hpp"

namespace nts {
    class ComponentXOR : public nts::AbstractComponent {
        public:
            ComponentXOR();
            ComponentXOR(const ComponentXOR &);
            nts::Tristate compute(std::size_t pin = 1) final;
            void dump() const;
            std::unique_ptr<nts::IComponent> clone();
    };
}

#endif /* !COMPONENT4071_HPP_ */
