#ifndef ELAPSEDTIME_H
#define ELAPSEDTIME_H

#include "Arduino.h"

#ifndef INTERVAL_TYPE
  #define INTERVAL_TYPE unsigned int
#endif

class ElapsedTime
{
public:
  ElapsedTime(INTERVAL_TYPE intervalMS);

  bool chk();
  void ud();
  void rst();

private:

  bool elapsed_;
  unsigned long prevTimeMS_;
  INTERVAL_TYPE intervalMS_;
};

#endif /* end of include guard: ELAPSEDTIME_H */
