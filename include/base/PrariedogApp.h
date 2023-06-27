#pragma once

#include "MooseApp.h"

class PrariedogApp : public MooseApp
{
public:
  PrariedogApp(InputParameters parameters);
  static InputParameters validParams();

  static void registerApps();
  static void registerAll(Factory &f, ActionFactory &af, Syntax &s);
};
