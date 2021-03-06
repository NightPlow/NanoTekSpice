/*
** EPITECH PROJECT, 2019
** OOP_nanotekspice_2018
** File description:
** ComponentInput implementation
*/

#include "Utils.hpp"
#include "ComponentInput.hpp"

nts::ComponentInput::ComponentInput()
{
    this->setName(std::string("input"));
}

std::unique_ptr<nts::IComponent> nts::ComponentInput::clone(const std::string &value)
{
    auto component = std::make_unique<nts::ComponentInput>(*this);
    (void) value;
    component.get()->pins.resize(2);
    return component;
}

void nts::ComponentInput::setInput(nts::Tristate value)
{
}
