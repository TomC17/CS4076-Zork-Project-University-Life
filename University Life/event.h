#ifndef EVENT_H
#include <string>
#define EVENT_H
using namespace std;

class Event {
public:
  Event(string text, string leftOptiontext, string rightOptiontext,
        string eventOverText, string eventBeginText,
        string pixmapCharacterResource, bool isEnd, bool isSolo,
        int locationLeft, int locationRight);
  string getLocation(int location);
  string text;
  string leftOptiontext;
  string rightOptiontext;
  Event *leftOption;
  Event *rightOption;
  string eventOverText;
  string eventBeginText;
  int locationLeft;
  int locationRight;
  bool isSolo;
  bool isEnd;
  string pixmapCharacterResource;
};

#endif // EVENT_H
