// Derive a <code>Classic</code> class that adds an array of <code>char</code> members that will hold a string
// identifying the primary work on the `CD`.

#include "ch13_2_cd.h"

class Classic : public Cd
{
private:
    char *primaryWork;

public:
    Classic(const char *pw, const char *pd, const char *lb, int n, double x);
    Classic(const Classic &d);
    Classic();                   // needed - line 29
    virtual ~Classic();          // needed - dynamic memory allocation
    virtual void Report() const; // reports all Classic data
    virtual Classic &operator=(const Classic &d);
};