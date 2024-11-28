#include<stdio.h>
#include<conio.h>
void main()
{
    int u,d,r,l,nod;
    char name[100],phno[10];
    char city[100];
    printf("Name of the Customer \n");
    scanf("%s", name);
    printf("Place of the Customer \n");
    scanf("%s", city);
    printf("\n Enter the ph no \n");
    scanf("%s", phno);
    printf("\n Enter the no of days \n");
    scanf("%d", &nod);

    printf("\n CAR RENTAL APPLICATION \n");
    printf("\n ----------------------- \n");
    printf("\n Press 1 for Deluxe Vehicles \n");
    printf("\n Press 2 for Long or Road Trip Vehicles \n");
    printf("\n Press 3 for Luxury Vehicle \n");
    printf("\n ---------------------------- \n");
    printf("\n Press any Option: \n");
    scanf("%d", &u);
    switch(u)
    {
        case 1:
        printf("\n You have chosen Deluxe Vehicles \n");
        printf("\n Deluxe Vehicle Available are \n");
        printf("\n Maruti ZEN, OMNI, V.POLO \n");
        printf("\n ------------------------------ \n");
        printf("\n do u want to hire, Press 1 | ZEN, 2 | OMNI, 3 | POLO \n");
        scanf("%d", &d);
        
        switch(d)
        {
            case 1:
            printf("\n You have selected ZEN | %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;

            case 2:
            printf("\n You have selected OMNI | %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;

            case 3:
            printf("\n You have selected Volkswagen Polo | %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;
        }
        break;

        case 2:
        printf("\n You have chosen Long Trip Vehicles \n");
        printf("\n Vehicles Available are \n");
        printf("\n TATA SUMO, TAVERA, TOOFAN \n");
        printf("\n ----------------------------- \n");
        printf("\n do u want to hire , press 1 | TATA, 2 | TAVERA, 3 | TOOFAN \n");
        scanf("%d", &r);
        switch (r)
        {
            case 1:
            printf("\n You have selected TATA SUMO | %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;

            case 2:
            printf("\n You have selected TAVERA | %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;

            case 3:
            printf("\n You have selected TOOFAN | %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;

        }
        break;

        case 3:
        printf("\n You have chosen Luxury Cars");
        printf("\n Luxury Vehicles Available are \n");
        printf("\n BENZ, BMW, AUDI \n");
        printf("\n ------------------------------ \n");
        printf("\n Do u want to hire, Press 1 | Benz, 2 | BMW, 3 | Audi \n");
        scanf("%d", &l);
        switch(l)
        {
            case 1:
            printf("\n You have selected Benz | Cost %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;

            case 2:
            printf("\n You have selected BMW | %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;

            case 3:
            printf("\n You have sel0ected Audi | %ldrs per day \n ie total %ldRs\n",120000/nod,120000);
            break;
        }
        break;
    }

    printf("%s \n",name);
    printf("%s \n",city);
    printf("%s \n",phno);
    printf("%d \n",nod);
    getch();
}
