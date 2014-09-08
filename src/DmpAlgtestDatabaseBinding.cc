#include <boost/python.hpp>
#include "DmpAlgtestDatabase.h"

BOOST_PYTHON_MODULE(libDmpAlgtestDatabase){
  using namespace boost::python;

  class_<DmpAlgtestDatabase,boost::noncopyable,bases<DmpVAlg> >("DmpAlgtestDatabase",init<>());
}
