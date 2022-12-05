/*
David Reyes-coy
Class 4883
Assignment 161 Trafic Lights
*/
#include <cstdio>
#include <vector>

using namespace std;

const int SECONDS = 60;
const int HOURS = 60 * SECONDS;
const int FHOURS = 5 * HOURS;


bool Green(vector<int>& times, vector<int>& doubleTimes, const int &currentTime)
{
    for (int i = 0; i < times.size(); ++i)
    {
        if (! (currentTime % doubleTimes[i] < times[i] - 5))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int firstLight;
    
    while (scanf("%d", &firstLight), firstLight)
    {
        vector<int> times(1, firstLight);
        vector<int> xTimes(1, firstLight * 2);
        
        int num;
        int temp = firstLight;
        
        while (scanf("%d", &num), num)
        {
            times.push_back(num);
            xTimes.push_back(num * 2);
            if (num < temp)
                temp = num;
        }
        
        int currentTime = temp * 2;
        
        bool isGreen;
        
        while (!(isGreen = Green(times, xTimes, currentTime)) && currentTime <= FHOURS)
        {
            ++currentTime;
        }
        
        if (isGreen)
        {
            int hr = currentTime / HOURS;
            
            printf("0%d:%02d:%02d\n", currentTime / HOURS, (currentTime - hr * HOURS) / 
            SECONDS, currentTime % SECONDS);
        }
        else
        {
            printf("Signals fail to synchronise in 5 hours\n");
        }
    }
}