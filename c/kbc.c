#include <stdio.h>
#include <conio.h>
int main()
{
    printf("\n Rules of KBC game...");
    printf("\n If all questions's answers are right, then you will get prize. \n If you give wrong answer of any question, the game will be quite automatically.");
    printf("\n If you quite the game at middle, you can not get any prize");
    printf("\n For the quite game, you have to write '0' ");

    int rs1, rs2, rs3, rs4, rs5, rs6, rs7, rs8, rs9, rs10;
    
    char op1, op2, op3, op4, op5, op6, op7, op8, op9, op10;

    char name[30];
    int quite;
    printf("\n\n\n welcome user..");
    printf("\nEnter your name without any spaces: ");
    scanf("%s", &name);
    printf("\n \n Are you ready to play KBC game..  Good luck %s...", name);
    getch();

    printf("\n\n Game is starting...");

    printf("\n \n \nQ.1 Which type of extention is used to save file in c programming?");
    printf("\nA) .c");
    printf("\nB) .k");
    printf("\nC) .h");
    printf("\nD) .m");
    printf("\nEnter option: ");
    scanf("%c", &op1);

    if (op1 == 'a' || op1 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs1);
    }

    else if (op1 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op1);

            if (op1 == 'a' || op1 == 'A')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs1);
            }

            else
            {
                printf("\n Wrong option... correct answer is A) .c");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is A) .c");
        exit(0);
    }

    printf("\n \n \nQ.2 which of these is non procedural language?");
    printf("\nA) c");
    printf("\nB) sql");
    printf("\nC) python");
    printf("\nD) .html");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op2);

    if (op2 == 'b' || op2 == 'B')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs2);
    }

    else if (op2 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op2);

            if (op2 == 'b' || op2 == 'B')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs2);
            }

            else
            {
                printf("\n Wrong option... correct answer is B) sql");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is B) sql");
        exit(0);
    }
    
    printf("\n \n \nQ.3 C language is a ______ language.");
    printf("\n A) case sensitive \n B) non procedural  \n C) markup language \n D) query language ");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op3);

    if (op3 == 'a' || op3 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs3);
    }

    else if (op3 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op3);

            if (op3 == 'a' || op3 == 'A')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs3);
            }

            else
            {
                printf("\n Wrong option... correct answer is A) case sensitive");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is A) case sensitive");
        exit(0);
    }
    
    printf("\n \n \nQ.4 Which of these is not a search engine?");
    printf("\n A) Google \n B) Bing \n C) Mozilla Firefox \n D) Yahoo");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op4);

    if (op4 == 'c' || op4 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs4);
    }

    else if (op4 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op4);

            if (op4 == 'c' || op4 == 'C')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs4);
            }

            else
            {
                printf("\n Wrong option... correct answer is C) Mozilla Firefox");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is C) Mozilla Firefox");
        exit(0);
    }
    
    printf("\n \n \nQ.5 which header file is used for printf & scanf function in c programming?");
    printf("\n A) <math.h> \n B) <conio.h> \n C) <stdio.h> \n D) <string.h>");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op5);

    if (op5 == 'c' || op5 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs5);
    }

    else if (op5 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op5);

            if (op5 == 'c' || op5 == 'C')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs5);
            }

            else
            {
                printf("\n Wrong option... correct answer is C) <stdio.h>");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is C) <stdio.h>");
        exit(0);
    }
    
    printf("\n \n \nQ.6  Compiler is used in _______  and many more languages.");
    printf("\n A) c, c++, java \n B) html, css \n C) python \n D) java script");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op6);

    if (op6 == 'a' || op6 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs6);
    }

    else if (op6 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op6);

            if (op6 == 'a' || op6 == 'A')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs6);
            }

            else
            {
                printf("\n Wrong option... correct answer is A) c, c++, java");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is A) c, c++, java");
        exit(0);
    }
    
     printf("\n \n \nQ.7 which of these is not a audio or video format?");
    printf("\n A) .ogg \nB) .mp4 \n C) .mpz \n D) .mp3");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op7);

    if (op7 == 'c' || op7 == 'C')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs7);
    }

    else if (op7 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op7);

            if (op7 == 'c' || op7 == 'C')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs7);
            }

            else
            {
                printf("\n Wrong option... correct answer is C) .mpz");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is C) .mpz");
        exit(0);
    }
    
    printf("\n \n \nQ.8 which of these file type can run in ubuntu?");
    printf("\n A) .deb \n B) .exe \n C) .dex \n D) .lua");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op8);

    if (op8 == 'a' || op8 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs8);
    }

    else if (op8 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op8);

            if (op8 == 'a' || op8 == 'A')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs8);
            }

            else
            {
                printf("\n Wrong option... correct answer is A) .deb");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is A) .deb");
        exit(0);
    }
    
    printf("\n \n \nQ.9 What is the full form of ADB command?");
    printf("\n A) Android Device Batch \n B) Android Deploy Bin \n C) Access Debug Batch \n D) Android Debug Bridge");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op9);

    if (op9 == 'd' || op9 == 'D')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs9);
    }

    else if (op9 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op9);

            if (op9 == 'd' || op9 == 'D')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs9);
            }

            else
            {
                printf("\n Wrong option... correct answer is D) Android Debug Bridge");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is D) Android Debug Bridge");
        exit(0);
    }
    
    printf("\n \n \nQ.10 which of these is right statement according to clone repository from Github in any command-line?");
    printf("\n A) git clone https://github.com/user_name/repository_name.git \n B) git push -m origin master \n C) git config --global user.name user_name \n D) git clone file.git");
    getch();
    printf("\nEnter option: ");
    scanf("%c", &op10);

    if (op10 == 'a' || op10 == 'A')
    {
        printf("\nCorrect answer");
        printf("\nYou won %d rs.", rs10);
    }

    else if (op10 == '0')
    {
        printf("\nDo you want to exit?......      Enter '1' for exit or '2' for continue game... ");
        scanf("%d", &quite);

        if (quite == 1)
        {
            printf("\nExiting...");
            exit(0);
        }

        else if (quite == 2)
        {
            printf("\nContinued to game...");
            getch();
            printf("\n Choose the option: ");
            scanf("%c", &op10);

            if (op10 == 'a' || op10 == 'A')
            {
                printf("\nCorrect answer");
                printf("\nYou won %d rs.", rs10);
            }

            else
            {
                printf("\n Wrong option... correct answer is A) git clone https://github.com/user_name/repository_name.git");
                exit(0);
            }
        }
    }

    else
    {
        printf("\n Wrong option... correct option is A) git clone https://github.com/user_name/repository_name.git");
        exit(0);
    }

}