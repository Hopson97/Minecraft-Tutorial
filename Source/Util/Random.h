#ifndef RANDOM_H_INCLUDED
#define RANDOM_H_INCLUDED

#include <random>
#include <cstdint>
#include <ctime>

namespace Random
{
    void init();

    int64_t intInRange(int64_t low, int64_t high);
    float floatInRange(float low, float high);

    template<typename Engine>
    class Generator
    {
        public:
            Generator()
            {
                m_randomEngine.seed(std::time(nullptr));
            }

            int64_t intInRange(int64_t low, int64_t high)
            {
                std::uniform_int_distribution<int64_t> dist (low, high);
                return dist(m_randomEngine);
            }

            float floatInRange(float low, float high)
            {
                std::uniform_real_distribution<float> dist (low, high);
                return dist(m_randomEngine);
            }

            template<typename T>
            T numberInRange(T low, T high)
            {
                std::uniform_real_distribution<T> dist (low, high);
                return dist(m_randomEngine);
            }

        private:
            Engine m_randomEngine;
    };


}

#endif // RANDOM_H_INCLUDED
