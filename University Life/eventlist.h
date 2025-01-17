#ifndef EVENTLIST_H
#define EVENTLIST_H
#include "event.h"

class EventList {
public:
  EventList();
  Event *getNextEvent();
  ~EventList();
  Event *arrayevents[20];
    Event *createDayOneEvent();
  Event *createFinalEvent();
  Event *createNoEvent();
  void createMissingDogEvent();
  void createPoem();
  void createShoppingList();
  void createGoForStrollEvent();
  int eventNumber=0;

private:
  // void createEvent();
};

#endif // EVENTLIST_H
