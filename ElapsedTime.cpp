#include "ElapsedTime.h"

ElapsedTime::ElapsedTime(INTERVAL_TYPE intervalMS)
: intervalMS_(intervalMS)
{
  rst();
}

bool ElapsedTime::chk(bool reset)
{
  ud();
  if(elapsed_)
  {
    if(reset) rst();
    return true;
  }
  else
  {
    return false;
  }
}
void ElapsedTime::ud()
{
  if(!elapsed_) elapsed_ = millis() - prevTimeMS_ >= intervalMS_ ? true : false;
}
void ElapsedTime::ud(bool elapsed)
{
  elapsed_ = elapsed;
}
void ElapsedTime::rst()
{
  elapsed_ = false;
  prevTimeMS_ = millis();
}
void ElapsedTime::setInterval(INTERVAL_TYPE intervalMS)
{
  intervalMS_ = intervalMS;
  rst();
}
