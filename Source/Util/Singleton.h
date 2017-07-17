#ifndef SINGLETON_H_INCLUDED
#define SINGLETON_H_INCLUDED

class Singleton
{
    public:
        Singleton(const Singleton& other) = delete;
        Singleton(Singleton&& other) = delete;

        Singleton& operator =(const Singleton& other) = delete;
        Singleton& operator =(Singleton&& other) = delete;

    protected:
        Singleton() = default;
        virtual ~Singleton() = default;
};

#endif // SINGLETON_H_INCLUDED
