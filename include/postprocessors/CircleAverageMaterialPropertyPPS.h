/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/

#ifndef CIRCLEAVERAGEMATERIALPROPERTYPPS_H
#define CIRCLEAVERAGEMATERIALPROPERTYPPS_H

#include "GeneralPostprocessor.h"

class CircleAverageMaterialPropertyPPS;
class CircleAverageMaterialProperty;

template<>
InputParameters validParams<CircleAverageMaterialPropertyPPS>();

/**
 * This PPS just retrieves the value from CircleAverageMaterialProperty User Object
 */
class CircleAverageMaterialPropertyPPS : public GeneralPostprocessor
{
public:
  CircleAverageMaterialPropertyPPS(const InputParameters & parameters);

  virtual void initialize() {};  // not used
  virtual void execute() {};  // not used
  virtual Real getValue();

protected:
  const CircleAverageMaterialProperty & _uo;
  const Point _p;
  const Real _radius;
};

#endif /* CIRCLEAVERAGEMATERIALPROPERTYPPS_H */
