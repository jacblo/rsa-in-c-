#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <string>
#include <chrono>
#include </home/y4/Documents/cpp/lib/bigint.cpp>
#include </home/y4/Documents/cpp/lib/bigint.h>

using namespace std;

/*Bigint milSinceEpoch(){
    using namespace std::chrono;
    milliseconds ms = duration_cast< milliseconds >(
        system_clock::now().time_since_epoch()
    );
    return ms.count();
}

Bigint binaryToDec(string in){
    Bigint out = 0;
    for(int i = 0; i<in.size(); i++){
        char x = in[in.size()-1-i];
        int y = 0;
        if(x == '1'){
            y = 1;
        }
        out += y * pow(2,i);
    }
    return out;
}

Bigint modExp(Bigint x, Bigint y, Bigint p)
{
    Bigint res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y % 2 == 1){
            res = (res * x) % p;
        }
        // y must be even now
        y = y >> Bigint(1); // y = y/2
        x = (x * x) % p;
    }
    return res;
}

bool miller_rabin(Bigint n, Bigint k)
{
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    Bigint r = 0;
    Bigint s = n - 1;
    while (s % 2 == 0)
    {
        r += 1;
        s = s / Bigint(2);
    }
    for (Bigint i = 0; i < k; i+=1)
    {
        srand(i * Bigint(milSinceEpoch()));
        Bigint a = Bigint(rand()) % n - 1 + 2;
        Bigint x = modExp(a, s, n);
        if (x == 1 || x == n - 1)
        {
            continue;
        }
        for (Bigint i2 = 0; i2 < r - 1; i2+=1)
        {
            
            x = modExp(x, 2, n);
            if (x == n - 1)
            {
                break;
            }
        }
        if (x == 1 || x == n - 1)
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

Bigint gcd(Bigint p,Bigint q){
    while(q != 0){
        p = q;
        q = p%q;
    }
    return p;
}

Bigint genPrime(Bigint k){
    string xStr = "";
    for(Bigint y = 0; y < k; y+=1){
        xStr += "1";
    }
    

    string yStr = "1";
    for(Bigint z = 0; z < k-1; z+=1){
        yStr += "0";
    }
    Bigint x = binaryToDec(xStr);
    Bigint y = binaryToDec(yStr);
    Bigint p = 0;
    Bigint counter = 0;
    

    while(true){
        srand(counter * Bigint(milSinceEpoch()));
        p = Bigint(rand()) % x + y;
        
        if(miller_rabin(p,40)){
            
            break;
        }

        counter +=1;
    }
    return p;
}*/


int main()
{
    //cout<<genPrime(512);
    /*big*/int x = 4;
    x += 5;
    x += x*5;
    cout<<x;
    return 0;
}