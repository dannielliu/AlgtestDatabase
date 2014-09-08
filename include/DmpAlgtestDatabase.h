#ifndef DmpAlgtestDatabase_H
#define DmpAlgtestDatabase_H

#include "DmpVAlg.h"
//#include "DmpSvcDataBase.h"

class DmpAlgtestDatabase : public DmpVAlg{
/*
 *  DmpAlgtestDatabase
 *
 */
public:
  DmpAlgtestDatabase();
  ~DmpAlgtestDatabase();

  //void Set(const std::string &type,const std::string &value);
  // if you need to set some options for your algorithm at run time. Overload Set()
  bool Initialize();
  bool ProcessThisEvent();    // only for algorithm
  bool Finalize();

private:
  int position;
	int data;
};

#endif
