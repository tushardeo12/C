int main(int argc, char const *argv[])
{int stnum,ndnum,rdnum;
    printf("enter 1st number - ");
    scanf("%d",&stnum);
    printf("enter 2nd number - ");
    scanf("%d",&ndnum);
    printf("enter 3rd number - ");
    scanf("%d",&rdnum);
    if (stnum>ndnum && stnum>rdnum)
    {
        printf("%d is greatest",stnum );
    }
    else if (ndnum>stnum && ndnum>rdnum)
    {
        printf("%d is greatest",ndnum );
    }
    else 
    {
        printf("%d is greatest",rdnum );
    }
    
    return 0;
}
