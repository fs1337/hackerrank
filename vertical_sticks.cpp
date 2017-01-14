#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,k;
    int number;
    cin>>number;
    int N;
    for(k = 0; k < number; k ++)
    {
        cin>>N;
        int ii;
        float *p = new float[N];
        float *v = new float[N];
        for(ii = 0; ii < N; ii ++)
        {
            cin>>p[ii];
        }
        
        for (i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(p[i] <= p[j])
                {
                    v[i] ++;
                }
            }
        }  
        
        for (i=0;i<N;i++)
        {
            v[i] = (N+1)/(v[i] + 1);
        } 
        
        float sum=0;
        for(ii = 0; ii < N; ii ++)
        {
            sum += v[ii];
        }
        
        printf("%.2f\n", sum);
    }
    
    return 0;
}
