/*
** EPITECH PROJECT, 2019
** OOP_nanotekspice_2018
** File description:
** 4071Component
*/

#include "Utils.hpp"
#include "ComponentNOT.hpp"

nts::ComponentNOT::ComponentNOT()
{
    this->setName(std::string("not"));
}

nts::Tristate nts::ComponentNOT::compute(std::size_t pin)
{
    if (pins.at(2) != nullptr && pins.at(1) != nullptr)
        *pins.at(2) = ~(*pins.at(1));
    return *pins.at(pin);
}

std::unique_ptr<nts::IComponent> nts::ComponentNOT::clone(const std::string &value)
{
    auto component = std::make_unique<nts::ComponentNOT>(*this);
    (void) value;
    component.get()->pins.resize(3);
    return component;
}
