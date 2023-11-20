// Derive a <code>Classic</code> class that adds an array of <code>char</code> members that will hold a string
// identifying the primary work on the `CD`. 

#include "ch13_1_cd.h"

class Classic : public Cd {
    
    private:
        char primaryWork[100];

    public: 
        Classic(const char *pw,const char *pd,const char *lb, int n, double x);
        Classic(const Classic &d);
        Classic();      // needed - line 29
        // ~Classic();  // not needed - lack of dynamic memory allocation in both (thus default is ok)
        virtual void Report() const; // reports all Classic data
        Classic &operator=(const Classic &d);
};