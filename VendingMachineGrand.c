#include <stdio.h>
main()
{
    int a,c,d,e,f,g,i1=65,i2=65,i3=65,i4=30,i5=20,i6=40,i7,i8,i9,i10,i11,i12,i13,i14,i15,i16;
    char ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,x,y,z,b,j,k,l,h,i,m,O,o;
    printf("THE GRAND VENDING MACHINE\n");
    printf("1. Chocolate ice-cream (₹%d)\n",i1);
    printf("2. Vanilla ice-cream (₹%d)\n",i2);
    printf("3. Butterscotch (₹%d)\n",i3);
    printf("CHOOSE ONE OF THE ABOVE (Enter 1 or 2 or 3): ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("You ordered: Chocolate Ice Cream\n");
        printf("Enter O to confirm : ");
        scanf(" %c",&ch3);
        if(ch3=='o'||ch3=='O')
        {
            printf("Enter toppings: \n");
            printf("x) Choco Chips (₹30). \n");
            printf("y) Chocolate syrup (₹20).\n");
            printf("z) Oreo (₹40).\n");
            printf("w) None\n");
            printf("Choose the toppings please (enter the letter mentioned before the topping you want to add): ");
            scanf(" %c",&b);
            if(b=='x')
            {
                printf("Chocolate icecream with Choco Chips (₹%d)\n",i4);
                i7=i1+i4;
                printf("The total price is ₹%d\n",i7);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i7+(i7/20)));
            }
            if(b=='y')
            {
                printf("Chocolate icecream with Chocolate syrup (₹%d)\n",i5);
                i8=i1+i5;
                printf("The total price is ₹%d\n",i8);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i8+(i8/20)));
            }
            if(b=='z')
            {
                printf("Chocolate icecream with Oreo (₹%d)\n",i6);
                i9=i1+i6;
                printf("The total price is ₹%d\n",i9);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i9+(i9/20)));
            }
            if(b=='w')
            {
                printf("Chocolate icecream with no toppings.\n");
                printf("The total price is ₹%d\n",i1);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i1+(i1/20)));
            }
            printf("Is your order %d with %c (Enter O to confirm the order and any other letter to cancel the order.)?\n",a,b);
            scanf(" %c",&ch7);
            if(ch7=='o'||ch7=='O')
            {
                printf("Thank you for ordering!");
            }
            else
            {
                printf("Reorder please, your last order was cancelled due to incorformation.");
            }
        }
        else
        {
            printf("Sorry, your order has been cancelled, order again!");
        }
    }
    if(a==2)
    {
        printf("You ordered: Vanilla Ice Cream\n");
        printf("Enter O to confirm and any other letter to cancel the order: ");
        scanf(" %c",&ch4);
        if(ch4=='o'||ch4=='O')
        {
            printf("Enter toppings: \n");
            printf("h) Choco Chips (₹30). \n");
            printf("i) Chocolate syrup (₹20).\n");
            printf("j) Oreo (₹40).\n");
            printf("n) None\n");
            printf("Choose the toppings please (enter the letter mentioned before the topping you want to add): ");
            scanf(" %c",&ch1);
            if(ch1=='h')
            {
            printf("Vanilla icecream with Choco Chips\n");
            i10=i2+i4;
                printf("The total price is ₹%d\n",i10);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i10+(i10/20)));
            }
            if(ch1=='i')
            {
            printf("Vanilla icecream with Chocolate syrup\n");
            i11=i2+i5;
                printf("The total price is ₹%d\n",i11);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i11+(i11/20)));
            }
            if(ch1=='j')
            {
            printf("Vanilla icecream with Oreo\n");
            i12=i2+i6;
                printf("The total price is ₹%d\n",i12);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i12+(i12/20)));
            }
            if(ch1=='n')
            {
            printf("Vanilla icecream with no toppings.\n");
                printf("The total price is ₹%d\n",i2);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i2+(i2/20)));
            }
            printf("Is your order %d with %c (Enter O to confirm the order and any other letter to cancel the order.)?\n",a,ch1);
            scanf(" %c",&ch6);
            if(ch6=='o'||ch6=='O')
            {
                printf("Thank you for ordering!");
            }
            else
            {
                printf("Reorder please, your last order was cancelled due to incorformation.");
            }
        }
        else
        {
            printf("Sorry, your order has been cancelled, order again!");
        }     
    }
    if(a==3)
    {
        printf("You ordered: Butterscotch icecream\n");
        printf("Enter O to confirm and any other letter to cancel the order: ");
        scanf(" %c",&ch5);
        if(ch5=='o'||ch5=='O')   
        {
            printf("Enter toppings: \n");
            printf("k) Choco Chips (₹30). \n");
            printf("l) Chocolate syrup (₹20).\n");
            printf("m) Oreo (₹40).\n");
            printf("o) None\n");
            printf("Choose the toppings please (enter the letter mentioned before the topping you want to add): ");
            scanf(" %c",&ch2);
            if(ch2=='k')
            {
                printf("Butterscotch icecream with Choco Chips\n");
                i13=i3+i4;
                printf("The total price is ₹%d\n",i13);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i13+(i13/20)));
            }
            if(ch2=='l')
            {
                printf("Butterscotch icecream with Chocolate syrup\n");
                i14=i3+i5;
                printf("The total price is ₹%d\n",i14);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i14+(i14/20)));
            }
            if(ch2=='m')
            {
                printf("Butterscotch icecream with Oreo\n");
                i15=i3+i6;
                printf("The total price is ₹%d\n",i15);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i15+(i15/20)));
            }
            if(ch2=='o')
            {
                printf("Butterscotch icecream with no toppings.\n");
                printf("The total price is ₹%d\n",i3);
                printf("Total Cost to be paid after taxes (5％): ₹%d\n",(i3+(i3/20)));

            }
            printf("Is your order %d with %c (Enter O to confirm the order and any other letter to cancel the order.)?\n",a,ch2);
            scanf(" %c",&ch5);
            if(ch5=='o'||ch5=='O')
            {
                printf("Thank you for ordering!");
            }
            else
            {
                printf("Reorder please, your last order was cancelled due to incorformation.");
            }
        }
        else
        {
            printf("Sorry, your order has been cancelled, order again!");
        }   
    }  
    printf("\n\n\nThank you for using the vending machine.\nMade by: Archit and Aditi.");
}