#include "Random.h"


namespace Random
{
    std::mt19937_64 randomEngine;

    void init()
    {
        randomEngine.seed(std::time(nullptr));
    }

    int64_t intInRange(int64_t low, int64_t high)
    {
        std::uniform_int_distribution<int64_t> dist (low, high);
        return dist(randomEngine);
    }

    float floatInRange(float low, float high)
    {
        std::uniform_real_distribution<float> dist (low, high);
        return dist(randomEngine);
    }
}
