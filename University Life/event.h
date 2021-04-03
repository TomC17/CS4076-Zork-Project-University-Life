#ifndef EVENT_H
#include <string>
#define EVENT_H
using namespace std;

class Event {
public:
  Event(string text, string leftOptiontext, string rightOptiontext,
        Event leftOption, Event rightOption, string eventOverText,
        string eventBeginText, int location, string pixmapCharacterResource);
  Event(string text, string leftOptiontext, string rightOptiontext,
        Event leftOption, Event rightOption);
  Event(string text, string leftOptiontext, string rightOptiontext);
  string getLocation(int location);
  string text;
  string leftOptiontext;
  string rightOptiontext;
  Event *leftOption;
  Event *rightOption;
  string eventOverText;
  string eventBeginText;
  int location;
  string pixmapCharacterResource;
};

#endif // EVENT_H
