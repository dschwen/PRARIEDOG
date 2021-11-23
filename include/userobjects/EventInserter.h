/****************************************************************/
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*          All contents are licensed under LGPL V2.1           */
/*             See LICENSE for full restrictions                */
/****************************************************************/
#ifndef EVENTINSERTER_H
#define EVENTINSERTER_H

#include "EventInserterBase.h"

/**
 * This UserObject manages the insertion and timing of events in the simulation
 * domain. It manages a list of events with their insertion times and their center
 * positions.
 */
class EventInserter : public EventInserterBase
{
public:
  EventInserter(const InputParameters & parameters);

  static InputParameters validParams();

protected:
  /// Compute the mean event timing, required for derived class
  virtual Real computeMean();

  /// Mean event time period
  const Real _mean;
};

#endif //EVENTINSERTER_H
