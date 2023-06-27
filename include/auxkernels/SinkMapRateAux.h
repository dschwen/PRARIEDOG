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

#ifndef SINKMAPRATEAUX_H
#define SINKMAPRATEAUX_H

#include "SinkMapAux.h"

class SinkMapRateAux : public SinkMapAux
{
public:
  SinkMapRateAux(const InputParameters &parameters);
  static InputParameters validParams();

protected:
  virtual Real computeValue();

  const MaterialProperty<Real> & _diffusivity;
  const VariableValue & _v;
};

#endif // SINKMAPRATEAUX_H
