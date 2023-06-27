/****************************************************************/
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*          All contents are licensed under LGPL V2.1           */
/*             See LICENSE for full restrictions                */
/****************************************************************/
#include "EventInserter.h"

registerMooseObject("PrariedogApp", EventInserter);

InputParameters EventInserter::validParams()
{
  auto params = EventInserterBase::validParams();

  params.addRequiredParam<Real>("mean", "Mean (time) of probability distribution");

  return params;
}

EventInserter::EventInserter(const InputParameters & parameters) :
    EventInserterBase(parameters),
    _mean(getParam<Real>("mean"))
{
}

Real
EventInserter::computeMean()
{
  return _mean;
}
