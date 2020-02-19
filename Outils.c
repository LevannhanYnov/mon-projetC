#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}
// (pas terminer) reveil du personnage
void reveil()
{
    Sleep(2000);
    system("cls");
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("\n");
    }
    printf("       - Dieu : Heee...! Ohhh...! [ ... ] Heee...! Ohhh...! \n");
    getchar();
    printf("\n\n");
    printf("         Reveil toi , es-tu la ?  Mais tu va te reveiller put** de Mer**.\n");
    getchar();
    printf("\n\n");
    printf("         \n");

    Sleep(10000);
    printf("\n");
}
// Terminer
void New_game()
{
    Sleep(2000);
    system("cls");
    Loading();
    reveil();
}
// Terminer
void Continue()
{
    Sleep(2000);
    system("cls");
    Loading();
    reveil();
}
// Terminer
void lignes()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}
// Terminer
void Loading()
{
    for (int i = 0 ; i < 15 ; i++)
    {
// separation de lignes pour mieux voir
        Sleep(0);
        system("cls");
        lignes();
        printf("            loading             [ | ] ");
// separation de lignes pour mieux voir
        Sleep(0);
        system("cls");
        lignes();
        printf("            loading       .     [ / ] ");
// separation de lignes pour mieux voir
        Sleep(0);
        system("cls");
        lignes();
        printf("            loading       . .   [ - ] ");
// separation de lignes pour mieux voir
        Sleep(0);
        system("cls");
        lignes();
        printf("            loading       . . . [ \ ] ");
    }
    system("cls");
}

void Save_game()
{
    Sleep(2000);
    system("cls");
    Loading();
    disp_menu();
}

void Shop()
{
    Sleep(2000);
    system("cls");
    printf("\n");
    printf("     B A C K   [ A ]");
    for (int i = 0 ; i < 5 ; i++)
        {
        printf("\n");
        }
    printf("                                                          -----------------------------------------------------\n");
    printf("                                                                 _|_|_|  _|    _|    _|_|    _|_|_|    \n");
    printf("                                                                _|       _|    _|  _|    _|  _|    _|  \n");
    printf("                                                                 _|_|    _|_|_|_|  _|    _|  _|_|_|    \n");
    printf("                                                                     _|  _|    _|  _|    _|  _|        \n");
    printf("                                                               _|_|_|    _|    _|    _|_|    _|        \n");
    printf("                                                          -----------------------------------------------------\n");

}

void About()
{
    char m;
    Sleep(2000);
    system("cls");
    printf("     B A C K   [ A ]");
    for (int i = 0 ; i < 5 ; i++)
        {
        printf("\n");
        }
    printf("                                                          ----------------------------------------------------- \n");
    printf("                                                              _|_|    _|_|_|      _|_|    _|    _|  _|_|_|_|_|  \n");
    printf("                                                            _|    _|  _|    _|  _|    _|  _|    _|      _|      \n");
    printf("                                                            _|_|_|_|  _|_|_|    _|    _|  _|    _|      _|      \n");
    printf("                                                            _|    _|  _|    _|  _|    _|  _|    _|      _|      \n");
    printf("                                                            _|    _|  _|_|_|      _|_|      _|_|        _|      \n");
    printf("                                                          ----------------------------------------------------- \n");
    for (int i = 0 ; i < 10 ; i++)
        {
        printf("\n");
        }
    printf(" I L L A   M O H A M E D   A B D A L L A H I    -->   D E V E L O P P E R  .\n");
    printf("\n");
    printf(" L E   V A N   N H A N            M E L V I N   -->   D E V E L O P P E R  .\n");
    printf("\n");
    printf(" M O H A M M E D                  A L A O U I   -->   D E V E L O P P E R  .\n");
    printf("\n");
    printf(" E L B O U H S S A I N I          W A L I D     -->   D E V E L O P P E R  .\n");
    scanf("%d",&m);
    if(m == 'a')
        disp_menu();
}

// TERMINER
void Exit()
{
    Sleep(3000);
    system("cls");
    for (int i = 0 ; i < 18 ; i++)
        {
        printf("\n");
        }
    printf("                       ---------------------------------------------------------------------------------------------------------------- \n");
    printf("                           _|_|_|    _|_|      _|_|    _|_|_|        _|_|_|    _|      _|  _|_|_|_|      _|_|_|      _|_|    _|_|_|     \n");
    printf("                         _|        _|    _|  _|    _|  _|    _|      _|    _|    _|  _|    _|            _|    _|  _|    _|  _|    _|   \n");
    printf("                         _|  _|_|  _|    _|  _|    _|  _|    _|      _|_|_|        _|      _|_|_|        _|_|_|    _|    _|  _|_|_|     \n");
    printf("                         _|    _|  _|    _|  _|    _|  _|    _|      _|    _|      _|      _|            _|    _|  _|    _|  _|    _|   \n");
    printf("                           _|_|_|    _|_|      _|_|    _|_|_|        _|_|_|        _|      _|_|_|_|      _|_|_|      _|_|    _|_|_|     \n");
    printf("                       ---------------------------------------------------------------------------------------------------------------- \n");
    Sleep(3000);
}

// Terminer
void disp_list()
{
    Sleep(150);
    printf("\n");
    printf("          ___________________________\n");

    Sleep(150);
    printf("\n");
    printf("          N E W   G A M E    [ A ] \n");

    Sleep(150);
    printf("\n");
    printf("          C O N T I N U E    [ B ] \n");

    Sleep(150);
    printf("\n");
    printf("          S A V E   G A M E  [ C ] \n");

    Sleep(150);
    printf("\n");
    printf("          S H O P            [ D ] \n");

    Sleep(150);
    printf("\n");
    printf("          A B O U T          [ E ] \n");

    Sleep(150);
    printf("\n");
    printf("          ___________________________\n");
}
// Terminer
void disp_menu()
{
    char m;

    for (int i = 0 ; i < 5 ; i++)
    {
        printf("\n");
    }
    Sleep(150);
    Color(12,0);
    printf("                                                         _____________________________________________                                        _____________ \n");
    printf("\n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|    _|_|    _|_|_|    _|_|_|                                              E X I T [ F ]  \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|  _|    _|  _|    _|  _|    _|                                            _____________ \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|_|_|_|  _|_|_|_|  _|_|_|    _|    _|  \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|  _|    _|  _|    _|  _|    _|  \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|  _|    _|  _|    _|  _|_|_|    \n");
    Sleep(150);

    printf("\n");

    Color(12,0);
    printf("                                                              _|_|_|    _|_|    _|      _|  _|_|_|  \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|        _|    _|  _|_|  _|_|  _|       \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|  _|_|  _|_|_|_|  _|  _|  _|  _|_|     \n");
    Sleep(150);
    Color(12,0);
    printf("                                                            _|    _|  _|    _|  _|      _|  _|       \n");
    Sleep(150);
    Color(12,0);
    printf("                                                              _|_|_|  _|    _|  _|      _|  _|_|_|   \n");
    Sleep(150);
    Color(12,0);
    printf("                                                         _____________________________________________\n");

    for (int a = 0 ; a < 10 ; a++)
    {
        printf("\n");
    }
    disp_list();
    scanf("%c",&m);

    if(m == 'a')
    New_game();

    else if(m == 'b')
        Continue();

    else if(m == 'c')
        Save_game();

    else if(m == 'd')
        Shop();

    else if(m == 'e')
        About();

    else if(m == 'f')
        Exit();
}

