#ifndef PRARIEDOGAPP_H
#define PRARIEDOGAPP_H

#include "MooseApp.h"

class PrariedogApp : public MooseApp
{
public:
  PrariedogApp(InputParameters parameters);
  static InputParameters validParams();

  virtual ~PrariedogApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* PRARIEDOGAPP_H */
