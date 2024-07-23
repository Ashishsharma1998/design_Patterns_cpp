#ifndef OBSERVER
#define OBSERVER
#include<string>
using namespace std;

class observer{
    public: 
    virtual void update(string weather)=0;
};

#endif
