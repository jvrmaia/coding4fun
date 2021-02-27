#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char name[100];
    scanf("%s ", name);
    if (strcmp(name, "vertebrado") == 0) {
        scanf("%s ", name);
        if (strcmp(name, "ave") == 0) {
            scanf("%s ", name);
            if (strcmp(name, "carnivoro") == 0)
                printf ("aguia\n");
            else
                printf ("pomba\n");
        }
        else {
            scanf("%s ", name);
            if (strcmp(name, "onivoro") == 0)
                printf ("homem\n");
            else
                printf ("vaca\n");
        }
    }
    else {
        scanf("%s ", name);
        if (strcmp(name, "inseto") == 0) {
            scanf("%s ", name);
            if (strcmp(name, "hematofago") == 0)
                printf ("pulga\n");
            else
                printf ("lagarta\n");
        }
        else {
            scanf("%s ", name);
            if (strcmp(name, "hematofago") == 0)
                printf ("sanguessuga\n");
            else
                printf ("minhoca\n");
        }
    }
    return 0;
}
