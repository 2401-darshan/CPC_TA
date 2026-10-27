#include <stdio.h>

struct book
{
    char title[30], author[30], publication[30];
    float price;
};

int main()
{
    struct book b[3];
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nEnter book %d details:\n", i + 1);
        printf("\nEnter title %d: ", i + 1);
        scanf("%s", b[i].title);
        printf("Enter author %d: ", i + 1);
        scanf("%s", b[i].author);
        printf("Enter publication %d: ", i + 1);
        scanf("%s", b[i].publication);
        printf("Enter price %d: ", i + 1);
        scanf("%f", &b[i].price);
    }

    for(i = 0; i < 3; i++)
    {
        printf("\n%s %s %s %.2f", b[i].title, b[i].author,
               b[i].publication, b[i].price);
    }

    return 0;
}