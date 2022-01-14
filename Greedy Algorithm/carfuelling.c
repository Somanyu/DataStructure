#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int MinRefills(int x[], int n, int L) {
    int numRefills = 0, currentRefill = 0;

    while (currentRefill <= n) {
        int lastRefill = currentRefill;

        while (currentRefill <= n && x[currentRefill+1] - x[lastRefill] <= L) {
            currentRefill = currentRefill+1;
        }

        if (currentRefill == lastRefill) 
            return "IMPOSSIBLE"; // IMPOSSIBLE
        if (currentRefill <= n) {
            numRefills = numRefills+1;
        }
    }

    return numRefills;
    

}

int main() {
    int x[] = {};
    int n, L;
    int result = MinRefills(x, n, L);
}