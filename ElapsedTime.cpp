#include "ElapsedTime.h"

ElapsedTime(unsigned long intervalMS)
: intervalMS_(intervalMS)
{
  reset();
}

bool hasElapsed()
{
  update();
  if(elapsed_)
  {
    reset();
    return true;
  }
  else
  {
    return false;
  }
}
void update()
{
  if(!elapsed) elapsed_ = millis() - prevTimeMS_ > intervalMS_ ? true : false;
}
void reset()
{
  elapsed_ = false;
  prevTimeMS_ = millis();
}
