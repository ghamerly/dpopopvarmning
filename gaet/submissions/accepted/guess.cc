#include <cstdio>
#include <cstring>

int main(void) {
    int lo = 1, hi = 1000;
    while (true) {
        int m = (lo+hi)/2;
        printf("%d\n", m);
        fflush(stdout);
        char res[1000];
        scanf("%s", res);
        if (!strcmp(res, "rigtigt")) break;
        if (!strcmp(res, "mindre")) hi = m-1;
        else lo = m+1;
    }
    return 0;
}
