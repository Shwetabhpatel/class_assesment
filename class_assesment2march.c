# include<stdio.h>
void main()
{
  
    float price,cgst,sgst,gst,total,disc,final,a,b;

    printf("\n Enter the product price ");
    scanf("%f",&price);

    printf("\n Enter the cgst percentage ");
    scanf("%f",&cgst);
    a=(price*cgst)/100;
    printf("\n cgst is : Rs %0.2f",a);
      printf("\n Enter the sgst percentage ");

    scanf("%f",&sgst);
    b=(price*sgst)/100;
    printf("\n sgst is : Rs %0.2f",b);

    gst=a+b;
    printf("\n Total gst is : Rs %0.2f",gst);


    total=price+a+b;
    printf("\n Total price including gst is : Rs %0.2f",total);

    printf("\n Enter discount percentage  ");
    scanf("%f",&disc);

   float discount;
   discount=(total*disc)/100;
   final=total-discount;

   printf("\n Final price of product is : Rs %0.2f",final);
  
}