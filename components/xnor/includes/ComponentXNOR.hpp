/*
** EPITECH PROJECT, 2019
** OOP_nanotekspice_2018
** File description:
** 4071Component
*/

#ifndef COMPONENTXNOR_HPP_
    #define COMPONENTXNOR_HPP_

#include "AbstractComponent.hpp"

namespace nts {
    class ComponentXNOR : public nts::AbstractComponent {
        public:
            ComponentXNOR();
            ComponentXNOR(const ComponentXNOR &);
            nts::Tristate compute(std::size_t pin = 1) final;
            void dump() const;
            std::unique_ptr<nts::IComponent> clone();
    };
}

#endif /* !COMPONENT4071_HPP_ */
