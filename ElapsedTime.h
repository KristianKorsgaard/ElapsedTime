#ifndef ELAPSEDTIME_H
#define ELAPSEDTIME_H

#include "Arduino.h"

class ElapsedTime
{
public:
  ElapsedTime(unsigned long intervalMS);

  bool hasElapsed();
  void update();
  void reset();

private:

  bool elapsed_;
  unsigned long prevTimeMS_, intervalMS_;
};

#endif /* end of include guard: ELAPSEDTIME_H */
