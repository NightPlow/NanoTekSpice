/*
** EPITECH PROJECT, 2019
** OOP_nanotekspice_2018
** File description:
** 4071Component
*/

#ifndef COMPONENTAND_HPP_
    #define COMPONENTAND_HPP_

#include <vector>
#include "AbstractComponent.hpp"

namespace nts {
    class ComponentAND : public nts::AbstractComponent {
        public:
            ComponentAND();
            ComponentAND(const ComponentAND &);
            nts::Tristate compute(std::size_t pin = 1) final;
            void dump() const;
            std::unique_ptr<nts::IComponent> clone();
    };
}

#endif /* !COMPONENT4071_HPP_ */
