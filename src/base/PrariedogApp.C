#include "PrariedogApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "MooseSyntax.h"

InputParameters PrariedogApp::validParams()
{
  auto params = MooseApp::validParams();
  return params;
}

PrariedogApp::PrariedogApp(InputParameters parameters) :
    MooseApp(parameters)
{
  PrariedogApp::registerAll(_factory, _action_factory, _syntax);
}

void PrariedogApp::registerAll(Factory &f, ActionFactory &af, Syntax &s)
{
  Registry::registerObjectsTo(f, {"PrariedogApp"});
  Registry::registerActionsTo(af, {"PrariedogApp"});
  registerDataFilePath();
}

void PrariedogApp::registerApps()
{
  registerApp(PrariedogApp);
}

// External entry point for dynamic application loading
extern "C" void PrariedogApp__registerApps() { PrariedogApp::registerApps(); }
