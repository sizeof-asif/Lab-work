#include <stdio.h>

int main() {
    long long int hashmatSoldiers, opponentSoldiers;

    while (scanf("%lld %lld", &hashmatSoldiers, &opponentSoldiers) != EOF) {
        printf("%lld\n", opponentSoldiers - hashmatSoldiers);
    }

    return 0;
}
