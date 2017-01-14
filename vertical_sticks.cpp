#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

/*So the algorithm is simply to find this value for each stick and add up the expectation. 
For example, starting with heights of [3,2,5,3,3,4,1,2]
, the number of sticks with a greater or equal height is [5,7,1,5,5,2,8,7]
 so the expectation is 9/6+9/8+9/2+9/6+9/6+9/3+9/9+9/8=15.25
This is easy to program: for example a single line in R

V <- function(Y){ (length(Y) + 1) * sum( 1 / (rowSums(outer(Y, Y, "<=")) + 1) ) }*/

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
        delete p;
        delete v; 
        printf("%.2f\n", sum);
    }
    
    return 0;
}
