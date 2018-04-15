#include "ElapsedTime.h"

ElapsedTime::ElapsedTime(unsigned long intervalMS)
: intervalMS_(intervalMS)
{
  rst();
}

bool ElapsedTime::chk()
{
  ud();
  if(elapsed_)
  {
    rst();
    return true;
  }
  else
  {
    return false;
  }
}
void ElapsedTime::ud()
{
  if(!elapsed_) elapsed_ = millis() - prevTimeMS_ > intervalMS_ ? true : false;
}
void ElapsedTime::rst()
{
  elapsed_ = false;
  prevTimeMS_ = millis();
}
