#ifndef MUTEX_LOCK
#define MUTEX_LOCK

#include<mutex>
#include<thread>

class MutexLock{
    public:
        
    private:
        std::mutex _mtx;
        int holder_;
}

#endif