#include "DmpAlgtestDatabase.h"
#include "DmpSvcDatabase.h"

//-------------------------------------------------------------------
DmpAlgtestDatabase::DmpAlgtestDatabase()
 :DmpVAlg("testDatabase")
{
  position=0;
	data=0;
}

//-------------------------------------------------------------------
DmpAlgtestDatabase::~DmpAlgtestDatabase(){
}

//-------------------------------------------------------------------
bool DmpAlgtestDatabase::Initialize(){
  return true;
}

//-------------------------------------------------------------------
bool DmpAlgtestDatabase::ProcessThisEvent(){
  //gDatabaseSvc->AppendData(position,data);
  data=gDatabaseSvc->GetData(position);
	std::cout<<position<<": "<<data<<std::endl;
	position++;
  return true;
}

//-------------------------------------------------------------------
bool DmpAlgtestDatabase::Finalize(){
  return true;
}

