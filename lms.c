/*   ---------------------------------  Group Members --------------------------------------
        1) Kainat Sajid
  2) Urooj Fatima Raza
  3) Zainab Asif
-------------------------------------------------------------------------------------------- */
/*---------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
# include<ctype.h>
void greeting();
void display(char, char, char);
void addbook(char, char, char, char, char, char, int);
void delbook(char, char, char, int);
int issue(char, char, char);
void search(char, char, char);
int rows = 0;
int main()
{
    int oper = 0;
    rows = 100;
    char choice = 'a';
    //******************NAMES OF ENGLISH BOOKS******************************************
    char ENGbooks[100][100] = { "THE PILGRIM’S PROGRESS\0", "ROBINSON CRUSOE\0", "GULLIVER’S TRAVELS\0", "CLARISSA\0", "TOM JONES\0",
    "THE LIFE AND OPINIONS OF T.SHANDY\0","GENTLEMAN\0", "EMMA\0","FRANKENSTEIN\0", "NIGHTMARE ABBEY\0",
    "THE NARRATIVE OF ARTHUR GORDON \0"
    , "SYBIL \0","JANE EYRE\0","WUTHERING HEIGHTS\0", "VANITY FAIR\0","DAVID COPPERFIELD\0","THE SCARLET LETTER\0","MOBY - DICK\0",
    "ALICE’S ADVENTURES IN WONDERLAND\0", "THE MOONSTONE\0", "LITTLE WOMEN\0", "MIDDLEMARCH \0", "THE WAY WE LIVE NOW \0",
    "THE ADVENTURES OF HUCKLEBERRY FINN \0", "KIDNAPPED\0" };
    //*****************AUTHORS OF ENGLISH BOOKS ********************************************
    char ENGauthor[100][100] = { "BY JOHN BUNYAN (1678) \0", "BY DANIEL DEFOE (1719) \0", "BY JONATHAN SWIFT (1726)\0",
    "BY SAMUEL RICHARDSON (1748) \0", "BY HENRY FIELDING (1749)\0", "BY LAURENCE STERNE(1759)\0", "BY JANE AUSTEN(1816) \0",
    "BY MARY SHELLEY (1818) \0","BY THOMAS LOVE PEACOCK (1818) \0","BY EDGAR ALLAN POE (1838)\0",
    "BY BENJAMIN DISRAELI (1845) \0", "BY CHARLOTTE BRONTË (1847)\0", "BY EMILY BRONTË (1847) \0",
    "BY WILLIAM THACKERAY (1848) \0", "BY CHARLES DICKENS (1850) \0", "BY NATHANIEL HAWTHORNE (1850) \0",
    "BY HERMAN MELVILLE (1851) \0", "BY LEWIS CARROLL (1865) \0", "BY WILKIE COLLINS (1868) \0", "BY LOUISA MAY ALCOTT (1868-9)\0"
    , "BY GEORGE ELIOT (1871-2)\0", "BY ANTHONY TROLLOPE (1875)\0", "BY MARK TWAIN (1884/5)\0", "BY ROBERT LOUIS STEVENSON (1886)\0",
    "BY JEROME K JEROME (1889)\0" };
    //******************STATUS FOR AVAILABILITY OF BOOKS *********************************
    char ENGstatus[100][100] = { "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0" };
    //*****************NAMES OF URDU BOOKS**************************************
    char URDUbooks[100][100] = { "PEER-E-KAMIL\0", "RAJA GIDH\0", "SHAHABNAMA \0",
    "ZAVIYA \0", "NAMAL\0", "ALAKH NAGRI \0",
    "PATRAS KAY MAZAMEEN \0", "BAAL-E-JIBREEL\0", "DIWAN E GHALIB \0",
    "MUHAMMAD BIN QASIM \0", "UDAAS NASLAIN \0", "ZAVIYA 2 \0", "NUSKHA HA-E WAFA \0",
    "SHIKWA AND JAWAB-I-SHIKWA \0", "ZAVIYA 3 \0", "URDU KI AKHRI KITAAB \0",
    "TALASH \0", "LABBAIK\0", "AKHRI CHATTAN\0", "QAISAR O KISRA \0", "FIRDAUS E BAREEN\0",
    "ALIF\0", "YARAM\0", "TAUBA TUN NASOOH\0", "HAALIM \0" };
    //********************AUTHORS OF URDU BOOKS*******************************
    char URDUauthor[100][100] = { "BY UMERA AHMED\0", "BY BANO QUDSIA\0", "BY QUDRATULLAH SHAHAB\0", "BY ASHFAQ AHMED\0",
    "BY NIMRA AHMED\0", "BY MUMTAZ MUFTI\0", "BY PATRAS BUKHARI\0", "BY MUHAMMAD IQBAL\0",
    "BY MIRZA ASADULLAH KHAN GHALIB\0", "BY NASEEM HIJAZI\0", "BY ABDULLAH HUSSEIN\0", "BY ASHFAQ AHMED\0",
    "BY FAIZ AHMAD FAIZ\0", "BY MUHAMMAD IQBAL\0", "BY ASHFAQ AHMED\0", "BY IBN E INSHA\0",
    "BY MUMTAZ MUFTI\0", "BY MUMTAZ MUFTI\0", "BY NASEEM HIJAZI\0", "BY NASEEM HIJAZI\0", "BY ABDUL HALEEM SHARAR\0",
    "BY UMERA AHMED\0", "BY SUMAIRA HAMEED\0", "BY DEPUTY NAZIR AHMAD\0", "BY NEMRAH Ahmed\0" };
    //********************STATUS FOR AVAILABILITY *****************************
    char URDUstatus[100][100] = { "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0","AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", };

    //*********************names of scientific books**************************
    char SCIENCEbooks[100][100] = { "THE VOYAGE OF BEAGLE\0", "THE ORIGIN OF SPECIES\0", "PHILOSOPHIAE NATURALIS PRINCIPIA\0",
    "DIALOGUE CONCERNING TWO CHIEF\0", "DE REVOLUTIONIBUS ORBIUM COELESTIUM\0",
    "PHYSICA (PHYSICS)\0", "DE HUMANI CORPORIS FABRICA\0", "RELATIVITY \0", "THE SELFISH GENE\0", "ONE TWO THREE...INFINITY\0",
    "THE DOUBLE HELIX\0", "WHAT IS LIFE? \0", "THE COSMIC CONNECTION\0", "THE INSECT SOCIETIES\0", "THE FIRST THREE MINUTES\0",
    "SILENT SPRING\0", "THE MISMEASURE OF MAN\0", "THE MAN WHO MISTOOK CLINICAL TALES\0", "THE JOURNALS OF LEWIS AND CLARK \0", "THE FEYNMAN LECTURES ON PHYSICS \0"
    "SEXUAL BEHAVIOR IN THE HUMAN MALE\0", "GORILLAS IN THE MIST\0", "UNDER A LUCKY STAR\0", "MICROGRAPHIA\0", "GAIA \0", "THE GLASS CASTLE\0" };
    //*******************AUTHORS FOR SCIENTIFIC BOOKS******************
    char SCIENCEauthor[100][100] = { "BY CHARLES DARWIN [TIE]\0", "BY CHARLES DARWIN\0", "ISAAC NEWTON \0", "BY GALILEO GALILEI \0", "BY NICOLAUS COPERNICUS 0",
"BY ARISTOTLE\0", "BY ANDREAS VESALIUS\0", "BY ALBERT EINSTEIN \0", "BY RICHARD DAWKINS \0", "BY GEORGE GAMOW \0",
"BY JAMES D. WATSON\0", "BY ERWIN SCHRÖDINGER \0", "BY CARL SAGAN \0", "BY EDWARD O. WILSON \0", "BY STEVEN WEINBERG \0",
"BY RACHEL CARSON\0", "BY STEPHEN JAY GOULD \0", "BY OLIVER SACKS\0", "BY MERIWETHER LEWIS AND WILLIAM CLARK\0", "BY RICHARD P. FEYNMAN\0",
"BY ALFRED C. KINSEY ET AL.\0", "BY DIAN FOSSEY \0", "BY ROY CHAPMAN ANDREWS\0", "BY ROBERT HOOKE\0", "BY JAMES LOVELOCK\0", };
    //****************STATUS FOR AVAILABILITY***********************
    char SCIENCEstatus[100][100] = { "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", };

    //*****************NAMES OF BIOGRAPHIES*****************************
    char BIObooks[100][100] = { "PLUTARCH’S LIVES \0", "THE POWER BROKER \0", "SOCRATES: A MAN FOR OUR TIMES", "NAPOLEON : A LIFE, AND CHURCHILL \0", "TOTTO - CHAN\0", "ALL THE GREAT PRIZES\0",
    "EISENHOWER IN WAR AND PEACE\0", "BOYD \0", "EDISON: A BIOGRAPHY\0", "ELEANOR ROOSEVELT \0", "THE FISH THAT ATE  WHALE \0",
    "EMPIRE STATE OF MIND \0", "NO HIDING PLACE \0", "CYROPAEDIA \0", "SHERMAN: SOLDIER, REALIST, AMERICAN\0", "WHERE MEN WIN GLORY \0",
    "A NOTORIOUS LIFE\0", "MY BONDAGE AND MY FREEDOM \0", "ULYSSES S.GRANT \0", "KNIGHT’S CROSS : ERWIN ROMMEL \0", "HURRICANE\0", "I AM MALALA\0", "NIGHT\0", "YES PLEASE\0", "EDUCATED\0" };
    //****************AUTHORS OF BIOGRAPHIES***************************
    char BIOauthor[100][100] = { "by Plutarch\0", "by Robert Caro\0", "by Paul Johnson\0", " by Tetsuko Kuroyanagi\0", " by John Taliaferro\0",
       "by Jean Edward Smith\0", "by Robert Coram\0", "by Matthew Josephson\0", "by Blanche Weisen Cook\0", " by Rich Cohen\0",
       "by Zack O’Malley Greenburg\0", "by William Seabrook\0", "by Xenophon\0", "by B.H. Liddell Hart\0", "by Jon Krakauer\0",
       "by Robert Evans\0", "by Frederick Douglass\0", "by Ulysses S. Grant\0", "by David Fraser\0", "by James S. Hirsch\0",
       "by Malala Yousafzai\0", "by Elie Wiesel\0", "by Amy Poehler\0", "by Tara Westover\0", "by Jeannette Walls\0" };
    //******************STATUS FOR AVAILABILITY****************************
    char BIOstatus[100][100] = { "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0",
    "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", "AVAILABLE\0", };

    //*****************ARRAY INITILIZATION ***********************************

    char new_author[1][50];
    char new_book[1][50];
    char new_status[1][50] = { "available" };
    new_status[0][strlen(new_status) - 1] = '\0';
    //***********************************************************************

    char check;
    int genre;
    greeting();

    //********************** do while loop with 'a' for menu and an other character for exit:***************************************8

    do
    {
        printf("________________________________________________Please enter the operation____________________________________________\n");
        printf("1.######## search ########\n2.######## display ########\n3.######## issue ########\n4.######## delete ########\n5. ######## addbook######## \n\n");
        scan_f("%d", &oper);

        switch (oper)
        {
        case 1:
            //search operation
            printf(" ________________________________________________________________________________________________________________________________\n");
            char check = '0';
            char bookname[100] = { 0 };
            printf("??????????????????????? PLEASE ENTER BOOKNAME ??????????????????????????\n");
            scanf_s("%c", &check);                       //to hold \n character
            fgets(bookname, sizeof(bookname), stdin);   //book to find
            bookname[strlen(bookname) - 1] = '\0';
            for (int index = 0; index < strlen(bookname); index++)
            {
                bookname[index] = toupper(bookname[index]);
            }                                            //incase user uses lowercase,it coverts to uppercase as books are stored in upercase                                               
            printf("\n^^^^^^^^^^^^^^^^^^Please select the genre. \nFollowing is the list of genre of books that are available.^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n 1)########  English Books ########  \n 2) ########  Urdu Books  ######## \n 3) ########  Science Books ########  \n 4)  ######## Biographies ######## ");
            scan_f("%d", &genre);

            switch (genre)
            {
            case 1:
                //english search
                search(bookname, ENGbooks, ENGauthor);
                break;
            case 2:
                //urdu search
                search(bookname, URDUbooks, URDUauthor);
                break;
            case 3:
                //science search
                search(bookname, SCIENCEbooks, SCIENCEauthor);
                break;
            case 4:
                //autobiographies search
                search(bookname, BIObooks, BIOauthor);
                break;
            }
            //breaking search operation.
            break;

        case 2:
            //****************************** Display Switch *******************************************
            printf("\n^^^^^^^^^^^^^^^^^^Please select the genre. \nFollowing is the list of genre of books that are available.^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n 1)########  English Books ########  \n 2) ########  Urdu Books  ######## \n 3) ########  Science Books ########  \n 4)  ######## Biographies ######## ");
            scan_f("%d", &genre);
            switch (genre)
            {
            case 1:
                display(ENGbooks, ENGauthor, ENGstatus);
                break;
            case 2:
                display(URDUbooks, URDUauthor, URDUstatus);
                break;
            case 3:
                display(SCIENCEbooks, SCIENCEauthor, SCIENCEstatus);
                break;
            case 4:
                display(BIObooks, BIOauthor, BIOstatus);
                break;

            }
            break;
        case 3:
            // ************************************ ISSUE BOOK **********************************
            printf(" ");
            char book[20] = { 0 };
            printf("plz enter book to issue\n");
            char ch = '0';
            scanf_s("%c", &ch);   //for enter
            fgets(book, sizeof(book), stdin);   //bookname by user to issue
            book[strlen(book) - 1] = '\0';
            for (int index = 0; index < strlen(book); index++)
            {
                book[index] = toupper(book[index]);   //incase user uses lowercase
            }
            printf("\n^^^^^^^^^^^^^^^^^^Please select the genre. \nFollowing is the list of genre of books that are available.^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n 1)########  English Books ########  \n 2) ########  Urdu Books  ######## \n 3) ########  Science Books ########  \n 4)  ######## Biographies ######## ");
            scan_f("%d", &genre);
            switch (genre)
            {
            case 1:
                printf(" ");
                //issues english book
                int result = issue(book, ENGbooks, ENGstatus);
                if (result != -1)
                {
                    printf("\nBook is issued!\n");
                    strcpy(ENGstatus[result], "ISSUED");     //updates to make it unavailable for other users until returned.
                }
                else
                {
                    printf("\n Book is not available! \n");    //incase user asks for a book not available in library
                }
                break;
            case 2:
                //issues urdu books
                printf("");
                result = issue(book, URDUbooks, URDUstatus);
                if (result != -1)
                {
                    printf("\nBook is issued!\n");
                    strcpy(URDUstatus[result], "ISSUED");     //updates to make it unavailable for other users until returned.
                }
                else
                {
                    printf("\n Book is not available! \n");   //incase user asks for a book not available in library
                }
                break;
            case 3:
                //issues science books
                printf("");
                result = issue(book, SCIENCEbooks, SCIENCEstatus);
                if (result != -1)
                {
                    printf("\nBook is issued!\n");
                    strcpy(SCIENCEstatus[result], "ISSUED");   //updates to make it unavailable for other users until returned.
                }
                else
                {
                    printf("\n Book is not available! \n");     //incase user asks for a book not available in library
                }
                break;
            case 4:
                //issues autobiographies
                printf("");
                result = issue(book, BIObooks, BIOstatus);
                if (result != -1)
                {
                    printf("\nBook is issued!\n");
                    strcpy(BIOstatus[result], "ISSUED");        //updates to make it unavailable for other users until returned.
                }
                else
                {
                    printf("\n Book is not available! \n");      //incase user asks for a book not available in library
                }
                break;
            }
            break;
        case 4:
            //delete book
            printf("\n^^^^^^^^^^^^^^^^^^Please select the genre. \nFollowing is the list of genre of books that are available.^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n 1)########  English Books ########  \n 2) ########  Urdu Books  ######## \n 3) ########  Science Books ########  \n 4)  ######## Biographies ######## ");
            scanf("%d", &genre);
            switch (genre)
            {
            case 1:
                delbook(ENGbooks, ENGauthor, ENGstatus, rows);
                break;
            case 2:
                delbook(URDUbooks, URDUauthor, URDUstatus, rows);
                break;
            case 3:
                delbook(SCIENCEbooks, SCIENCEauthor, SCIENCEstatus, rows);
                break;
            case 4:
                delbook(BIObooks, BIOauthor, BIOstatus, rows);
                break;

            }
            break;
        case 5:
            //******************************CODE FOR ADDING BOOK *****************************
            printf("\n^^^^^^^^^^^^^^^^^^^Please select the genre.^^^^^^^^^^^^^^^^^^^^\n^^^^^^^^^^^^^^^^^^^^ Following is the list of genre of books that are available.^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n 1) ######## English Books ######## \n 2) ######## Urdu Books ##########\n 3) ####### Science Books ####### \n 4) ########### biographies ##########\n");
            scan_f("%d", &genre);
            switch (genre)
            {
            case 1:
                printf("\n ??????????????? Please enter the name of new book : ????????????????????\n");
                scanf("%c", &check);

                fgets(new_book, sizeof(new_book), stdin);
                new_book[0][strlen(new_book) - 1] = '\0';
                printf("\nPlease enter the name of author :");
                fgets(new_author, sizeof(new_author), stdin);
                new_author[0][strlen(new_author) - 1] = '\0';
                addbook(ENGbooks, ENGauthor, ENGstatus, new_book, new_author, new_status, rows);
                break;
            case 2:
                printf("\nPlease enter the name of new book :");
                scanf("%c", &check);

                fgets(new_book, sizeof(new_book), stdin);
                new_book[0][strlen(new_book) - 1] = '\0';
                printf("\nPlease enter the name of author :");
                fgets(new_author, sizeof(new_author), stdin);
                new_author[0][strlen(new_author) - 1] = '\0';
                addbook(URDUbooks, URDUauthor, URDUstatus, new_book, new_author, new_status, rows);
                break;
            case 3:
                printf("\n^^^^^^^^^^^^^^^^^^^^Please enter the name of new book : ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
                scanf("%c", &check);

                fgets(new_book, sizeof(new_book), stdin);
                new_book[0][strlen(new_book) - 1] = '\0';
                printf("\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^Please enter the name of author : ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
                fgets(new_author, sizeof(new_author), stdin);
                new_author[0][strlen(new_author) - 1] = '\0';
                addbook(SCIENCEbooks, SCIENCEauthor, SCIENCEstatus, new_book, new_author, new_status, rows);
                break;
            case 4:
                printf("\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Please enter the name of new book :  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
                scanf("%c", &check);

                fgets(new_book, sizeof(new_book), stdin);
                new_book[0][strlen(new_book) - 1] = '\0';
                printf("\n ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Please enter the name of author :  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
                fgets(new_author, sizeof(new_author), stdin);
                new_author[0][strlen(new_author) - 1] = '\0';
                addbook(BIObooks, BIOauthor, BIOstatus, new_book, new_author, new_status, rows);
                break;

            }

            break;
        }

        printf("\n\n_____________________________Do you want to continue ?_______________________\n_______________________ press a to continue or any other key to exit_______________________ ");
        scanf(" %c", &choice);
    } while (choice == 'a');

    printf("________________________________ *** THANKS FOR USING OUR LIBRARY AUTOMATION SYSTEM ***________________________________");
}
/*__________________________definations of functions____________________________________-
___________________________________________________________________________________________
*/
//*************************************greeting function ********************************88
void greeting()
{
    printf("\t\t**************************************************************************************************\n");
    printf("\t\t______________________________________________________________________________________________________\n");
    printf("\t\t<<<<<<<<<<<<<<<<<<<<<<\t\t\tWELCOME TO OUR LIBRARY \t\t\t<<<<<<<<<<<<<<<<<<<<<<\n ");
    printf("\t\t<<<<<<<<<<<<<<<<<<<<<<\t\t\t   MANAGMENT SYSTEM\t\t\t<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("\t\t______________________________________________________________________________________________________\n");
    printf("\t\t**************************************************************************************************\n");
}
// *********************************** Display BOOK ************************************
void display(char book[100][100], char author[100][100], char status[100][100])
{
    int num = 1;
    printf("\n\t\t\tBookname \t\t\t\t\tAuthor \t\t\t\t\t\tStatus\n\n");
    for (int i = 0; i < 30; i++)
    {
        printf("\n%d)\t %35s \t\t\t %30s \t\t\t %20s\n", num, book[i], author[i], status[i]);
        num++;
    }
}
//************************************************ ADD BOOK ***********************************************
void addbook(char book[100][100], char author[100][100], char status[100][100], char n_book[1][50], char n_author[1][50], char n_status[1][50], int rows)
{
    int num = 1;
    for (int r = 0; r < rows; r++)
    {
        if (book[r][0] == '\0')
        {
            strcat(book[r], n_book);
            strcat(author[r], n_author);
            strcat(status[r], n_status);
            break;
        }
    }
    display(book, author, status);
}
//****************************************** Delete Book ***************************************
void delbook(char book[100][100], char author[100][100], char status[100][100], int rows)
{
    int num = 0;
    display(book, author, status);
    printf("Please select the number of the book you want to delete :");
    scan_f("%d", &num);
    /* this function gets the number of the book and assigns the row number according to it.
    First it stores null character in the assigned row and then stores the next book in the
    same row so that the place might not remain empty*/
    for (int b = num - 1; b < 100; b++)
    {
        for (int i = 0; i < 100; i++)
        {
            book[b][i] = '\0';
            author[b][i] = '\0';
            status[b][i] = '\0';
            if (b < rows - 1)
            {
                book[b][i] = book[b + 1][i];
                author[b][i] = author[b + 1][i];
                status[b][i] = status[b + 1][i];
            }
        }
    }

    display(book, author, status);
}
//*********************************************** Search Function *****************************************8
void search(char book[20], char array[100][100], char author[100][100])
{
    for (int i = 0; i < 100; i++) {
        if (!strcmp(book, array[i])) {
            printf("________________________Book %s is Found in record________________________________ \n", book);
            printf("Author  %s", author[i]);
            return;
        }
    }                                  //incase user asks for a book not available in library
    printf("^^^^^^^^^^^^^^^^^^^^^^^ Book is not available ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n ");
}
// ******************************* ISSUE Function ************************************
int issue(char book[20], char array[100][100], char status[100][100])
{
    for (int i = 0; i < 100; i++)
    {
        if (!strcmp(book, array[i]) && !strcmp(status[i], "AVAILABLE"))
        {                             //compares bookname and its status to issue.
            return i;
        }
    }
    return -1;
}
