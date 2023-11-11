/*
YEAR: 2023
CONTENT: C Language Exercises for Laboratory Training
*/

#include <stdio.h> // used to access standard input/output C functions: printf, scanf, etc.
#include <stdbool.h> //used for boolean variables
#include <stdlib.h> // used for files handling

#include <conio.h>  // used for rand generator
#include <time.h> // used for time seeding the number generator
#include <unistd.h> // used to access the sleep function.
#include <string.h> // used to access strcpy function


/* RO: CERINTE EXERCITII PENTRU LABORATORUL DE C:

* 1. Sa se scrie o functie care sa verifice daca un simbol introdus de la tastatura, este cifra [0-9] sau
* litera intre [a-f] sau [A-F]. Sa se afiseze mesaj corespunzator daca simbolul este in afara intervalului.
* KNOWLEDGE REQUIRED: IF / SWITCH / FUNCTII / ASCII

* -------------------------------------------------------------
* 2. Sa se scrie o functie care citeste de la tastatura un numar si sa calculeze cate cifre contine numarul
* introdus. Optional sa calculeze si suma cifrelor acelui numar.
* KNOWLEDGE REQUIRED: BUCLE / FUNCTII / CARACTERE

* --------------------------------------------------------------
* 3. Sa se scrie o functie care sa ajusteze codul de la cerinta 2 astfel incat sa foloseasca recursivitate
* in loc-ul buclelor.
* KNOWLEDGE REQUIRED: FUNCTII / RECURSIVITATE

* --------------------------------------------------------------
* 4. Sa se ajusteze programul de la cerinta 2 astfel incat sa functioneze si pentru un sir de caractere: Se citeste
* un cuvant / sir de caractere si sa se calculeze numarul caracterelor din cuvant / sir.
* KNOWLEDGE REQUIRED: BUCLE / FUNCTII / CARACTERE

* --------------------------------------------------------------
* 5. Sa se ajusteze programul de la cerinta 1 in asa fel incat sa poata sa verifice pentru un sir de simboluri
* daca are loc apartenenta la intervalul [0-1] / [a-f] / [A-F]
* KNOWLEDGE REQUIRED: IF / SWITCH / FUNCTII / ASCII / ( ARRAYS or STRINGS or POINTERS)

* --------------------------------------------------------------
* 6. Sa se scrie o functie care citeste separat 3 cifre si sa le concateneze intr-un unsigned int. Sa se permita doar
* introducerea cifrelor 0-9.
* KNOWLEDGE REQUIRED: BUCLE / IF / OPERATORI

* -------------------------------------------------------------
* 7. Sa se scrie o functie care sa citeasca un numar de tastatura, sa se verifice daca este divizibil cu 16,
* iar daca este putere a lui	16 sa se afiseze puterea. EX: 16, 256, 4096, 65536, 1048576.
* KNOWLEDGE REQUIRED: BUCLE / IF / OPERATORI / ALGORITHMIC THINKING

* -------------------------------------------------------------
* 8. Sa se construiasca un program care sa citeasca un numar de tip intreg unsigned si sa il reconstruiasca in oglinda.
* OPTIONAL: sa se verifice daca numarul este palindrom. EX:121, 242, 12321.
* KNOWLEDGE REQUIRED: BUCLE / IF / OPERATORI / ALGORITHMIC THINKING / SWITCH / FUNCTII

* -------------------------------------------------------------
* 9. Sa se construiasca un convertor de numere hexadecimal to decimal.
* KNOWLEDGE REQUIRED: BUCLE / IF / OPERATORI / ALGORITHMIC THINKING / SWITCH / FUNCTII

* -------------------------------------------------------------
* 10. Sa se construiasca un convertor de numere decimal to binary.
* KNOWLEDGE REQUIRED: BUCLE / IF / ARRAYS / OPERATORI / ALGORITHMIC THINKING / SHIFTING / OPERATII PE BITI / FUNCTII

* -------------------------------------------------------------
* 11. Sa se scrie o functie pentru negarea unui bit specific pentru o variabila de tip u32 / unsigned int.
* KNOWLEDGE REQUIRED: OPERATII PE BIT / FUNCTII / OPERATORI / ALGORITHMIC THINKING / FUNCTII

* ------------------------------------------------------------
* 12. Sa se scrie o functie care sa citeasca un numar unsigned de la tastatura si sa ofere posibilitatea de a schimba
* ulterior o cifra din acel numar.
* KNOWLEDGE REQUIRED: OPERATII PE BIT / FUNCTII

* ------------------------------------------------------------
* 13. Sa se scrie o functie care sa citeasca continutul dintr-un fisier .txt si sa se calculeze numarul
* cuvintelor din fisier.
* KNOWLEDGE REQUIRED: FISIERE / POINTERI / ARRAYS / OPERATORI / ALGORITHMIC THINKING  / FUNCTII

* ------------------------------------------------------------
* 14a. Sa se scrie o functie care sa interschimbe valorile intre 2 variabile: preferabil fara variabila auxiliara.
* KNOWLEDGE REQUIRED:  FUNCTII / OPERATORI / ALGORITHMIC THINKING / BITWISE OPERATORS

* 14b Sa se scrie o functie care sa citeasca 2 matrici 3x3 si sa ofere posibilitatea de a interschimba 1 linie intre
* cele 2 matrici. Sa se faca interschimbarea fara variabila auxiliara
* KNOWLEDGE REQUIRED:  FUNCTII / OPERATORI / ALGORITHMIC THINKING / BITWISE OPERATORS / ARRAYS / POINTERS

* --------------------------------------------------------------------------
* 15. Sa se scrie o functie care ofera posibilitatea introducerii unui nou element, si/sau stergerii unui element existent
* dintr-un vector dinamic. Sa se creasca\scada dinamic dimensiunea vectorului final.
* TERMINOLOGIE:
* VECTOR DINAMIC = ARRAY STORED IN HEAP
* DIMENSIUNE DINAMIC = DIMENSIUNEA SE SCHIMBA DINAMIC OFERIND POSIBILITATEA DE A ADAUGA SI STERGE UN ELEMENT
* DIMENSIUNE DINAMIC - ESTE OPUSUL DIMENSIUNII FIXE. ARRAY-urile SUNT COLECTII DE DIMENSIUNI FIXE.
* KNOWLEDGE REQUIRED:  FUNCTII / ALGORITHMIC THINKING / 2D ARRAYS / POINTERS / DOUBLE POINTERS / PASS BY REFERENCE / LOOPS

* --------------------------------------------------------------------------
* 16. Sa se scrie o functie care citeste 2 matrici de la tastatura si sa ofere posibilitatea de a roti cele 2 matrici
* simultan la stanga sau la dreapta.
* KNOWLEDGE REQUIRED:  FUNCTII / OPERATORI / ALGORITHMIC THINKING / ARRAYS / PASS BY REFERENCE / LOOPS

* --------------------------------------------------------------------------
* 17. Sa se scrie o functie care converteste un numar double to string.
* KNOWLEDGE REQUIRED: CHAR ARRAYS, ALGORITHMIC THINKING, OPERATORI, FUNCTII, BUCLE

* --------------------------------------------------------------------------
* 18. Sa se scrie o functie care creeaza diagonala principala a unei matrici patratice din elementele min de pe
* linia respectiva.
* KNOWLEDGE REQUIRED: VECTORI 2D, ALGORITHMIC THINKING, OPERATORI, FUNCTII, BUCLE

* --------------------------------------------------------------------------
* 19. Sa se scrie o functie care citeste o matrice patratica de numere intregi dintr-un fisier
* si o stocheaza si afiseaza corespunzator.
* KNOWLEDGE REQUIRED: VECTORI 2D, ALGORITHMIC THINKING, OPERATORI, FUNCTII, BUCLE, FISIERE, POINTERI

* --------------------------------------------------------------------------
* 20. Sa se scrie o functie care citeste o matrice 2x3 si afiseaza matricea si transpusa acesteia.
* KNOWLEDGE REQUIRED: VECTORI 2D, ALGORITHMIC THINKING, OPERATORI, FUNCTII, BUCLE

* --------------------------------------------------------------------------
* 21. Sa se scrie o functie care citeste 2 matrici obtine produsul lor. Linia din prima matrice se inmulteste cu
* coloana din a doua matrice.
* KNOWLEDGE REQUIRED: VECTORI 2D, ALGORITHMIC THINKING, OPERATORI, FUNCTII, BUCLE

* --------------------------------------------------------------------------
* 22. Sa se scrie o functie care calculeaza coloana cu suma cea mai mica a elementelor dintr-o matrice:
* KNOWLEDGE REQUIRED: VECTORI 2D, MATRICES, ALGORITHMIC THINKING, OPERATORI, FUNCTII, BUCLE

* --------------------------------------------------------------------------
* 23. Sa se creeze un convertor fahrenheit to celsius / celsius to fahrenheit. Sa se poata introduca numere cu surfix C / F
* pentru determinarea unitatii de masura.
* KNOWLEDGE REQUIRED: ALGORITHMIC THINKING, OPERATORI, FUNCTII, OPERATII, CHAR ARRAYS

* --------------------------------------------------------------------------
* 24. Sa se scrie o functie care sa afiseze tabelul ASCII.
* KNOWLEDGE REQUIRED: OPERATORI, FUNCTII, OPERATII, CAST

* --------------------------------------------------------------------------
* 25. Sa se scrie o functie care afiseaza cu delay de 10 secunde valori de tip int generate aleator. Sa se afiseze concomitent
* valoarea aleatoare curenta si valoarea intarziata din urma cu 10 secunde. HINT: Se va folosi functia rand din <conio.h>
* pentru generarea de numere aleatoare, se va folosi functia sleep() din <unistd.h> sau Sleep() din <windows.h> pentru masurarea
* intervalelor de timp.
* KNOWLEDGE REQUIRED: FUNCTII, RANDOM GENERATORS, ALGORITHMIC THINKING, LOOPS

* --------------------------------------------------------------------------
* 26. Sa se scrie o functie care concateneaza 4 chars intr-un unsigned int. Sa se foloseasca int-ul pentru afisarea cuvantului
* format din cele 4 chars.
* KNOWLEDGE REQUIRED: FUNCTII,  ALGORITHMIC THINKING, LOOPS, CAST, BITWISE OPERATORS

* --------------------------------------------------------------------------
* 27. Sa se construiasca un codificator pentru mesajul dintr-un fisier .txt. Regula codarii: se va nega ultimul bit al
* caracterului citit, exceptie facand caracterele speciale: '\n', '\0', ' '. Rezultatul va fi salvat intr-un .txt si
* afisat in consola.
* KNOWLEDGE REQUIRED: FUNCTII, ALGORITHMIC THINKING, LOOPS, OPERATII PE BIT, FISIERE, POINTERI

* --------------------------------------------------------------------------
* 28. Sa se construiasca un decodor pentru mesajul codat anterior. Regula decodarii: se va nega ultimul bit al
* caracterului citit, exceptie facand caracterele speciale: '\n', '\0', ' '. Rezultatul va fi salvat intr-un .txt
* si afisat in consola.
* KNOWLEDGE REQUIRED: FUNCTII, ALGORITHMIC THINKING, LOOPS, OPERATII PE BIT, FISIERE, POINTERI

* --------------------------------------------------------------------------
* 29. Sa se scrie o functie care citeste un mesaj. Mesajul va fi impartit in cuvinte, cuvintele vor fi afisare pe iteratii
* dupa cum urmeaza: Exemplu: Ana are mere
* 1. A a m
* 2. An ar me
* 3. Ana are mer
* 4. Ana are mere
* HINT: vor fi necesare 3 nested loops.
* KNOWLEDGE REQUIRED: FUNCTII, ALGORITHMIC THINKING, LOOPS, CHAR ARRAYS,

* --------------------------------------------------------------------------
* 30. Sa se scrie o functie care verifica daca un string contine un cuvant \ sir de caractere specificat.
* KNOWLEDGE REQUIRED: FUNCTII, ALGORITHMIC THINKING, BUCLE, CHAR ARRAYS, CHAR POINTERS,

* --------------------------------------------------------------------------
* 31. Sa se scrie o functie care filtreaza un string \ sterge dintr-un string un cuvant \ sir de caractere specificat.
* KNOWLEDGE REQUIRED: FUNCTII, ALGORITHMIC THINKING, BUCLE, CHAR ARRAYS, CHAR POINTERS, PASS BY REFERENCE, MEMORY ALLOCATION

* --------------------------------------------------------------------------
* 32. Sa se scrie o functie care citeste si filtreaza continutul dintr-un fisier .xml dat. REGULA FILTRARII: sa se stearga
* tag-urile si sa se afiseze doar informatia relevanta.
* KNOWLEDGE REQUIRED: FUNCTII, BUCLE, CHAR ARRAYS, CHAR POINTERS, FISIERE

* --------------------------------------------------------------------------
* 33. Sa se scrie o functie care sa converteasca un string in int. REGULA: se vor lua in considerare doar caracterele
* [0-9] din string-ul pasat ca parametru.
* KNOWLEDGE REQUIRED: FUNCTII, BUCLE, CHAR ARRAYS, CHAR POINTERS

* --------------------------------------------------------------------------
* 34. Sa se ajusteze / extinda functionalitatea de la Cerinta 31 astfel incat informatia filtrata din fisierul .xml sa fie
* stocata intr-un vector de structuri. Informatia age sa fie stocata ca numar intreg.
* KNOWLEDGE REQUIRED: FUNCTII, BUCLE, CHAR ARRAYS, CHAR POINTERS, FISIERE \ STRUCTURI

* --------------------------------------------------------------------------
* 35. Sa se scrie o functie care sa ofere posibilitatea de a sorta vectorul de structuri de la cerinta 34 crescator in
* functie de varsta.
* KNOWLEDGE REQUIRED: FUNCTII, BUCLE, CHAR ARRAYS, POINTERS, STRUCTURI, SORTING

* --------------------------------------------------------------------------
* 36. Sa se extinda functionalitatea de la cerinta 34,35 astfel incat continutul sortat al structurii sa fie
* salvat intr-un document .html folosind un tabel ca forma de structurare. Fiecare informatie sa fie scrisa
* in propria coloana.
* KNOWLEDGE REQUIRED: FUNCTII, BUCLE, CHAR ARRAYS, POINTERS, STRUCTURI, HTML, FISIERE

* --------------------------------------------------------------------------
* 37. Sa se scrie o functie care calculeaza numarul de aparitii ale unui cuvant / sir de character / substring intr-un
* string.
* KNOWLEDGE REQUIRED: CHAR ARRAYS, FUNCTII, POINTERI, BUCLE,

* --------------------------------------------------------------------------
* 38. Sa se scrie o functie care sa imparta un numar la o valoare fara a folosi division operator. Alternativ sa se
* scrie o functie care sa inmulteasca un numar cu o valoare fara a folosi multiply operator.
* KNOWLEDGE REQUIRED: OPERATORI, VARIABILE, OPERATII, FUNCTII, BUCLE

* --------------------------------------------------------------------------
* 39. Sa se creeze o lista inlantuita de elemente de tip intreg. Sa se foloseasca o bucla pentru adaugarea unui numar customizat de elemente
* sa se ofere posibilitatea de a iesi din bucla la comanda utilizatorului, si sa se afiseze toate elementele introduse in acea bucla.
* TERMINOLOGIE: Lista inlantuita este un tip de date complex, ce consista intr-o structura cu cel putin 2 element: valoare si pointer
* catre urmatorul element. Memoria se va aloca dinamic pentru fiecare element adaugat in lista. Principalul beneficiu al unei liste
* inlanuite consta in posibilitatea de a adauga un numar variabil de element putand sterge sau adauga un element fara a face copii
* sau interschimbari, ci doar modificand adresele pointerilor assignati pentru elementul urmator / anterior.
* KNOWLEDGE REQUIRED: STRUCTURI, POINTERI, BUCLE, ALOCARE DINAMICA, VARIABILE

* --------------------------------------------------------------------------
* 40. Sa se identifice problemele dintr-un cod dat.
* KNOWLEDGE REQUIRED:

* --------------------------------------------------------------------------
*/

/* EN: EXERCISES FOR THE C-LABORATORY:

* 1. Write a function that checks if a symbol entered from the keyboard is a number [0-9] or
* letter between [a-f] or [A-F]. Display a corresponding message if the symbol is out of range.
* KNOWLEDGE REQUIRED: IF / SWITCH / FUNCTIONS / ASCII

* ------------------------------------------------- ------------
* 2. Write a function that reads a number from the keyboard and calculates how many digits the entered number contains.
* Optionally calculate the sum of the digits of that number.
* KNOWLEDGE REQUIRED: LOOPS / FUNCTIONS / CHARACTERS

* ------------------------------------------------- -------------
* 3. Write a function that adjusts the code from exercise 2 so that it uses recursion
* instead of loops.
* KNOWLEDGE REQUIRED: FUNCTIONS / RECURSIVITY

* ------------------------------------------------- -------------
* 4. Adjust the program from exercise 2 so that it also works for a sequence of characters: Read
* a word / sentence of characters and calculate the number of characters in the word / sentence.
* KNOWLEDGE REQUIRED: LOOPS / FUNCTIONS / CHARACTERS

* ------------------------------------------------- -------------
* 5. Adjust the program from exercise 1 so that it can check for a sequence of character
* if it belongs to the interval [0-1] / [a-f] / [A-F]
* KNOWLEDGE REQUIRED: IF / SWITCH / FUNCTII / ASCII / (ARRAYS or STRINGS or POINTERS)

* ------------------------------------------------- -------------
* 6. Write a function that reads 3 digits separately and concatenate them into an unsigned int. Only allow the user
* to enter digits from 0-9 interval.
* KNOWLEDGE REQUIRED: LOOPS / IF / OPERATORS

* ------------------------------------------------- ------------
* 7. Write a function to read a number from the keyboard, check if it is divisible by 16,
* and if it is a power of 16, display the power. EX: 16, 256, 4096, 65536, 1048576.
* KNOWLEDGE REQUIRED: LOOPS / IF / OPERATORS / ALGORITHMIC THINKING

* ------------------------------------------------- ------------
* 8. Build a program that reads an unsigned integer type number and reconstructs it in the mirror.
* OPTIONAL: check if the number is a palindrome. EX: 121, 242, 12321.
* KNOWLEDGE REQUIRED: LOOPS / IF / OPERATORS / ALGORITHMIC THINKING / SWITCH / FUNCTIONS

* ------------------------------------------------- ------------
* 9. Build a hexadecimal to decimal number converter.
* KNOWLEDGE REQUIRED: LOOPS / IF / OPERATORS / ALGORITHMIC THINKING / SWITCH / FUNCTIONS

* ------------------------------------------------- ------------
* 10. Build a decimal to binary number converter.
* KNOWLEDGE REQUIRED: LOOPS / IF / ARRAYS / OPERATORS / ALGORITHMIC THINKING / SHIFTING / BIT OPERATIONS / FUNCTIONS

* ------------------------------------------------- ------------
* 11. Write a function to negate a specific bit for a variable of type u32 / unsigned int.
* KNOWLEDGE REQUIRED: BIT OPERATIONS / FUNCTIONS / OPERATORS / ALGORITHMIC THINKING / FUNCTIONS

* ------------------------------------------------- -----------
* 12. Write a function that reads an unsigned number from the keyboard and offers the possibility to change
* later a digit from that number.
* KNOWLEDGE REQUIRED: BIT OPERATIONS / FUNCTIONS

* ------------------------------------------------- -----------
* 13. Write a function that reads the content of a .txt file and calculates the number of
* words in the file.
* KNOWLEDGE REQUIRED: FILES / POINTERS / ARRAYS / OPERATORS / ALGORITHMIC THINKING / FUNCTIONS

* ------------------------------------------------- -----------
* 14a. Write a function that interchange the values between 2 variables: preferably without the auxiliary variable.
* KNOWLEDGE REQUIRED: FUNCTIONS / OPERATORS / ALGORITHMIC THINKING / BITWISE OPERATORS

* 14b Write a function that reads 2 3x3 matrices and offers the possibility to exchange 1 line between
* the 2 matrices. Make the exchange without the auxiliary variable.
* KNOWLEDGE REQUIRED: FUNCTIONS / OPERATORS / ALGORITHMIC THINKING / BITWISE OPERATORS / ARRAYS / POINTERS

* ------------------------------------------------- -------------------------
* 15. Write a function that offers the possibility of introducing a new element and/or deleting an existing element
* from a dynamic vector. Dynamically increase/decrease the size of the final vector.
* TERMINOLOGY:
* DYNAMIC VECTOR = ARRAY STORED IN HEAP
* DYNAMIC SIZE = THE SIZE CHANGES DYNAMICLY OFFERING THE POSSIBILITY OF ADDING AND DELETING AN ELEMENT
* DYNAMIC SIZE - IS THE OPPOSITE OF FIXED SIZE. ARRAYS ARE COLLECTIONS OF FIXED SIZES.
* KNOWLEDGE REQUIRED: FUNCTIONS / ALGORITHMIC THINKING / 2D ARRAYS / POINTERS / DOUBLE POINTERS / PASS BY REFERENCE / LOOPS

* ------------------------------------------------- -------------------------
* 16. Write a function that reads 2 matrices from the keyboard and offers the possibility to rotate the 2 matrices
* simultaneously to the left or to the right.
* KNOWLEDGE REQUIRED: FUNCTIONS / OPERATORS / ALGORITHMIC THINKING / ARRAYS / PASS BY REFERENCE / LOOPS

* ------------------------------------------------- -------------------------
* 17. Write a function that converts a double number to string.
* KNOWLEDGE REQUIRED: CHAR ARRAYS, ALGORITHMIC THINKING, OPERATORS, FUNCTIONS, LOOPS

* ------------------------------------------------- -------------------------
* 18. Write a function that creates the main diagonal of a square matrix from the min elements on
* the respective line.
* KNOWLEDGE REQUIRED: 2D VECTORS, ALGORITHMIC THINKING, OPERATORS, FUNCTIONS, LOOPS

* ------------------------------------------------- -------------------------
* 19. Write a function that reads a square matrix of integers from a file, stores and displays it accordingly.
* KNOWLEDGE REQUIRED: 2D VECTORS, ALGORITHMIC THINKING, OPERATORS, FUNCTIONS, LOOPS, FILES, POINTERS

* ------------------------------------------------- -------------------------
* 20. Write a function that reads a 2x3 matrix and displays the matrix and its transpose.
* KNOWLEDGE REQUIRED: 2D VECTORS, ALGORITHMIC THINKING, OPERATORS, FUNCTIONS, LOOPS

* ------------------------------------------------- -------------------------
* 21. Write a function that reads 2 matrices and obtains their product. The line in the first matrix is multiplied by
* the column from the second matrix.
* KNOWLEDGE REQUIRED: 2D VECTORS, ALGORITHMIC THINKING, OPERATORS, FUNCTIONS, LOOPS

* ------------------------------------------------- -------------------------
* 22. Write a function that calculates the column with the smallest sum of elements within a matrix:
* KNOWLEDGE REQUIRED: 2D VECTORS, MATRICES, ALGORITHMIC THINKING, OPERATORS, FUNCTIONS, LOOPS

* ------------------------------------------------- -------------------------
* 23. Create a fahrenheit to celsius / celsius to fahrenheit converter. Make it capable of entering numbers with suffix C / F
* to determine the measurement unit to be converted.
* KNOWLEDGE REQUIRED: ALGORITHMIC THINKING, OPERATORS, FUNCTIONS, OPERATIONS, CHAR ARRAYS

* ------------------------------------------------- -------------------------
* 24. Write a function that displays the ASCII table.
* KNOWLEDGE REQUIRED: OPERATORS, FUNCTIONS, OPERATIONS, CAST

* ------------------------------------------------- -------------------------
* 25. Write a function that displays randomly generated integer values with a delay of 10 seconds. Display simultaneously
* the current random value and the value from 10 seconds ago. HINT: The rand function from <conio.h> will be used
* for the generation of random numbers, the function sleep() from <unistd.h> or Sleep() from <windows.h> will be used for measuring
* time intervals.
* KNOWLEDGE REQUIRED: FUNCTIONS, RANDOM GENERATORS, ALGORITHMIC THINKING, LOOPS

* ------------------------------------------------- -------------------------
* 26. Write a function that concatenates 4 chars into an unsigned int. Use int variable to display the word
* consisting of those 4 chars.
* KNOWLEDGE REQUIRED: FUNCTIONS, ALGORITHMIC THINKING, LOOPS, CAST, BITWISE OPERATORS

* ------------------------------------------------- -------------------------
* 27. Build an encoder for the message from a .txt file. Coding rule: the last bit from the character being read
* will be negated, exception will do the special characters: '\n', '\0', ' '. The result will be saved in a .txt and
* displayed in the console.
* KNOWLEDGE REQUIRED: FUNCTIONS, ALGORITHMIC THINKING, LOOPS, BIT OPERATIONS, FILES, POINTERS

* ------------------------------------------------- -------------------------
* 28. Build a decoder for the previously coded message. Decoding rule: the last bit from the character being read
* twill be negated, exception will do the special characters: '\n', '\0', ' '. The result will be saved in a .txt file
* and displayed in the console.
* KNOWLEDGE REQUIRED: FUNCTIONS, ALGORITHMIC THINKING, LOOPS, BIT OPERATIONS, FILES, POINTERS

* ------------------------------------------------- -------------------------
* 29. Write a function that reads a message. The message will be divided into words, the words will be displayed iteratively
* as follows: Example: Anna has apples
* 1. A h a
* 2. An ha ap
* 3. Ann has app
* 4. Anna has appl
* 5. Anna has apple
* 6. Anna has apples
* HINT: 3 nested loops will be needed.
* KNOWLEDGE REQUIRED: FUNCTIONS, ALGORITHMIC THINKING, LOOPS, CHAR ARRAYS,

* ------------------------------------------------- -------------------------
* 30. Write a function that checks if a string contains a specified word \ sequence of characters \ substring.
* KNOWLEDGE REQUIRED: FUNCTIONS, ALGORITHMIC THINKING, LOOPS, CHAR ARRAYS, CHAR POINTERS,

* ------------------------------------------------- -------------------------
* 31. Write a function that filters a string \ deletes a specified word \ character sequence from the string.
* KNOWLEDGE REQUIRED: FUNCTIONS, ALGORITHMIC THINKING, LOOPS, CHAR ARRAYS, CHAR POINTERS, PASS BY REFERENCE, MEMORY ALLOCATION

* ------------------------------------------------- -------------------------
* 32. Write a function that reads and filters the content of a given .xml file. FILTERING RULE: to delete
* the tags and to display only the relevant information.
* KNOWLEDGE REQUIRED: FUNCTIONS, LOOPS, CHAR ARRAYS, CHAR POINTERS, FILES

* ------------------------------------------------- -------------------------
* 33. Write a function that converts a string into an int. RULE: From the string passed as a parameter
* the only characters to be considered for conversion are within [0-9] interval.
* KNOWLEDGE REQUIRED: FUNCTIONS, LOOPS, CHAR ARRAYS, CHAR POINTERS

* ------------------------------------------------- -------------------------
* 34. Adjust / extend the functionality from Exercise 31 so that the information filtered from the .xml file is
* stored in a vector of structures. The Age information should be stored as an integer.
* KNOWLEDGE REQUIRED: FUNCTIONS, LOOPS, CHAR ARRAYS, CHAR POINTERS, FILES \ STRUCTURES

* ------------------------------------------------- -------------------------
* 35. Write a function that offers the possibility to sort the vector of structures from Exercise 34 in ascending order
* depending on age.
* KNOWLEDGE REQUIRED: FUNCTIONS, LOOPS, CHAR ARRAYS, POINTERS, STRUCTURES, SORTING

* ------------------------------------------------- -------------------------
* 36. Extend the functionality from Exercise 34,35 so that the sorted content of the structure is
* saved in a .html document using a table as a form of structuring. Every piece of information must be written
* in its own column.
* KNOWLEDGE REQUIRED: FUNCTIONS, LOOPS, CHAR ARRAYS, POINTERS, STRUCTURES, HTML, FILES

* ------------------------------------------------- -------------------------
* 37. Write a function that calculates the number of occurrences of a word / sequence of character / substring within a
* string.
* KNOWLEDGE REQUIRED: CHAR ARRAYS, FUNCTIONS, POINTERS, LOOPS,

* ------------------------------------------------- -------------------------
* 38. Write a function that divides a number by a value without using the division operator. Alternatively
* write a function that multiplies a number by a value without using the multiply operator.
* KNOWLEDGE REQUIRED: OPERATORS, VARIABLES, OPERATIONS, FUNCTIONS, LOOPS

* ------------------------------------------------- -------------------------
* 39. To create a linked list of integer elements. Use a loop to add a custom number of elements
* and offer the possibility to exit the loop at the user's command, and to display all the elements inserted within that loop.
* TERMINOLOGY: The chained list is a complex data type, which consists of a structure with at least 2 elements: value and pointer
* to the next element. Memory will be allocated dynamically for each element added to the list. The main benefit of a linked-list
* consists in the possibility of adding a variable number of elements, being able to delete or add an element without making copies
* or exchanges, but only by changing the addresses of the assigned pointers for the next / previous element.
* KNOWLEDGE REQUIRED: STRUCTURES, POINTERS, LOOPS, DYNAMIC ALLOCATION, VARIABLES

* ------------------------------------------------- -------------------------
* 40. To identify the problems in a given code.
* KNOWLEDGE REQUIRED:

* ------------------------------------------------- -------------------------
*/

#define CHAR_ARRAY_SIZE 20 //some dimension for the char arrays
#define MAX_FILEPATH_SIZE 1000 //  the maximum length for the filepath
#define EXE_RELATIVE_DIRECTORY_PATH "\\Debug" //name of the directory which hosts the executable

#define NR_XML_TAGS 6 //dimension for the xml_tags array
const char* xml_tags[NR_XML_TAGS] = {"<name>", "</name>", "<age>", "</age>", "<hiringDate>", "</hiringDate>"};

//structure for the Filtered XML Content to be read and stored in exercise 34
struct XML_Database_Content{
	char name[CHAR_ARRAY_SIZE]; //use array to store the name
	int age;
	char hiringDate[CHAR_ARRAY_SIZE]; //use array to store the name
};
unsigned int xml_db_index = 0; // variable that will store the size of the dynamic array storing the XML elements reads from the file.
unsigned int menu_language=0; // variable to store the language of the messages being displayed

char ROOT_DIRECTORY[MAX_FILEPATH_SIZE] = {'\0'};

void readCheckSimbolString();
unsigned int calculateNoOfCharsFromMessage(const char message[]);

bool CheckHexadecimalString(char message[], unsigned int limit);

void readCheckNoOfDigits(bool useLoop);
unsigned int CalculateNoOfDigits(unsigned int number);
unsigned int CalculateNoOfDigitsRecursively(unsigned int number);

void DigitConcatenate();
void CheckNoDivisible16();

unsigned int reverseNumber(unsigned int number);

void ConvertFromHexaToDecimal();
unsigned int FromCharToInt(char character);
unsigned int GetPowered16(unsigned int rank);

void ConversionOfDecimalToBinary();
void ConvertDecimalToBinary(unsigned int number);

void NegateSpecificBit();
unsigned int reverseNumber(unsigned int number);
void readNumberAndChangeDigit();

unsigned int CountNumberOfWordsWithinString(char str[]);
void ReadCalculateFileWords();

void NumberToPower();
void raiseToPower(unsigned int* base, unsigned int power);

void InterchangeVarValueWAddSubstr(int* var_A, int* var_B);
void InterchangeVarValueWXOR(int* var_A, int* var_B);

void ReadInterchangeMatrixLine();
void readSquareMatrix(const int dimension, int matrix[dimension][dimension]);
void printMatrix(unsigned int dimension, int matrix[dimension][dimension]);

void readArray();
void printVector(unsigned int dimension, int vector[dimension]);
void addElementToVector(unsigned int* dimension, int** array);
void removeElementFromVector(unsigned int* dimension, int** array);

void readRotateMatrices();
void rotateMatrixRight(unsigned int dimension, int matrix[dimension][dimension]);
void rotateMatrixLeft(unsigned int dimension, int matrix[dimension][dimension]);

void readConvertDoubleToString();
char DigitsToChars(int digit);

void readFormMatrixDiagonalFromMinRowElem();
void readMatrixFromFile();

void transposeOf2x3Matrix();
void readMatrix(const int Rows, const int Columns,  int matrix[Rows][Columns]);

void readMultiplyTwoSquareMatrices();
void readCalculateMatrixSmallestColumn();

void convertFahrenheitCelciusORViceversa();
void ASCIItableDisplay();

void currentAndDelayedRand();
void storeCharsIntoInt();

void readEncodeContentOfTxt();
void readDecodeContentFromTxt();

void readSplitMessageIteratedPrint();

void readCheckElementWithinString();
bool containsString(char* source, const char* elementToFind);

void readFilterString();
void filterStringValue(char** source, const char* filterValue);

void readFilterXMLFileContent();

int convertStringToInt(char * message);
struct XML_Database_Content* readStoreFilteredXMLFileContentInStruct();
void displayStructuraObtainedFromXML(struct XML_Database_Content* structura);

void sortXmlContentStoredStruct();

void saveSortedXmlStructContentInHTML(struct XML_Database_Content* structura);

void readCountElementWithinString();
unsigned int countStringOccurences(char* source, const char* elementToCount);

int multiplyWoStarOp(int number, int multiplier);
float divideWoDivisionOp(int number, int divider);

void createAddElementsOnLinkedList();

void printRomanianMenu();
void printEnglishMenu();

void createRelativePathToFile(char source_array [], char filename[]);

void FindExerciseSolution(unsigned int exercise_number);

int main(void)
{
	setbuf(stdout, NULL); //synchronize the console with the output messages - needed for Toolchain_GCC.
	unsigned int exercise_number;
	unsigned int command;

	char * root = getcwd(NULL, 0); // get the root directory
	if (root != NULL)
	{
		unsigned int index = 0;
		while(root[index] != '\0' && index <= MAX_FILEPATH_SIZE)
		{
			ROOT_DIRECTORY[index] = root[index];
			index++;
		}
	}

	printf("Choose language: \n");
	printf("1. Limba Romana\n");
	printf("2. English Language.\n\n");
	while(menu_language!=1 && menu_language!=2)
	{
		printf("Input: ");
		fflush(stdin);
		scanf("%d", &menu_language);
		printf("\n");
	}
	while(true)
	{
		printf("-------------------------------------------------------------\n");
		printf("PATH: %s\n\n", ROOT_DIRECTORY);
		if(menu_language == 1)
		{
			printf("LIMBA: Romana\n");
			printRomanianMenu();
		}
		else
		{
			printf("LANGUAGE: English\n");
			printEnglishMenu();
		}
		printf("\nEnter exercise number [1-39]. Press 0 to exit. \n");
		printf("Input: ");
		fflush(stdin);
		scanf("%d", &exercise_number);
		printf("\n");
		if (exercise_number == 0)
		{
			break;
		}
		else
		{
			FindExerciseSolution(exercise_number);
		}
		printf("Press any key to continue. The screen will be cleared.\n");
		fflush(stdin);
		scanf("%d", &command);
		system("cls"); // clear the screen
	}
	if(menu_language == 1)
		printf("Program terminat.\n");
	else
		printf("Program exited.\n");
    return 0;
}

void FindExerciseSolution(unsigned int exercise_number)
{
	/*
	RO:
	Aceasta functie va apela functiile ce au ca rezolvare numarul cerintei pasat ca argument.

	EN:
	This function will call the functions which handle the solutioning of the exercise number passed as argument.
	*/
	bool isExerciseFound = true;
	switch(exercise_number)
	{
		case 1:{
			if (menu_language == 1)
			{
				printf("1. Sa se scrie o functie care sa verifice daca un simbol introdus de la tastatura, este cifra [0-9]"
					" sau litera intre [a-f] sau [A-F]. Sa se afiseze mesaj corespunzator daca simbolul este in afara intervalului.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("1. Write a function that checks if a symbol entered from the keyboard is a number [0-9] or"
						" letter between [a-f] or [A-F]. Display a corresponding message if the symbol is out of range.\n"
						"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readCheckSimbolString();
			break;
		}
		case 2:{
			if (menu_language == 1)
			{
				printf("2. Sa se scrie o functie care citeste de la tastatura un numar si sa calculeze cate cifre contine numarul"
 						" introdus. Optional sa calculeze si suma cifrelor acelui numar.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("2. Write a function that reads a number from the keyboard and calculates how many digits the entered number contains."
				        " Optionally calculate the sum of the digits of that number.\n"
				    "-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readCheckNoOfDigits(true);
			break;
		}
		case 3:{
			if (menu_language == 1)
			{
				printf("3. Sa se scrie o functie care sa ajusteze codul de la cerinta 2 astfel incat sa foloseasca recursivitate in loc-ul buclelor.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("3. Write a function that adjusts the code from exercise 2 so that it uses recursion instead of loops.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readCheckNoOfDigits(false);
			break;
		}
		case 4:{
			if (menu_language == 1)
			{
				printf("4. Sa se ajusteze programul de la cerinta 2 astfel incat sa functioneze si pentru un sir de caractere: Se citeste"
						" un cuvant / sir de caractere si sa se calculeze numarul caracterelor din cuvant / sir.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("4. Adjust the program from exercise 2 so that it also works for a sequence of characters: Read"
						" a word / sentence of characters and calculate the number of characters in the word / sentence.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			char message[CHAR_ARRAY_SIZE] = {'\0'};
			printf("Enter the symbol / message: ");
			setbuf(stdout, NULL);
			fflush(stdin);
			scanf("%s", message);
			printf("Number of chars: %d\n", calculateNoOfCharsFromMessage(message));
			break;
		}
		case 5:{
			if (menu_language == 1)
			{
				printf("5. Sa se ajusteze programul de la cerinta 1 in asa fel incat sa poata sa verifice pentru un sir de simboluri"
						" daca are loc apartenenta la intervalul [0-1] / [a-f] / [A-F]\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("5. Adjust the program from exercise 1 so that it can check for a sequence of character"
						" if it belongs to the interval [0-1] / [a-f] / [A-F]\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readCheckSimbolString();
			break;
		}
		case 6:{
			if (menu_language == 1)
			{
				printf("6. Sa se scrie o functie care citeste separat 3 cifre si sa le concateneze intr-un unsigned int. Sa se permita doar"
						" introducerea cifrelor 0-9.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("6. Write a function that reads 3 digits separately and concatenate them into an unsigned int. Only allow the user"
						" to enter digits from 0-9 interval.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			DigitConcatenate();
			break;
		}
		case 7:{
			if (menu_language == 1)
			{
				printf("7. Sa se scrie o functie care sa citeasca un numar de tastatura, sa se verifice daca este divizibil cu 16,\n"
						" iar daca este putere a lui 16 sa se afiseze puterea. EX: 16, 256, 4096, 65536, 1048576.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("7. Write a function to read a number from the keyboard, check if it is divisible by 16,"
						" and if it is a power of 16, display the power. EX: 16, 256, 4096, 65536, 1048576.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			CheckNoDivisible16();
			break;
		}
		case 8:{
			if (menu_language == 1)
			{
				printf("8. Sa se construiasca un program care sa citeasca un numar de tip intreg unsigned si sa il reconstruiasca in oglinda.\n"
						" OPTIONAL: sa se verifice daca numarul este palindrom. EX:121, 242, 12321.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("8. Build a program that reads an unsigned integer type number and reconstructs it in the mirror."
						" OPTIONAL: check if the number is a palindrome. EX: 121, 242, 12321.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
		    unsigned int number;
		    printf("Enter a positive value: ");
			fflush(stdin);
			scanf("%d", &number);
			unsigned int revNum = reverseNumber(number);
			if (revNum == number)
			{
				printf("The number is polindrome. \n");
			}
			break;
		}
		case 9:{
			if (menu_language == 1)
			{
				printf("9. Sa se construiasca un convertor de numere hexadecimal to decimal.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("9. Build a hexadecimal to decimal number converter.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			ConvertFromHexaToDecimal();
			break;
		}
		case 10:{
			if (menu_language == 1)
			{
				printf("10. Sa se construiasca un convertor de numere decimal to binary.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("10. Build a decimal to binary number converter.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			ConversionOfDecimalToBinary();
			break;
		}
		case 11:{
			if (menu_language == 1)
			{
				printf("11. Sa se scrie o functie pentru negarea unui bit specific"
						" pentru o variabila de tip u32 / unsigned int.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("11. Write a function to negate a specific bit for a variable of type u32 / unsigned int.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			NegateSpecificBit();
			break;
		}
		case 12:{
			if (menu_language == 1)
			{
				printf("12. Sa se scrie o functie care sa citeasca un numar unsigned de la tastatura si sa ofere posibilitatea de a schimba\n"
						" ulterior o cifra din acel numar.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("12. Write a function that reads an unsigned number from the keyboard and offers the possibility to change"
						" later a digit from that number.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readNumberAndChangeDigit();
			break;
		}
		case 13:{
			if (menu_language == 1)
			{
				printf("13. Sa se scrie o functie care sa citeasca continutul dintr-un fisier .txt si sa se calculeze numarul \n"
						" cuvintelor din fisier. \n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("13. Write a function that reads the content of a .txt file and calculates the number of words in the file.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			ReadCalculateFileWords();
			break;
		}
		case 14:{
			if (menu_language == 1)
			{
				printf("14. Sa se scrie o functie care sa citeasca 2 matrici 3x3 si sa ofere posibilitatea de a interschimba 1 linie intre"
						" cele 2 matrici. Sa se faca interschimbarea fara variabila auxiliara.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("14. Write a function that reads 2 3x3 matrices and offers the possibility to exchange 1 line between"
						" the 2 matrices. Make the exchange without the auxiliary variable.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			ReadInterchangeMatrixLine();
			break;
		}
		case 15:{
			if (menu_language == 1)
			{
				printf("15. Sa se scrie o functie care ofera posibilitatea introducerii unui nou element intr-un vector dinamic. Sa se creasca"
						" dinamic dimensiunea vectorului final.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("15. Write a function that offers the possibility of introducing a new element and/or deleting an existing element"
						" from a dynamic vector. Dynamically increase/decrease the size of the final array.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readArray();
			break;
		}
		case 16:{
			if (menu_language == 1)
			{
				printf("16. Sa se scrie o functie care citeste 2 matrici de la tastatura si sa ofere posibilitatea de a roti cele 2 matrici\n"
						" simultan la stanga sau la dreapta.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("16.Write a function that reads 2 matrices from the keyboard and offers the possibility to rotate the 2 matrices"
						" simultaneously to the left or to the right.\n"
					"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readRotateMatrices();
			break;
		}
		case 17:{
			if (menu_language == 1)
			{
				printf("17. Sa se scrie o functie care converteste un numar double to string. \n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("17. Write a function that converts a double number to string. \n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readConvertDoubleToString();
			break;
		}
		case 18:{
			if (menu_language == 1)
			{
				printf("18. Sa se scrie o functie care formeaza diagonala principala unei matrici patratice din elementele min de pe"
						"linia respectiva.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			if (menu_language == 1)
			{
				printf("18. Write a function that creates the main diagonal of a square matrix from the min elements on"
						"the respective line.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readFormMatrixDiagonalFromMinRowElem();
			break;
		}
		case 19:{
			if (menu_language == 1)
			{
				printf("19. Sa se scrie o functie care citeste o matrice patratica de numere intregi dintr-un fisier"
						" si o stocheaza si afiseaza corespunzator."
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("19. Write a function that reads a square matrix of integers from a file, stores and displays it accordingly.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readMatrixFromFile();
			break;
		}
		case 20:{
			if (menu_language == 1)
			{
				printf("20. Sa se scrie o functie care citeste o matrice 2x3 si afiseaza matricea si transpusa acesteia.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("20. Write a function that reads a 2x3 matrix and displays the matrix and its transpose.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			transposeOf2x3Matrix();
			break;
		}
		case 21:{
			if (menu_language == 1)
			{
				printf("21. Sa se scrie o functie care citeste 2 matrici obtine produsul lor. Linia din prima matrice se inmulteste cu"
						" coloana din a doua matrice.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("21. Write a function that reads 2 matrices and obtains their product. The line in the first matrix is multiplied by"
						" the column from the second matrix.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readMultiplyTwoSquareMatrices();
			break;
		}
		case 22:{
			if (menu_language == 1)
			{
				printf("22. Sa se scrie o functie care calculeaza coloana cu suma cea mai mica a elementelor dintr-o matrice.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("22. Write a function that calculates the column with the smallest sum of elements within a matrix.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readCalculateMatrixSmallestColumn();
			break;
		}
		case 23:{
			if (menu_language == 1)
			{
				printf("23. Sa se creeze un convertor fahrenheit to celsius / celsius to fahrenheit. Sa se poata introduca numere cu surfix C / F\n"
						" pentru determinarea unitatii de masura.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("23. Create a fahrenheit to celsius / celsius to fahrenheit converter. Make it capable of entering numbers with suffix C / F"
						" to determine the measurement unit to be converted.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			convertFahrenheitCelciusORViceversa();
			break;
		}
		case 24:{
			if (menu_language == 1)
			{
				printf("24. Sa se scrie o functie care sa afiseze tabelul ASCII.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("24. Write a function that displays the ASCII table.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			ASCIItableDisplay();
			break;
		}
		case 25:{
			if (menu_language == 1)
			{
				printf("25. Sa se scrie o functie care afiseaza cu delay de 10 secunde valori de tip int generate aleator. Sa se afiseze"
						" concomitent valoarea aleatoare curenta si valoarea intarziata din urma cu 10 secunde. HINT: Se va folosi functia"
						" rand din <conio.h> pentru generarea de numere aleatoare, se va folosi functia sleep() din <unistd.h> sau Sleep()"
						"din <windows.h> pentru masurarea intervalelor de timp.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("25. Write a function that displays randomly generated integer values with a delay of 10 seconds. Display simultaneously"
						" the current random value and the value from 10 seconds ago. HINT: The rand function from <conio.h> will be used"
						" for the generation of random numbers, the function sleep() from <unistd.h> or Sleep() from <windows.h> will be used for measuring"
						" time intervals.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}

			currentAndDelayedRand();
			break;
		}
		case 26:{
			if (menu_language == 1)
			{
				printf("26. Sa se scrie o functie care concateneaza 4 chars intr-un unsigned int. Sa se foloseasca int-ul pentru afisarea"
						" cuvantului format din cele 4 chars.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("26. Write a function that concatenates 4 chars into an unsigned int. Use int variable to display the word"
						" consisting of those 4 chars.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			storeCharsIntoInt();
			break;
		}
		case 27:{
			if (menu_language == 1)
			{
				printf("27. Sa se construiasca un codificator pentru mesajul dintr-un fisier .txt. Regula codarii: se va nega ultimul bit al\n"
						" caracterului citit, exceptie facand caracterele speciale: '\\n', '\\0', ' '. Rezultatul va fi salvat intr-un .txt si\n"
						" afisat in consola.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("27. Build an encoder for the message from a .txt file. Coding rule: the last bit from the character being read"
						" will be negated, exception will do the special characters: '\\n', '\\0', ' '. The result will be saved in a .txt and"
						" displayed in the console.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readEncodeContentOfTxt();
			break;
		}
		case 28:{
			if (menu_language == 1)
			{
				printf("28. Sa se construiasca un decodor pentru mesajul codat anterior. Regula decodarii: se va nega ultimul bit al"
						" caracterului citit, exceptie facand caracterele speciale: '\\n', '\\0', ' '. Rezultatul va fi salvat intr-un .txt"
						" si afisat in consola.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("28. Build a decoder for the previously coded message. Decoding rule: the last bit from the character being read"
						" will be negated, exception will do the special characters: '\\n', '\\0', ' '. The result will be saved in a .txt file"
						" and displayed in the console."
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readDecodeContentFromTxt();
			break;
		}
		case 29:{
			if (menu_language == 1)
			{
				printf("29. Sa se scrie o functie care citeste un mesaj. Mesajul va fi impartit in cuvinte, cuvintele vor fi afisare pe iteratii"
						" dupa cum urmeaza: Exemplu: Ana are mere\n"
						" 1. A a m\n"
						" 2. An ar me\n"
						" 3. Ana are mer\n"
						" 4. Ana are mere\n"
						" HINT: vor fi necesare 3 nested loops.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("29. Write a function that reads a message. The message will be divided into words, the words will be displayed iteratively"
						" as follows: Example: Anna has apples\n"
						" 1. A h a\n"
						" 2. An ha ap\n"
						" 3. Ann has app\n"
						" 4. Anna has appl\n"
						" 5. Anna has apple\n"
						" 6. Anna has apples\n"
						" HINT: 3 nested loops will be needed.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readSplitMessageIteratedPrint();
			break;
		}
		case 30:{
			if (menu_language == 1)
			{
				printf("30. Sa se scrie o functie care verifica daca un string contine un cuvant \\ sir de caractere specificat.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("30. Write a function that checks if a string contains a specified word \\ sequence of characters \\ substring.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readCheckElementWithinString();
			break;
		}
		case 31:{
			if (menu_language == 1)
			{
				printf("31. Sa se scrie o functie care filtreaza un string \\ sterge dintr-un string un cuvant \\ sir de caractere specificat.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("31. Write a function that filters a string \\ deletes a specified word \\ character sequence from the string.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readFilterString();
			break;
		}
		case 32:{
			if (menu_language == 1)
			{
				printf("32. Sa se scrie o functie care citeste si filtreaza continutul dintr-un fisier .xml dat. REGULA FILTRARII: sa se stearga\n"
						" tag-urile si sa se afiseze doar informatia relevanta.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("32. Write a function that reads and filters the content of a given .xml file. FILTERING RULE: to delete"
						" the tags and to display only the relevant information.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readFilterXMLFileContent();

			break;
		}
		case 33:{
			if (menu_language == 1)
			{
				printf("33. Sa se scrie o functie care sa converteasca un string in int. REGULA: se vor lua in considerare doar caracterele"
						" [0-9] din string-ul pasat ca parametru.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("33. Write a function that converts a string into an int. RULE: From the string passed as a parameter"
						" the only characters to be considered for conversion are within [0-9] interval.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			char message[CHAR_ARRAY_SIZE] = {'\0'};
			printf("Enter a message: ");
			fflush(stdin);
			scanf("%s", message);
			int value = convertStringToInt(&message[0]);
			printf("The integer converted value: %d\n", value);
			break;
		}
		case 34:{
			if (menu_language == 1)
			{
				printf("34. Sa se ajusteze extinda functionalitatea de la Cerinta 31 astfel incat informatia filtrata din fisierul .xml sa"
						" fie stocata intr-un vector de structuri. Informatia age sa fie stocata ca numar intreg.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("34. Adjust / extend the functionality from Exercise 31 so that the information filtered from the .xml file is"
						" stored in a vector of structures. The Age information should be stored as an integer.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			struct XML_Database_Content* structura = readStoreFilteredXMLFileContentInStruct();
			displayStructuraObtainedFromXML(structura);
			free(structura);
			break;
		}
		case 35:{
			if (menu_language == 1)
			{
				printf("35. Sa se scrie o functie care sa ofere posibilitatea de a sorta vectorul de structuri de la cerinta 33 crescator"
						" in functie de varsta.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("35. Write a function that offers the possibility to sort the vector of structures from Exercise 34 in ascending order"
						" depending on age.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			struct XML_Database_Content* structura = readStoreFilteredXMLFileContentInStruct();

			sortXmlContentStoredStruct(structura);

			//Displaying the age sorted structure
			if(menu_language == 1)
			{
				printf("Structura sortata crescator dupa varsta este: \n");
			}
			else
			{
				printf("The age-ascending sorted structure is: \n");
			}
			printf("-------------------------------------------\n");
			displayStructuraObtainedFromXML(structura);
			free(structura);
			break;
		}
		case 36:{
			if (menu_language == 1)
			{
				printf("36. Sa se extinda functionalitatea de la cerinta 34,35 astfel incat continutul sortat al structurii sa fie"
						" salvat intr-un document .html folosind un tabel ca forma de structurare. Fiecare informatie sa fie scrisa"
						" in propria coloana.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("36. Extend the functionality from Exercise 34,35 so that the sorted content of the structure is"
						" saved in a .html document using a table as a form of structuring. Every piece of information must be written"
						" in its own column.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			struct XML_Database_Content* structura = readStoreFilteredXMLFileContentInStruct();

			sortXmlContentStoredStruct(structura);
			saveSortedXmlStructContentInHTML(structura);
			free(structura);
			break;
		}
		case 37:{
			if (menu_language == 1)
			{
				printf("37. Sa se scrie o functie care calculeaza numarul de aparitii ale unui cuvant / sir de character / substring intr-un"
						" string.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("37. Write a function that calculates the number of occurrences of a word / sequence of character / substring within a"
						" string.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			readCountElementWithinString();
			break;
		}
		case 38:{
			if (menu_language == 1)
			{
				printf("38. Sa se scrie o functie care sa imparta un numar la o valoare fara a folosi division operator. Alternativ sa se\n"
						" scrie o functie care sa inmulteasca un numar cu o valoare fara a folosi multiply operator.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("38. Write a function that divides a number by a value without using the division operator. Alternatively"
						" write a function that multiplies a number by a value without using the multiply operator.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			int number;
			int op;

			printf("Enter an int number: \n");
			fflush(stdin);
			scanf("%d", &number);
			printf("Enter an integer multiplier / divider: \n");
			fflush(stdin);
			scanf("%d", &op);

			printf("Number is: %d\n", number);
			printf("Multiplier / Divider is: %d\n", op);
			printf("%d * %d = %d\n", number, op, multiplyWoStarOp(number, op));
			printf("%d / %d = %f\n", number, op, divideWoDivisionOp(number, op));
			break;
		}
		case 39:{
			if (menu_language == 1)
			{
				printf("39. Sa se creeze o lista inlantuita de elemente de tip intreg. Sa se foloseasca o bucla pentru adaugarea unui numar customizat de elemente"
						" sa se ofere posibilitatea de a iesi din bucla la comanda utilizatorului, si sa se afiseze toate elementele introduse in acea bucla."
						" TERMINOLOGIE: Lista inlantuita este un tip de date complex, ce consista intr-o structura cu cel putin 2 element: valoare si pointer"
						" catre urmatorul element. Memoria se va aloca dinamic pentru fiecare element adaugat in lista. Principalul beneficiu al unei liste"
						" inlanuite consta in posibilitatea de a adauga un numar variabil de element putand sterge sau adauga un element fara a face copii"
						" sau interschimbari, ci doar modificand adresele pointerilor assignati pentru elementul urmator // anterior.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			else
			{
				printf("39. To create a linked list of integer elements. Use a loop to add a custom number of elements"
						" and offer the possibility to exit the loop at the user's command, and to display all the elements inserted within that loop."
						" TERMINOLOGY: The chained list is a complex data type, which consists of a structure with at least 2 elements: value and pointer"
						" to the next element. Memory will be allocated dynamically for each element added to the list. The main benefit of a linked-list"
						" consists in the possibility of adding a variable number of elements, being able to delete or add an element without making copies"
						" or exchanges, but only by changing the addresses of the assigned pointers for the next / previous element.\n"
				"-------------------------------------------------------------------------------------------------------------\n\n");
			}
			createAddElementsOnLinkedList();
			break;
		}
		default: {
			isExerciseFound = false;
			if (menu_language == 1)
			{
				printf("Cerinta cu numarul %d nu exista.\n", exercise_number);
			}
			else
			{
				printf("Exercise with number %d does not exist.\n", exercise_number);
			}
			break;
		}
	}
	if (menu_language == 1)
	{
		if (isExerciseFound)
		{
			printf("\nExercitiu terminat.\n\n");
		}
	}
	else
	{
		if (isExerciseFound)
		{
			printf("\nExercise finished.\n\n");
		}
	}
}

void readCheckSimbolString()
{
	/*
	RO:
	Functie care citeste un simbol sau sir de caracter, calculeaza dimensiunea sirului,
	iar pentru fiecare caracter in parte verifica apartenenta la intervalul [0-9][a-f][A-F].
	Rezolvare cerinta 1 si 5

	EN:
	Function that reads a character or sequence of characters. calculates the dimension of the sequence
	and for each individual character it checks if it belogs within the interval [0-9][a-f][A-F]/
	Solution for exercises 1 and 5.
	*/

	char message[CHAR_ARRAY_SIZE];
	printf("Enter the symbol / message: ");
	setbuf(stdout, NULL);
	fflush(stdin);
	scanf("%s", message);
	if (CheckHexadecimalString(message, calculateNoOfCharsFromMessage(message)) == false)
	{
		printf("The symbol / message is WITHIN the specified interval.\n");
	}
	else
	{
		printf("The symbol / message has characters OUTSIDE the specified interval.\n");
	}
}

bool CheckHexadecimalString(char message[], unsigned int limit)
{
	/*
	RO:
	Functie care verifica daca un sir este formatat ca numar hexadecimal
	Se verifica apartenenta caracterelor la intervalul: [0-9] / [a-f] / [A-F]

	EN:
	Function that checks if a sequence of characters it's properly formated as hexadecimal number.
	It checks if each character belongs within the interval: [0-9] / [a-f] / [A-F]
	*/
	
    int i;
    for(i=0;i<limit;i++)
    {
    	//se verifica daca este cifra 0-9
        if(message[i]>47&&message[i]<58)
        {
            continue;
        }
        //se verifica daca este litera A-F
        else if(message[i]>64 && message[i]<71)
        {
            continue;
        }
        //se verifica daca este litera a-f
        else if(message[i]>96 && message[i]<103)
        {
            continue;
        }
        else
        {
            printf("Character: %c  at index %d it is not a hexadecimal character.\n", message[i], i);
            return true;
        }
    }
    return false;
}

void readCheckNoOfDigits(bool useLoop)
{
	/*
	RO:
	Functie care citeste un numar si calculeaza numarul de cifre din acel numar in 2 feluri diferite
	Primeste ca parametru un bool isLoop continand variata de calcul:
	"true" pentru bucla;
	"false" pentru recursivitate;
	Afiseaza numarul de cifre al numarului introdus.
	Rezolvare cerintele 2,3.

	EN:
	Function that reads a number and calculates the number of digits of that number in 2 different ways.
	Takes as parameter a bool isLoop containing the method of calculation:
	"true" for loop;
	"false" for recursion;
	Prints out the number of digits within the given number.
	Solution for exercises 2,3.
	*/
	
	unsigned int number;
	printf("Enter a positive value: ");
	fflush(stdin);
	scanf("%d", &number);
	if (useLoop)
	{
		unsigned int noDigits = CalculateNoOfDigits(number);
		printf("The number %d has %d digits. Output calculated using loops.\n", number, noDigits);
	}
	else
	{
		unsigned int noDigits = CalculateNoOfDigitsRecursively(number);
		printf("The number %d has %d digits. Output calculated using recursion.\n", number, noDigits);
	}
}

unsigned int CalculateNoOfDigits(unsigned int number)
{
	/*
	RO:
	Functie care citeste si calculeaza numarul de cifre dintr-un numar introdus folosind bucle.
	Rezolvare pentru cerinta 2.

	EN:
	Function that reads and calculates the number of digits within a number by using loops.
	Solution of exercise 2.
	*/

	unsigned int NoOfDigits = 0;
	while (number > 0)
	{
		number = number/10;
		NoOfDigits++;
	}
	return NoOfDigits;
}

unsigned int CalculateNoOfDigitsRecursively(unsigned int number)
{
	/*
	RO:
	Functie care citeste si calculeaza numarul de cifre dintr-un numar introdus folosind recursivitate.
	Rezolvare pentru cerinta 3.

	EN:
	Function that reads and calculates the number of digits within a number by using recursion.
	Solution for exercise 3.
	*/
	
	//static variables initializations happen only once.
	//Reason: static variables are stored in heap, they get allocated once and live 'till deallocation or end of program
	static unsigned int NoOfDigits = 0;

	if(number > 0)
	{
		number = number/10;
		CalculateNoOfDigitsRecursively(number);
		NoOfDigits++;
	}
	return NoOfDigits;
}

unsigned int calculateNoOfCharsFromMessage(const char message[])
{
	/*
	RO:
	Functie care va calcula numarul de caractere dintr-un mesaj / sir de caractere dat.
	Se paseaza ca argument mesajul dat.
	Se returneaza numarul de caractere din mesaj.

	EN:
	Function that will calculate the number of character within a string message / character sequence given.
	Takes as argument the given message.
	Return the number of characters within the message.
	*/
    unsigned int i=0;
    while(message[i]!='\0') //while non-null / space character
    {
        i++;
    }

    return i; //return the exact number of characters
}

void DigitConcatenate()
{
	/*
	RO:
	Functie care citeste 3 cifre si le concateneaza intr-un numar intreg.
	Rezolvare cerinta 6

	EN:
	Function that reads 3 digits and concatenate them into an integer number.
	Solution for exercise 6.
	*/
    int digit=-1;
    int digit2=-1;
    int digit3=-1;
    printf("Enter 1st digit: ");
	fflush(stdin);
	scanf("%d", &digit);
    while(digit<0 || digit>9)
    {
    	printf("1st digit is Negative or Greater than 10. Re-enter the digit properly:\n");
    	fflush(stdin);
    	scanf("%d", &digit);
    }
    printf("Enter 2nd digit: ");
    fflush(stdin);
    scanf("%d", &digit2);
    while(digit2<0 || digit2>9)
    {
    	printf("2nd digit is Negative or Greater than 10. Re-enter the digit properly:\n");
    	fflush(stdin);
    	scanf("%d", &digit2);
    }
    printf("Enter 3rd digit: ");
    fflush(stdin);
    scanf("%d", &digit3);
    while(digit3<0 || digit3>9)
    {
    	printf("3rd digit is Negative or Greater than 10. Re-enter the digit properly:\n");
    	fflush(stdin);
    	scanf("%d", &digit3);
    }

    int numberConcat = digit*100 + digit2*10 + digit3;
    printf("Output: %d\n\n", numberConcat);
}

void CheckNoDivisible16()
{
	/*
	RO:
	Functie care citeste un numar si verifica daca acesta este divizibil cu 16.
	Iar daca numarul este putere a lui 16, se afiseaza puterea / exponentul.
	Rezolvare cerinta 7

	EN:
	Function that reads a number and checks if the number is divisible by 16
	and if it is power of 16, prints out the power / exponent.
	Solution for exercise 7
	*/
	
    unsigned int number;
    printf("Enter a positive value: ");
	fflush(stdin);
	scanf("%d", &number);
    while(number<1)
    {
    	printf("The value is negative or null. Please enter a strictly positive value:\n");
    	fflush(stdin);
    	scanf("%d", &number);
    }
    if (number%16 == 0 )
    {
    	printf("The value %d is DIVISIBLE with 16. ", number);
    	unsigned int powered_compare = 16*16;
    	unsigned int max_power = 16*16*16*16*16;
    	unsigned int rank = 2;
    	while(powered_compare <= number && powered_compare <= max_power)
    	{
    		if (number == powered_compare)
    		{
    			printf("The value %d is POWER of 16:  16 ^ %d == %d. \n", number, rank, number);
    		}
    		rank++;
    		powered_compare*=16;
    	}
    }
    else
    {
        printf("The value %d is NOT divisible with 16 NOR a power of 16.\n", number);
        printf("%d / 16 = %d \n\n", number, number/16);
    }

}

unsigned int reverseNumber(unsigned int number)
{
	/*
	RO:
	Functie care reconstruieste un numar in oglinda.
	Parametru numarul unsigned dat pentru oglindire.
	Returneaza numarul oglindit
	Exemplu: input = 123; output = 321
	Rezolvare cerinta 8.

	EN:
	Function that rebuilds a number in the mirror
	The parameter is the number of type unsigned int to be mirrored.
	It returns the mirrored number.
	Example: input = 123l output = 321;
	Solution for exercise 8.
	*/

	printf("The original number is: %d\n", number);
	unsigned int newNumber = 0;
	while (number > 0)
	{
		newNumber += number%10;
		number = number/10;
		if(number>0) //don't multiply on last iteration
		{
			newNumber *= 10;
		}
	}
	printf("The reversed number is: %d \n", newNumber);
	return newNumber;
}

void ConvertFromHexaToDecimal()
{
	/*
	RO:
	Functie care citeste si converteste un sir de caractere hexadecimale intr-un numar decimal 
	de tip unsigned int.
	Rezolvare pentru cerinta 9

	EN:
	Function that reads and converts a sequence of hexadecimal characters into a decimal number
	of unsigned int type.
	Solution for exercise 9.
	*/
    char number[CHAR_ARRAY_SIZE];
    printf("Enter a hexadecimal value: ");
    fflush(stdin);

    scanf("%s", number); //no '&' required ar number[] is a pointer, and contains an address.
    unsigned int limit = calculateNoOfCharsFromMessage(number);

    int i;
    unsigned int rank=0;
    unsigned int numberInDecimal=0;
    unsigned int HoldValueOfChar;

    if(!CheckHexadecimalString(number, limit))
    {
    	printf("Hexadecimal Value: %s\n", number);
        for(i=limit-1; i>=0; i--)
        {
        	int digit = FromCharToInt(number[i]);
        	if (digit < 16) // check if we got proper value for hexadecimal digit
        	{
        		HoldValueOfChar = digit;
            	numberInDecimal += HoldValueOfChar*GetPowered16(rank);
            	rank++;
        	}
        }
        printf("Decimal Value: %d\n", numberInDecimal);
    }
    else
    {
    	printf("Unable to convert to decimal: %s\n", number);
    }
}

unsigned int GetPowered16(unsigned int rank)
{
	/*
	RO:
	Functie care returneaza o putere a lui 16.
	Parametru este exponentul a carui putere a lui 16 se doreste.

	EN:
	Function that returns a power of 16.
	The parameter is the exponent of which the power of 16 should be obtained.
	*/
    int value=1;
    while(rank)
    {
        value*=16;
        rank--;
    }
    return value;
}

unsigned int FromCharToInt(char character)
{
	/*
	RO:
	Functie care converteste un char in int.
	Functioneaza cu valori din intervalul: ['0'-'9'] / ['a'-'f'] / ['A'-'F']
	Ia ca parametru simbolul / cifra hexadecimala ce se doreste convertit.
	Returneaza valoarea numerica corespunzatoare [0-15] sau 99 daca simbolul nu se afla in interval.
	Folosit in rezolvarea cerintei 9

	EN:
	Function that converts a char to int.
	Works with values from interval: ['0'-'9'] / ['a'-'f'] / ['A'-'F']
	Takes as parameter the symbol / hexadecimal digit to be converted
	Returns the corresponding numerical value of it [0-15], or 99 if the simbol doesn't match the interval.
	Function used in solving exercise 9.
	*/
    switch(character)
    {
        case 'A': {return 10;}
        case 'B': {return 11;}
        case 'C': {return 12;}
        case 'D': {return 13;}
        case 'E': {return 14;}
        case 'F': {return 15;}
        case 'a': {return 10;}
        case 'b': {return 11;}
        case 'c': {return 12;}
        case 'd': {return 13;}
        case 'e': {return 14;}
        case 'f': {return 15;}
        case '9': {return 9;}
        case '8': {return 8;}
        case '7': {return 7;}
        case '6': {return 6;}
        case '5': {return 5;}
        case '4': {return 4;}
        case '3': {return 3;}
        case '2': {return 2;}
        case '1': {return 1;}
        case '0': {return 0;}
    }
    return 99; //will check if whatever I get from this function is < 16.
}

void ConversionOfDecimalToBinary()
{
	/*
	RO:
	Functie care citeste un numar decimal si obtine conversia sa binara
	Rezolvarea cerintei 10.

	EN:
	Function that reads a decimal number and obtains the binary conversion of it.
	Solution for exercise 10.
	*/

	unsigned int number = 0;
    printf("Enter an unsigned decimal value: ");
    fflush(stdin);

    scanf("%d", &number);
    printf("Decimal: %d\n", number);
    ConvertDecimalToBinary(number);
}

void ConvertDecimalToBinary(unsigned int number)
{
	/*
	RO:
	Functie care converteste numar decimal in secventa binara.
	Parametru - numar decimal de tip unsigned int.
	Functie folosita in rezolvarea cerinta 10.

	EN:
	Function that converts a decimal number into a binary sequence.
	Perimeter - decimal number of type unsigned int.
	Function used in solving exercise 10.
	*/
	char binary[100] = {'\0'}; // initialize all elements to null-terminator
	unsigned int index = 0;
	while(number > 0)

	{
		binary[index] = (number%2 == 1) ? '1' : '0';
		index++;
		number = number / 2; // or use shifting: number = number >> 1;
	}
	printf("Binary: ");
	while(index > 0)
	{
		index--;
		printf("%c", binary[index]);
	}
	printf("\n");

}

void NegateSpecificBit()
{
	/*
	RO:
	Functie care citeste un numar ca unsigned int si neaga un bit specificat al acelui numar.
	Rezolvare pentru cerinta 11

	EN:
	Function that reads a number as unsigned int and negates a specified bit within the number.
	Solution for exercise 11.
	*/
	
    unsigned int number;
    printf("Enter a decimal positive value: ");
	fflush(stdin);
	scanf("%d", &number);
	printf("You have entered: %d\n", number);
	printf("The binary representation is: \n");
	ConvertDecimalToBinary(number);
	printf("\n");

	unsigned int bitPosition;
    printf("Enter the Bit Position to negate: \n");
	fflush(stdin);
	scanf("%d", &bitPosition);
	while(bitPosition>32 || bitPosition<0)
	{
	    printf("The bit position is out of range for u32 variable. Re-enter the bit position: \n");
		fflush(stdin);
		scanf("%d", &bitPosition);
	}
	number = number ^ (1<<bitPosition);
	printf("\n-------------------------------------------------\n");
	printf("The binary representation after negation: \n");
	ConvertDecimalToBinary(number);
	printf("\n");
	printf("The decimal value after negation: %d\n", number);

}

void readNumberAndChangeDigit()
{
	/*
	RO:
	Functie care citeste un numar decimal ca unsigned int si ofera posibilitatea de a 
	schimba o cifra din acel numar.
	Rezolvare cerinta 12

	EN:
	Function that reads a decimal number as unsigned int and offers the possibility to 
	change a digit within the number.
	Solution for exercise 12.
	*/

    unsigned int number;
    unsigned int position;
    unsigned int digit;

    printf("Enter a decimal positive value: ");
	fflush(stdin);
	scanf("%d", &number);

	unsigned int totalNoOfDigits = CalculateNoOfDigitsRecursively(number);
    printf("Total Digits: %d\n", totalNoOfDigits);

	printf("Enter the Position of the digit to change: \n");
    fflush(stdin);
	scanf("%d", &position);
	while(position<0 || position >= totalNoOfDigits)
	{
		printf("You have entered a wrong value. Enter a position between [0-%d]: \n", totalNoOfDigits-1);
	    fflush(stdin);
		scanf("%d", &position);
	}

	printf("Enter the new digit: \n");
    fflush(stdin);
	scanf("%d", &digit);

	while(digit<0 || digit > 9)
	{
		printf("You have entered a wrong value. Enter a digit between [0-9]: \n");
	    fflush(stdin);
		scanf("%d", &digit);
	}
	printf("Initial value: %d\n", number);
	unsigned int numberDigits[totalNoOfDigits];
	//Separate all digits and change the specified one
	for (int i=0; i<totalNoOfDigits; i++)
	{
		if (i == position)
		{
			numberDigits[i] = digit;
		}
		else
		{
			numberDigits[i] = number%10;
		}
		number = number/10;
	}
	unsigned int newNumber = 0;
	//Rebuid the number
	for (int i=totalNoOfDigits-1; i>=0; i--)
	{
		newNumber+=numberDigits[i];
		if (i > 0) // don't multiply on last iteration
		{
			newNumber*=10;
		}
	}
	printf("New value: %d\n", newNumber);
}

void ReadCalculateFileWords()
{
	/*
	RO:
	Functie care citeste un fisier txt si calculeaza numarul de cuvinte din fisier.
	Rezolvare la cerinta 13.

	EN:
	Function that reads a txt file and calculates the number of words within the file.
	Solution for exercise 13.
	*/
	#undef FILENAME
	#define FILENAME "\\text_to_read.txt"
	#undef BUFFER_SIZE
	#define BUFFER_SIZE 1000

	char FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(FILE_LOCATION, FILENAME);

	FILE* fp;
	fp=fopen(FILE_LOCATION, "r");
    if(!fp)
    {
        printf("File could not be opened!\n");
        perror("");
        printf("Check Location: %s\n", FILE_LOCATION);
    }
    else
    {
		char* contentReadFromFile = (char*) malloc(BUFFER_SIZE * sizeof(char));
		unsigned int totalNoOfWords = 0;
		//while there is still content to read from file.
		while(fgets(contentReadFromFile, BUFFER_SIZE, fp))
		{
			printf("%s\n", contentReadFromFile);
			totalNoOfWords += CountNumberOfWordsWithinString(contentReadFromFile);
		}
		printf("\n---------------------------------------------------------\n");
		printf("Number of words / white-spaces within the file: %d\n" , totalNoOfWords);
		fclose(fp);
    }
}

unsigned int CountNumberOfWordsWithinString(char str[])
{
	/*
	RO:
	Functie care calculeaza numarul de cuvinte dintr-un string.
	Returneaza numarul de cuvinte din string-ul pasat ca argument.
	Functie folosita pentru rezolvarea cerintei 13.

	EN:
	Function that calculates the number of words within a string
	Returns the number of words within the string passed as argument.
	Function used in solving exercise 13.
	*/
	
    int i=0;
    int numberOfWords=1; //there is at least one word in the string.
    while(str[i]!='\0') //giving me the size of the string:
    {
        if(str[i]==' ') // calculate number of spaces within the string
        {
            numberOfWords++;
        }
        i++;
    }
    return numberOfWords;
}

void NumberToPower()
{
	/*
	RO:
	Functie care citeste un numar intreg unsigned si un exponent intreg unsigned de la tastatura

	EN:
	Function that reads an integer number unsigned and an integer exponent unsigned from the keyboard
	*/
	unsigned int number;
	unsigned int power;
	printf("Enter the base number: \n");
    fflush(stdin);
	scanf("%d", &number);
	printf("Enter the exponent: \n");
    fflush(stdin);
	scanf("%d", &power);
	printf("The number: %d\t Power: %d\n", number,power);
	raiseToPower(&number, power);
	printf("The number raised: %d\n", number);
}

void raiseToPower(unsigned int* base, unsigned int power)
{
	/*
	RO:
	Functie care ridica un numar la o putere
	Ia ca argument baza, si exponentul
	Baza este argument pasat ca REFERINTA.
	Valoarea bazei este modificata in mod direct.

	EN:
	Function that raise a number to power
	Takes the base and the exponent as arguments.
	Base is passed by REFERENCE.
	The value of base is modified directly.
	*/
	
	unsigned int copy_base = *(base);
	if (power==0)
	{
		*(base) = 1;
	}
	while (power > 1)
	{
		*(base) = *(base) * copy_base;
		power--;
	}
}

void InterchangeVarValueWAddSubstr(int* var_A, int* var_B)
{
	/*
	RO:
	Functie care interschimba valoarea din 2 variabile pasate ca referinta
	folosind adunari si scaderi.
	Rezolvare cerinta 14a.

	EN:
	Function that interchange the value between 2 variables passed as reference
	by using additions and subtractions.
	Solution for exercise 14a.
	*/
	
	//addition / subtractions method.
	*(var_A) = *(var_A) + *(var_B);
	*(var_B) = *(var_A) - *(var_B);
	*(var_A) = *(var_A) - *(var_B);
}

void InterchangeVarValueWXOR(int* var_A, int* var_B)
{
	/*
	RO:
	Functie care interschimba valoarea din 2 variabile pasate ca referinta
	folosind operatii pe biti.
	Metoda: XOR
	Rezolvare cerinta 14a. 

	EN:
	Function that interchange the value between 2 variables passed by reference
	by using bitwise operations.
	XOR Method
	Solution for exercise 14a.
	*/
	
	
	//XOR method
	*(var_A) = *(var_A) ^ *(var_B);
	*(var_B) = *(var_A) ^ *(var_B);
	*(var_A) = *(var_A) ^ *(var_B);
}

void ReadInterchangeMatrixLine()
{
	/*
	RO:
	Functie care citeste doua matrici de la tastatura si interschimba
	o linie intre acestea.
	Rezolvare cerinta 14.

	EN:
	Function that reads 2 matrices from the keyboard and interchange
	a line between them.
	Solution for exercise 14
	*/
	#undef MATRIX_DIMENSION
	#define MATRIX_DIMENSION 3
	int matrixA[MATRIX_DIMENSION][MATRIX_DIMENSION];
	int matrixB[MATRIX_DIMENSION][MATRIX_DIMENSION];

	printf("Enter the elements for the FIRST matrix: \n");
	readSquareMatrix(MATRIX_DIMENSION, matrixA);
	printf("Enter the elements for the SECOND matrix: \n");
	readSquareMatrix(MATRIX_DIMENSION, matrixB);

	printf("\nOriginal Matrices: \n");
	printMatrix(MATRIX_DIMENSION, matrixA);
	printMatrix(MATRIX_DIMENSION, matrixB);

	unsigned int line = 0;
	printf("Enter the line to interchange: \n");
	fflush(stdin);
	scanf("%d", &line);
	while(line<0 || line>=MATRIX_DIMENSION)
	{
		printf("Line number is wrong. Re-enter the line to interchange [0-%d]: \n", MATRIX_DIMENSION-1);
		fflush(stdin);
		scanf("%d", &line);
	}
	for(int i = 0; i<MATRIX_DIMENSION; i++)
	{
		if (i==line)
		{
			for(int j = 0; j<MATRIX_DIMENSION; j++)
			{
				//Interchanging values
				InterchangeVarValueWAddSubstr(&matrixA[i][j], &matrixB[i][j]);
			}
		}
	}
	printf("\nAfter interchanging lines: \n");
	printMatrix(MATRIX_DIMENSION, matrixA);
	printMatrix(MATRIX_DIMENSION, matrixB);

}

void readSquareMatrix(const int dimension, int matrix[dimension][dimension])
{
	/*
	RO:
	Functie care initializeaza o matrice patratica cu elemente citite de la tastatura.
	Argumente: dimensiunea_matricii si matricea de initializat.

	EN:
	Function that initialises a square matrix with elements read from the keyboard.
	Takes as arguments the dimension of the matrix and the matrix to be initialized.
	*/
	for(int i = 0; i<dimension; i++)
	{
		for(int j = 0; j<dimension; j++)
		{
			printf("element[%d][%d] = ", i, j);
			fflush(stdin);
			scanf("%d", &matrix[i][j]);
		}
	}
}

void printMatrix(unsigned int dimension, int matrix[dimension][dimension])
{
	/*
	RO:
	Functie care printeaza o matrice

	EN:
	Function that prints a given matrix.
	*/
	printf("--------------------------------\n");
	for(int i=0; i<dimension; i++)
	{
		printf("[");
		for (int j=0; j<dimension; j++)
		{
			printf(" %d ", matrix[i][j]);
		}
		printf("]\n");
	}
	printf("--------------------------------\n");
}

void readArray()
{
	/*
	RO:
	Functie care sa citeasca o matrice dinamica si sa ofere posibilitatea de a
	adauga sau sterge un element al matricii redimensionandu-se de la sine.
	Rezolvare cerinta 15

	EN:
	Function that reads a dynamic matrix and offers the posibility to add an 
	element and resizes it by itself.
	Solution for exercise 15.
	*/
	unsigned int arraySize = 7;
	int* vector = (int*)malloc(sizeof(int)*arraySize);
	printf("Enter the values for the vector elements: \n");
	for(int i=0; i<arraySize;i++)
	{
		printf("element[%d] = ", i);
		scanf("%d", vector+i);
	}
	printf("\nORIGINAL ARRAY:\n");
	printVector(arraySize, vector);
	addElementToVector(&arraySize, &vector);
	printf("\nARRAY AFTER ADDING ELEMENT:\n");
	printVector(arraySize, vector);
	removeElementFromVector(&arraySize, &vector);
	printf("\nARRAY AFTER REMOVING ELEMENT:\n");
	printVector(arraySize, vector);
}

void printVector(unsigned int dimension, int* vector)
{
	/*
	RO:
	Functie care sa printeze un vector dat in consola.

	EN:
	Function that prints a given vector to the console.
	*/
	printf("--------------------------------\n");
	printf("[");
	for(unsigned int i=0; i<dimension; i++)
	{
		printf(" %d ", *(vector+i));
	}
	printf("]\n");
	printf("--------------------------------\n");
}

void addElementToVector(unsigned int* dimension, int** array) //will use double pointer to pass the pointer itself as reference
{
	/*
	RO:
	Functie care sa adauge un element si sa redimensioneze un vector dinamic.
	Ia ca argument o referinta catre dimensiunea vectorului si o referinta catre pointer-ul vectorului 
	dinamic initial.
	Functie folosita in rezolvarea cerintei 15.

	EN: Function that adds an element and resizes the dimension of a dynamic array.
	Takes as argument a reference to the dimension of the vector and a reference to the pointer of the
	dynamic array.
	Function used in solving exercise 15
	
	-------------------------------------------------------------------------------------------------
	*/


	/* The double pointer is used to pass a pointer as reference.
	 * Without the double pointer, the changes done to the pointer variable will not be saved, therefore
	 * a return is necessary to store the changes.*/
	int element;
	unsigned int userIndex;
	printf("Enter the new element: ");
	fflush(stdin);
	scanf("%d", &element);
	printf("Enter the index: ");
	fflush(stdin);
	scanf("%d", &userIndex);
	//Increasing the dimension of the array, as we added one more element.
	*(dimension) = *(dimension)+1;
	//Creating a new dynamic array to store the existing element + the added element.
	int *newVector = (int*)malloc(sizeof(int)*(*(dimension)));
	unsigned int existingArrayindex = 0;
	for(unsigned int i=0; i<(*dimension); i++)
	{
		if(i == userIndex)
		{
			*(newVector+i) = element;
		}
		else
		{
			// from double pointer to simple pointer for initialization purposes:
			int * array_double_pointer_value = *array;
			*(newVector+i) = *(array_double_pointer_value + existingArrayindex);
			existingArrayindex++;
		}
	}
	//Transfer the address of the new created array to the initial pointer and free the resources.
	free(*(array));
	*(array) = newVector;

}

void removeElementFromVector(unsigned int* dimension, int** array) //will use double pointer to pass the pointer itself as reference
{
	/*
	RO:
	Functie care sa stearga un element si sa redimensioneze un vector dinamic.
	Ia ca argument o referinta catre dimensiunea vectorului si o referinta catre pointer-ul 
	vectorului dinamic initial.

	EN:
	Function that removes an element and resizes a dynamic array.
	Takes as argument a reference to the dimention of the array and a refernce to the pointer
	of the dynamic array.
	
	-----------------------------------------------------------------------------------------
	*/
	
	/* The double pointer is used to pass a pointer as reference.
	 * Without the double pointer, the changes done to the pointer variable will not be saved, therefore
	 * a return is necessary to store the changes.*/
	unsigned int userIndex;
	printf("Enter the element index to be removed: ");
	fflush(stdin);
	scanf("%d", &userIndex);
	//Increasing the dimension of the array, as we added one more element.
	*(dimension) = *(dimension)-1;
	//Creating a new dynamic array to store the existing element + the added element.
	int *newVector = (int*)malloc(sizeof(int)*(*(dimension)));
	unsigned int existingArrayindex = 0;
	for(unsigned int i=0; i<(*dimension); i++)
	{
		if(i != userIndex)
		{
			// from double pointer to simple pointer for initialization purposes:
			int * array_double_pointer_value = *array;
			*(newVector + existingArrayindex) = *(array_double_pointer_value + i);
			existingArrayindex++;
		}
	}
	//Transfer the address of the new created array to the initial pointer and free the resources.
	free(*(array));
	*(array) = newVector;

}

void readRotateMatrices()
{
	/*
	RO:
	Functie care sa citeasca 2 matrici patratice 3x3
	si sa ofere posibilitatea de a le roti simultan la DREAPTA sau la STANGA
	Rezolvare cerinta 16.

	EN:
	Function that reads 2 square matrices 3x3 and offers
	the possibility to rotate them to the RIGHT or to the LEFT.
	Solution to exercise 16.
	*/
	#undef MATRIX_DIMENSION
	#define MATRIX_DIMENSION 3
	int matrixA[MATRIX_DIMENSION][MATRIX_DIMENSION];
	int matrixB[MATRIX_DIMENSION][MATRIX_DIMENSION];

	printf("Enter the elements for the FIRST matrix: \n");
	readSquareMatrix(MATRIX_DIMENSION, matrixA);
	printf("Enter the elements for the SECOND matrix: \n");
	readSquareMatrix(MATRIX_DIMENSION, matrixB);

	printMatrix(MATRIX_DIMENSION, matrixA);
	printMatrix(MATRIX_DIMENSION, matrixB);

	int rotate = 0;
	while(rotate != 3)
	{
		printf("Choose the direction to rotate: \n1 <- LEFT\n2 -> RIGHT\n3 - EXIT LOOP \n");
		fflush(stdin);
		scanf("%d", &rotate);
		if (rotate == 1)
		{
			printf("Rotating to LEFT\n");
			rotateMatrixLeft(MATRIX_DIMENSION, matrixA);
			rotateMatrixLeft(MATRIX_DIMENSION, matrixB);
			printMatrix(MATRIX_DIMENSION, matrixA);
			printMatrix(MATRIX_DIMENSION, matrixB);
		}
		else if (rotate == 2)
		{
			printf("Rotating to RIGHT\n");
			rotateMatrixRight(MATRIX_DIMENSION, matrixA);
			rotateMatrixRight(MATRIX_DIMENSION, matrixB);
			printMatrix(MATRIX_DIMENSION, matrixA);
			printMatrix(MATRIX_DIMENSION, matrixB);
		}
		else
		{
			printf("Wrong input!\n");
		}
	}

}

void rotateMatrixLeft(unsigned int dimension, int matrix[dimension][dimension])
{
	/*
	RO:
	Functie care sa roteasca o matrice la stanga.

	EN:
	Function that rotates a matrix to the left.
	*/
	for(unsigned int i=0; i<dimension; i++)
	{
		for (unsigned int j=0; j<dimension; j++)
		{
			if(j < dimension-1) // there are dimension - 1 changes to be made
			{
				InterchangeVarValueWXOR(&matrix[i][j], &matrix[i][j+1]);
			}
		}
	}
}

void rotateMatrixRight(unsigned int dimension, int matrix[dimension][dimension])
{
	/*
	RO:
	Functie care sa roteasca o matrice la dreapta.

	EN:
	Function that rotates a matrix to the right.
	*/
	for(int i=dimension-1; i>=0; i--)
	{
		for (int j=dimension-1; j>=0; j--)
		{
			if(j > 0) // there are dimension - 1 changes to be made
			{
				InterchangeVarValueWXOR(&matrix[i][j], &matrix[i][j-1]);
			}

		}
	}
}

void readConvertDoubleToString()
{
	/*
	RO:
	Functie care citeste un numar double si il converteste in string.
	Rezolvare cerinta 17.

	EN:
	Function that reads a double and converts it to string.
	Solution to exercise 17.
	*/
	double number;
	char sign = '\0';
	printf("Enter a floating value: ");
	fflush(stdin);
	scanf("%lf", &number);
	int IntegerPart = number;
	int ZecimalPart = (number-IntegerPart)*1000000; // take the first 6 zecimals
	if (number < 0)
	{
		sign = '-';
		IntegerPart = IntegerPart*(-1); //treat this as strictly positive value
		ZecimalPart = (number+IntegerPart)*(-1000000); // take the first 6 zecimals
	}
	//In case there are less than 6 zecimals at the end. Remove the extra zero zecimals at the end.
	while(ZecimalPart%10 == 0)
	{
		ZecimalPart/=10;
	}
	int SizeOfIntPart = CalculateNoOfDigits(IntegerPart);
    int SizeOfZecPart = CalculateNoOfDigits(ZecimalPart);
    char IntegerPartDigits[SizeOfIntPart+1]; // 1 is reserved for null-terminator
    char ZecimalPartDigits[SizeOfZecPart+1];  // 1 is reserved for null-terminator

    int index = SizeOfIntPart-1; //because index starts from 0;
    while(IntegerPart)
    {
    	IntegerPartDigits[index] = DigitsToChars(IntegerPart%10);
        IntegerPart/=10;
        index--;
    }
    IntegerPartDigits[SizeOfIntPart] = '\0'; // adding the null-terminator at the end of the string.

    index = SizeOfZecPart-1;
    while(ZecimalPart)
    {
    	ZecimalPartDigits[index] = DigitsToChars(ZecimalPart%10);
        ZecimalPart/=10;
        index--;
    }
    ZecimalPartDigits[SizeOfZecPart] = '\0'; // adding the null-terminator at the end of the string.
    printf("Your string is: %c%s,", sign, IntegerPartDigits);
    printf("%s\n", ZecimalPartDigits);
	
}

char DigitsToChars(int digit)
{
	/*
	RO:
	Functie care converteste o cifra [0-9] in character.
	Returneaza caracter
	Ia ca argument un int cifra.

	EN:
	Function that converts a digit[0-9] into a character.
	Returns a character
	Takes as argument an int digit.
	*/
    switch(digit)
    {
        case 0:{return '0';}
        case 1:{return '1';}
        case 2:{return '2';}
        case 3:{return '3';}
        case 4:{return '4';}
        case 5:{return '5';}
        case 6:{return '6';}
        case 7:{return '7';}
        case 8:{return '8';}
        case 9:{return '9';}
        default:{return '\0';}
    }
}


void readFormMatrixDiagonalFromMinRowElem()
{
	/*
	RO:
	Functie care citeste o matrice patratica de la tastatura si
	formeaza diagonala principala a matricii din elementele min de pe linia respectiva
	Rezolvare cerinta 18.

	EN:
	Function that reads a square matrix from keyboard and
	forms the diagonal of it from the min elemens of corresponding row.
	Solution for exercise 18.
	*/
	#undef MATRIX_DIMENSION
	#define MATRIX_DIMENSION 3
	int matrixA[MATRIX_DIMENSION][MATRIX_DIMENSION];

	printf("Enter the elements for the matrix: \n");
	readSquareMatrix(MATRIX_DIMENSION, matrixA);
	printMatrix(MATRIX_DIMENSION, matrixA);
	//Create diagonal of matrix from smaller element on the row
	for(unsigned int i=0; i<MATRIX_DIMENSION; i++)
	{
		int* minRowElem = &matrixA[i][i]; // initialize this with the diagonal element
		for(unsigned int j=0; j<MATRIX_DIMENSION; j++)
		{
			//Finding the smallest element on the row
			if(matrixA[i][j] < *(minRowElem))
			{
				minRowElem = &matrixA[i][j];
			}
		}
		if (*minRowElem!=matrixA[i][i]) // if the minRowElem pointer no longer points to the diagonal element
		{
			InterchangeVarValueWXOR(&matrixA[i][i], minRowElem);
		}
	}
	printf("The matrix after forming the diagonal.\n");
	printMatrix(MATRIX_DIMENSION, matrixA);
}


void readMatrixFromFile()
{
	/*
	RO:
	Functie care citeste si stocheaza o matrice patratica intreaga dintr-un fisier.
	Rezolvare cerinta 19

	EN:
	Function that reads and stores a square matrix of integers from a file
	Solution to exercise 19
	*/
	#undef FILENAME
	#define FILENAME "\\matrice3x3.txt"
	#undef MATRIX_DIMENSION
	#define MATRIX_DIMENSION 3

	char FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(FILE_LOCATION, FILENAME);

	FILE* fp;
	fp=fopen(FILE_LOCATION, "r");
    if(!fp)
    {
        printf("File could not be opened!\n");
        perror("");
        printf("Check Location: %s\n", FILE_LOCATION);
    }
    else
    {
		char characterReadFromFile = ' ';

		int matrix[MATRIX_DIMENSION][MATRIX_DIMENSION];
		unsigned int matrixRow = 0;
		unsigned int matrixCol = 0;

		int numericValueConverted = 0;

		//Convert text to numbers and initialize the matrix
		while(characterReadFromFile != EOF ) // while not reached the end of the file.
		{

			characterReadFromFile = fgetc(fp); //read each character one by one
			if(characterReadFromFile == ' ' || characterReadFromFile == '\t') // if space or tabulation
			{
				numericValueConverted = numericValueConverted/10; // undoing last multiply by 10
				matrix[matrixRow][matrixCol] = numericValueConverted;
				numericValueConverted=0;
				matrixCol++;

			}
			else if(characterReadFromFile == '\n') // if end of the line
			{
				numericValueConverted = numericValueConverted/10; // undoing last multiply by 10
				matrix[matrixRow][matrixCol] = numericValueConverted;
				numericValueConverted=0;
				matrixCol=0;
				matrixRow++;
			}
			else if(characterReadFromFile == EOF) // if end of the file
			{
				numericValueConverted = numericValueConverted/10; // undoing last multiply by 10
				matrix[matrixRow][matrixCol] = numericValueConverted;
			}
			else
			{
				unsigned int digit = FromCharToInt(characterReadFromFile);
				if(digit < 10) // will get only the
				{
					numericValueConverted += digit;
					numericValueConverted = numericValueConverted * 10;
				}
			}
		}

		printf("The following matrix was read from the file: \n");
		printMatrix(MATRIX_DIMENSION,matrix);
		fclose(fp);
    }
}

void transposeOf2x3Matrix()
{
	/*
	RO:
	Functie care citeste o matrice 2x3 si afiseaza transpusa acesteia
	Rezolvare cerinta 20

	EN: 
	Function that reads a 2x3 matrix and prints the transpose of it
	Solution for exercise 20
	*/
	#define MATRIX_ROWS 2
	#define MATRIX_COLUMNS 3
	int Matrix2x3[MATRIX_ROWS][MATRIX_COLUMNS];
	readMatrix(MATRIX_ROWS,MATRIX_COLUMNS,Matrix2x3);
	int transposeMatrix3x2[MATRIX_COLUMNS][MATRIX_ROWS];
	printf("The original matrix is: \n");
	for(unsigned int i=0; i<MATRIX_ROWS; i++)
	{
		printf("[ ");
		for(unsigned int j =0; j<MATRIX_COLUMNS; j++)
		{
			printf(" %d ", Matrix2x3[i][j]);
		}
		printf("]\n");
	}

	printf("The transpose is: \n");
	for(unsigned int i=0; i<MATRIX_COLUMNS; i++)
	{
		printf("[ ");
		for(unsigned int j =0; j<MATRIX_ROWS; j++)
		{
			//Initialize / print the transpose matrix
			transposeMatrix3x2[i][j] = Matrix2x3[j][i];
			printf(" %d ", transposeMatrix3x2[i][j]);
		}
		printf("]\n");
	}
}

void readMatrix(const int Rows, const int Columns,  int matrix[Rows][Columns])
{
	/*
	RO:
	Functie care citeste de la tastatura o matrice de orice dimensiune

	EN:
	Function that reads from keyboard a matrix of any dimension
	*/
	for(int i = 0; i<Rows; i++)
	{
		for(int j = 0; j<Columns; j++)
		{
			printf("element[%d][%d] = ", i, j);
			fflush(stdin);
			scanf("%d", &matrix[i][j]);
		}
	}
}

void readMultiplyTwoSquareMatrices()
{
	/*
	RO:
	Functie care citest si inmulteste 2 matrici: linie cu coloana.
	Rezolvare cerinta 21.

	EN:
	Function that reads and multiplies 2 matrices: line with column.
	Solution for exercise 21.
	*/
	#undef MATRIX_DIMENSION
	#define MATRIX_DIMENSION 3
	int matrixOne[MATRIX_DIMENSION][MATRIX_DIMENSION];
	int matrixTwo[MATRIX_DIMENSION][MATRIX_DIMENSION];
	printf("Enter the elements for the FIRST matrix: \n");
	readSquareMatrix(MATRIX_DIMENSION, matrixOne);
	printf("Enter the elements for the SECOND matrix: \n");
	readSquareMatrix(MATRIX_DIMENSION, matrixTwo);
	printf("Matrix One: \n");
	printMatrix(MATRIX_DIMENSION, matrixOne);
	printf("Matrix Two: \n");
	printMatrix(MATRIX_DIMENSION, matrixTwo);
	//Calculate the result:
	for(unsigned int line=0; line<MATRIX_DIMENSION; line++)
	{
		for(unsigned int column=0; column<MATRIX_DIMENSION; column++)
		{
			//Matrix one will also store the result.
			matrixOne[line][column] = matrixOne[line][column] * matrixTwo[column][line];
		}
	}
	printf("Result: \n");
	printMatrix(MATRIX_DIMENSION, matrixOne);
}

void readCalculateMatrixSmallestColumn()
{
	/*
	RO:
	Functie care citeste de la tastatura o matrice si
	calculeaza coloana cu cele mai mici elemente din matrice.
	Rezolvare cerinta 22

	EN:
	Function that reads from keyboard a matrix and calculates
	the colomn with the smallest elements from the matrix.
	Solution for exercise 22
	*/
	#undef MATRIX_DIMENSION
	#define MATRIX_DIMENSION 3
	int matrix[MATRIX_DIMENSION][MATRIX_DIMENSION];
	printf("Enter the elements for the matrix: \n");
	readSquareMatrix(MATRIX_DIMENSION, matrix);
	printf("The matrix is: \n");
	printMatrix(MATRIX_DIMENSION, matrix);
	unsigned int smallest_column=0;
	int smallest_column_element_sum=0;
	for(unsigned int i = 0; i<MATRIX_DIMENSION; i++)
	{
		int temp_column_sum=0;
		for(unsigned int j = 0; j<MATRIX_DIMENSION; j++)
		{
			temp_column_sum += matrix[j][i];

		}
		if (i==0 || smallest_column_element_sum > temp_column_sum)
		{
			smallest_column_element_sum = temp_column_sum;
			smallest_column = i;
		}
	}
	printf("The column %d has the smallest sum: %d\n", smallest_column, smallest_column_element_sum);
}

void convertFahrenheitCelciusORViceversa()
{
	/*
	RO:
	Functie care converteste grade Fahrenheit in Celsius sau grade
	Celsius in Fahrenheit.
	Rezolvare cerinta 23

	EN:
	Function that converts Fahrenheit degrees to Celcius or vice-versa
	Solution for exercise 23.
	*/
	unsigned int maxInputLength = 5;
	char value[maxInputLength];
	printf("Enter the value [C-F]: ");
	fflush(stdin);
	scanf("%s", value);

	unsigned int index = 0;
	int numericValueFromUserInput = 0;
	float conversionResult = 0;
	bool valid_data = true;
	while (value[index]!='\0')
	{
		index++;
	}
	index--; //decrement the index, look for last non-null element
	if (value[index]=='F' || value[index]=='f' || value[index]=='c' || value[index]=='C')
	{
		int realValueIndex = 0;
		while(realValueIndex < index)
		{
			if ( (value[realValueIndex] >='0' && value[realValueIndex]<='9'))
			{
				unsigned int digit = FromCharToInt(value[realValueIndex]);
				realValueIndex++;
				if(digit<10)
				{
					numericValueFromUserInput += digit;
					if(realValueIndex < index) //only multiply with 10 when there are still digits to concatenate
					{
						numericValueFromUserInput*=10;
					}
				}
			}
			else
			{
				printf("Value: %c is not a digit. Conversion cannot proceed.", value[realValueIndex]);
				valid_data = false;
				break;
			}
		}
		if (valid_data)
		{
			if (value[index]=='F' || value[index]=='f')
			{
				//Converting Fahrenheit to Celsius
				conversionResult =  (numericValueFromUserInput - 32) / 1.8f;
				printf("Fahrenheit to Celcius: \n");
				printf("%s = %fC", value, conversionResult);
			}
			else
			{
				//Converting to Celsius to Fahrenheit
				conversionResult =  (numericValueFromUserInput * 1.8f) + 32;
				printf("Celcius to Fahrenheit: \n");
				printf("%s = %fF", value, conversionResult);
			}
		}
	}
	else
	{
		printf("The input is not properly formatted. Use surfix C or F to specify the physical unit.\n");
	}

}

void ASCIItableDisplay()
{
	/*
	RO:
	Functie care afiseaza tabelul ASCII.
	Rezolvare cerinta 24

	EN:
	Function that prints the ASCII Table
	Solution for exercise 24
	*/
	printf("ASCII TABLE: \n");
	printf("Char | Dec \n");
	for(char ch = 0; ch >= 0; ch++)
	{
		printf("%c    | %d   \n", ch, ch);
	}
}

void currentAndDelayedRand()
{
	/*
	RO:
	Functie care genereaza numere intregi aleatoare si le afiseaza cu delay de 10 secounde.
	Rezolvare cerinta 25

	EN:
	Function that generates random number and prints them with a 10 second delay.
	Solution for exercise 25
	*/
	#undef BUFFER_SIZE
 	#define BUFFER_SIZE 20
	#undef SLEEP_TIME
	#define SLEEP_TIME 1

	srand(time(NULL));   // Initialization \ seeding of the random generator.
	int randomNumber = 0;

	int buffer[BUFFER_SIZE];
	unsigned int bufferIndex = 0;

    int timeInSeconds = 0;
    printf("Actual rand | Delayed rand | Runtime\n");
	while(timeInSeconds<20)
	{
		randomNumber = rand() % 10; // Returns a random integer between 0 and RAND_MAX.
		//By Using modulo operator the random number will only be between 0 - value.

		bufferIndex = timeInSeconds%20; //use this to store within the 20 elements of the buffer.
		buffer[bufferIndex] = randomNumber;

		sleep(SLEEP_TIME); //stay here for SLEEP_TIME seconds
		timeInSeconds++;

		printf("%d\t\t", randomNumber);
		if(timeInSeconds>=10)
		{
			bufferIndex = timeInSeconds%10; // get the element stored 10 seconds ago
			printf("%d\t\t", buffer[bufferIndex]);
		}
		else
		{
			//keep the tabulation
			printf(" \t\t");
		}
		printf("%ds\n", timeInSeconds);
	}
}

void storeCharsIntoInt()
{
	/*
	RO:
	Functie care citeste o grupare de 4 char-uri de la tastatura si le stocheaza
	intr-un unsigned int, urmand ca apoi sa afiseze cuvantul format folosindu-se de int.
	Rezolvare cerinta 26

	EN:
	Function that reads a group of 4 chars from keyboard and stores in within an unsigned int,
	following that will print the word formed using only the int variable.
	Solution for exercise 26
	*/
	#undef DIMENSION
	#define DIMENSION 4
	char userInput[DIMENSION];
	printf("Please enter a 4-char word: ");
	fflush(stdin);
	scanf("%s", userInput);
	unsigned int storedValue = 0;

	int index = 0;
	while(index<DIMENSION)
	{
		storedValue += userInput[index];
		index++;
		if(index<DIMENSION)
		{
			storedValue = storedValue<<8;
		}
	}

	//Printing the userInput using the int variable
	index = 3;
	printf("Output: ");
	while(index >=0)
	{
		int charSize = sizeof(char)*8; // the size of char in bits.
		char mask = 0b11111111;

		//Print Groups of 8 bits front the integer variable - converted into %c character
		printf("%c", (storedValue >> (charSize*index)) & mask);
		index--;
	}
	printf(" <- symbols read from int variable.\n");

}

void readEncodeContentOfTxt()
{
	/*
	RO:
	Functie care citeste continutul unui fisier text si codeaza continutul
	afisandu-l in consola si salvandu-l intr-un alt fisier text.
	REGULA DE CODARE: se neaga ultimul bit al fiecarui caracter exceptand caracterele speciale:
	' '. '\n'.
	Rezolvare cerinta 27

	EN:
	Function that reads the content of a text file and encodes it
	and prints it. and saves it within another .txt file.
	ENCODING RULE: the last bit of each character will be negated except for special characters:
	' '. '\n'.
	Solution for exercise 27
	*/
	#undef READ_FILENAME
	#define READ_FILENAME "\\text_to_encode.txt"
	#undef WRITE_FILENAME
	#define WRITE_FILENAME "\\encoded_text.txt"
	#undef BUFFER_SIZE
	#define BUFFER_SIZE 1000

	char READ_FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(READ_FILE_LOCATION, READ_FILENAME);

	char WRITE_FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(WRITE_FILE_LOCATION, WRITE_FILENAME);

	FILE* fp_read;
	FILE* fp_write;
	fp_read=fopen(READ_FILE_LOCATION, "r");
	if(!fp_read)
	{
		printf("File could not be opened!\n");
		perror("");
		printf("Check Location: %s\n", READ_FILE_LOCATION);
	}
	else
	{
		fp_write=fopen(WRITE_FILE_LOCATION, "w");
		if(!fp_write)
		{
			printf("File could not be opened!\n");
			perror("");
			printf("Check Location: %s\n", WRITE_FILE_LOCATION);
		}
		else
		{
			char characterReadFromFile = ' ';
			char encodedContent[BUFFER_SIZE] = {'\0'};
			char originalContent[BUFFER_SIZE] = {'\0'};
			unsigned int bufferIndex = 0;
			//Convert text to numbers and initialize the matrix
			while(characterReadFromFile != EOF ) // while not reached the end of the file.
			{
				characterReadFromFile = fgetc(fp_read); //read each character one by one
				if(characterReadFromFile != EOF ) // checking if the element we just read is the EOF
				{
					if (characterReadFromFile != '\n')
					{
						encodedContent[bufferIndex] = characterReadFromFile ^ 0b1;
					}
					else
					{
						encodedContent[bufferIndex] = characterReadFromFile;
					}
					originalContent[bufferIndex] = characterReadFromFile;
					fprintf(fp_write,"%c",encodedContent[bufferIndex]);
					bufferIndex++;
					if(bufferIndex+1>=BUFFER_SIZE)
					{
						printf("The buffer is full. The text is too big to fit within %d bytes. ", BUFFER_SIZE);
						encodedContent[bufferIndex] = '\0'; // end the string here
						fprintf(fp_write,"%c",encodedContent[bufferIndex]);
						break;
					}
				}
			}
			//Adding the null-terminator at the end for a proper display.
			originalContent[bufferIndex] = '\0';
			encodedContent[bufferIndex] = '\0';
			//Printing to console.
			printf("The original content is: \n");
			printf("------------------------------------------------------------------------\n");
			printf("%s\n", originalContent);
			printf("------------------------------------------------------------------------\n");

			printf("The encoded content is: \n");
			printf("------------------------------------------------------------------------\n");
			printf("%s\n", encodedContent);
			printf("------------------------------------------------------------------------\n");
			fclose(fp_write);
		}
		fclose(fp_read);
	}
}

void readDecodeContentFromTxt()
{
	/*
	RO:
	Functie care citeste continutul codat anterior unui fisier text si decodeaza continutul
	afisandu-l in consola si salvandu-l intr-un alt fisier text.
	REGULA DE DECODARE: se neaga ultimul bit al fiecarui caracter exceptand caracterele speciale:
	' '. '\n'.
	Rezolvare cerinta 28

	EN:
	Function that reads the previously encoded content of a .txt file and decodes the content
	and prints it and saves it within another .txt file.
	DECODING RULE: the last bit of each character will be negated except for special characters:
	' '. '\n'.
	Solution for exercise 28.
	*/
	#undef READ_FILENAME
	#define READ_FILENAME "\\encoded_text.txt"
	#undef WRITE_FILENAME
	#define WRITE_FILENAME "\\decoded_text.txt"
	#undef BUFFER_SIZE
	#define BUFFER_SIZE 1000

	char READ_FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(READ_FILE_LOCATION, READ_FILENAME);

	char WRITE_FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(WRITE_FILE_LOCATION, WRITE_FILENAME);

	FILE* fp_read;
	FILE* fp_write;
	fp_read=fopen(READ_FILE_LOCATION, "r");
	if(!fp_read)
	{
		printf("File could not be opened!\n");
		perror("");
		printf("Check Location: %s\n", READ_FILE_LOCATION);
	}
	else
	{
		fp_write=fopen(WRITE_FILE_LOCATION, "w");
		if(!fp_write)
		{
			printf("File could not be opened!\n");
			perror("");
			printf("Check Location: %s\n", WRITE_FILE_LOCATION);
		}
		else
		{
			char characterReadFromFile = ' ';
			char decodedContent[BUFFER_SIZE] = {'\0'};
			char encodedContent[BUFFER_SIZE] = {'\0'};
			unsigned int bufferIndex = 0;
			//Convert text to numbers and initialize the matrix
			while(characterReadFromFile != EOF ) // while not reached the end of the file.
			{

				characterReadFromFile = fgetc(fp_read); //read each character one by one
				if (characterReadFromFile != EOF) // checking if the element we just read is the EOF
				{
					if (characterReadFromFile != '\n')
					{
						decodedContent[bufferIndex] = characterReadFromFile ^ 0b1;
					}
					else
					{
						decodedContent[bufferIndex] = characterReadFromFile;
					}
					encodedContent [bufferIndex] = characterReadFromFile;
					fprintf(fp_write,"%c",decodedContent[bufferIndex]);
					bufferIndex++;
					if(bufferIndex+1>=BUFFER_SIZE)
					{
						printf("The buffer is full. The text is too big to fit within %d bytes. ", BUFFER_SIZE);
						decodedContent[bufferIndex] = '\0'; // end the string here
						fprintf(fp_write,"%c",decodedContent[bufferIndex]);
						break;
					}
				}
			}
			//Adding the null-terminator at the end for a proper display.
			decodedContent[bufferIndex] = '\0';
			encodedContent[bufferIndex] = '\0';
			//Printing to console.
			printf("The original content is: \n");
			printf("------------------------------------------------------------------------\n");
			printf("%s\n", encodedContent);
			printf("------------------------------------------------------------------------\n");

			printf("The decoded content is: \n");
			printf("------------------------------------------------------------------------\n");
			printf("%s\n", decodedContent);
			printf("------------------------------------------------------------------------\n");
			fclose(fp_write);
		}
		fclose(fp_read);
	}
}

void readSplitMessageIteratedPrint()
{
	/*
	RO:
	Functie care citeste un string si il afiseaza iterativ
	Conform cu specificatia de mai jos: 
	Rezolvare cerinta 29
	=======================================
	SPEC:
	String: Ana are mere
	---------------------------------------
	A a m
	An ar me
	Ana are mer
	Ana are mere
	---------------------------------------

	EN:
	Function that reads a string and prints it iteratively
	according to the specification above.
	Solution for exercise 29
	*/
	#undef BUFFER_SIZE
	#define BUFFER_SIZE 100
	char userInput[BUFFER_SIZE];
	printf("Enter a string value: \n");
	//scanf("%s", userInput); //scanf is not suitable for sentences, it only reads until space character " " \ "\0"
	fflush(stdin);
	gets(userInput);
	char words[BUFFER_SIZE][BUFFER_SIZE] ={{'\0'}};

	unsigned int indexUserInput=0;
	unsigned int numberOfWords = 0;
	unsigned int letterIndex = 0;
	unsigned maxWordLength = 0;
	while(userInput[indexUserInput] !='\0')
	{
		if(userInput[indexUserInput] == ' ' || userInput[indexUserInput] =='\t')
		{
			words[numberOfWords][letterIndex] = '\0';
			if (maxWordLength < letterIndex)
			{
				maxWordLength = letterIndex;
			}
			letterIndex=0;
			numberOfWords++;
		}
		else
		{
			words[numberOfWords][letterIndex] = userInput[indexUserInput];
			letterIndex++;
		}
		indexUserInput++;
	}
	//One last check outside the loop for the final word in the sentence.
	if (maxWordLength < letterIndex)
	{
		maxWordLength = letterIndex;
	}
	printf("Number of words: %d\n", numberOfWords);
	printf("Longest word: %d characters\n", maxWordLength);

	unsigned int indexOfWord = 0;
	unsigned int iteration_to_max_word_length = 0;
	while (iteration_to_max_word_length < maxWordLength)
	{
		for(indexOfWord = 0; indexOfWord <= numberOfWords;  indexOfWord++)
		{
			for(int iteratorForLetter = 0; iteratorForLetter <= iteration_to_max_word_length; iteratorForLetter++)
			{
				if(words[indexOfWord][iteratorForLetter] != '\0') // if the current word still have letter to print
				{
					printf("%c", words[indexOfWord][iteratorForLetter]);

				}

			}
			printf(" ");
		}
		iteration_to_max_word_length++;
		printf("\n");
	}
}

void readCheckElementWithinString()
{
	/*
	RO:
	Functie care citeste un string, si un sir de caractere si apeleaza functia 
	care verifica daca sir-ul de caractere se afla in string.
	Rezolvare cerinta 30. 

	EN:
	Function that reads a string and a sequence of characters and calls 
	the function that checks if the sequence of characters exists within the string.
	Solution for exercise 30
	*/
	#undef BUFFER_SIZE
	#define BUFFER_SIZE 100
	char sourceInput[BUFFER_SIZE];
	char elementToFindInput[BUFFER_SIZE];
	printf("Enter the source string: \n");
	fflush(stdin);
	gets(sourceInput);
	printf("Enter element to find: \n");
	fflush(stdin);
	gets(elementToFindInput);

	//Converting from arrays to char*
	char * pointerToSource = &sourceInput[0];
	char * pointerToElementToFind = &elementToFindInput[0];

	printf("\nSource: %s\n", sourceInput);
	printf("Element: %s\n", elementToFindInput);

	bool elementFound = containsString(pointerToSource, pointerToElementToFind);
	if(elementFound)
	{
		printf("Element: '%s' was FOUND in the source string.\n", pointerToElementToFind);
	}
	else
	{
		printf("Element: '%s' was NOT found in the source string.\n", pointerToElementToFind);
	}
}

bool containsString(char* source, const char* elementToFind)
{
	/*
	RO:
	Functie care verifica daca un string sursa contine un cuvant / sir de caractere specificat.
	Returneaza TRUE daca elementul exista in string, altfel FALSE
	Functie folosita in rezolvarea cerintei 30.

	EN:
	Function that verifies if a source string contains a specified word / character sequence within.
	Returns TRUE if the element exists within the source, and FALSE otherwise.
	Function used in solving exercise 30.
	*/
	unsigned int sourceIndex = 0;
	unsigned int Length_of_elementToFind = calculateNoOfCharsFromMessage(elementToFind);

	//while the end of the source string is not reached
	while(source[sourceIndex] != '\0')
	{
		//for every character in the source check if its identical to the filter
		for(unsigned int filIndex = 0; filIndex < Length_of_elementToFind; filIndex++)
		{
			//in this loop, if element n in the source == element i in the filter
			//keep looking until either the element compared is not equal, or the whole word is found.
			if(elementToFind[filIndex] == source[sourceIndex+filIndex])
			{
				if(filIndex == Length_of_elementToFind-1)
				{
					//you have found what I was looking for
					return true;
				}
				continue; // can be or or cannot be, but let it be.
			}
			else
			{
				//enter here when you found the first mismatch and end the loop
				break;
			}
		}
		sourceIndex++;
	}
	return false;
}

void readFilterString()
{
	/*
	RO:
	Functie care citeste un string si un filtru
	si apeleaza functia de fitrare
	Rezolvare cerinta 31

	EN:
	Function that reads a string and a filter from keyboard 
	and calls the function that handles the filtering.
	Solution for exercise 31
	*/

	#undef BUFFER_SIZE
	#define BUFFER_SIZE 100
	//creating a dynamic array -> filterStringValue is designed for dynamic arrays
	char* userInput = (char *) malloc(sizeof(char)*BUFFER_SIZE);;

	char filterInput[BUFFER_SIZE];
	printf("Enter your input: \n");
	fflush(stdin);
	gets(userInput);
	printf("What do you want to remove?\n");
	fflush(stdin);
	gets(filterInput);

	//Converting from arrays to char*
	char * filter = &filterInput[0];

	printf("Input Read: %s\n", userInput);
	printf("Filter Value: %s\n", filterInput);
	filterStringValue(&userInput, filter);
	printf("Filtered Input: %s\n", userInput);
}

void filterStringValue(char** sourceValue, const char* filterValue)
{
	/*
	RO:
	Functie care filtreaza un string sursa.
	Din sourceValue se va sterge valoarea specificata in filterValue daca aceasta este gasita.
	Parametrul sourceValue este pasat ca referinta modificarile sunt salvate direct in sourceValue.
	Functie folosita in rezolvarea cerintei 31.

	EN:
	Function that filter a source string.
	The value specified within filterValue will be removed from sourceValue.
	The parameter sourceValue is passed by reference the modifications are stored directly in sourceValue.
	Function used in solving exercise 31.
	*/

	unsigned int sourceIndex = 0;
	unsigned int filterValueLength = calculateNoOfCharsFromMessage(filterValue);
	bool occurenceFound = false;

	//From double pointer to single pointer;
	char* source = *(sourceValue);
	unsigned const int sourceSize = calculateNoOfCharsFromMessage(source);

	//Creating and initializing the temporary array that will store the result
	char result[sourceSize];
	unsigned int resultIndex = 0;
	//while the end of the source string is not reached
	while(source[sourceIndex] != '\0')
	{
		//for every character in the source check if its identical to the filter
		for(unsigned int filIndex = 0; filIndex < filterValueLength; filIndex++)
		{
			//in this loop, if element n in the source == element i in the filter
			//keep looking until either the element compared is not equal, or the whole word is found.
			if(filterValue[filIndex] == source[sourceIndex+filIndex])
			{
				if(filIndex == filterValueLength-1)
				{
					//you have found what I was looking for
					//no need to break, since this is the final iteration
					occurenceFound = true;
				}
				continue; // can be or or cannot be, but let it be.
			}
			else
			{
				//enter here when you found the first mismatch and end the loop
				occurenceFound = false;
				break;
			}
		}
		if (occurenceFound)
		{
			//enter here only when the match is found
			sourceIndex += filterValueLength;
			//if the match is found, we will jump over it, so that it will not be copied to the result.
			occurenceFound = false;
		}
		else
		{
			//copy everything to the result as long as the match is not found.
			result[resultIndex] = source[sourceIndex];

			//if every iteration enters here, at the end of the loop
			//these 2 counters will be equal.
			resultIndex++;
			sourceIndex++;
		}
	}
	//adding the null-string terminator to specify the end of the string.
	result[resultIndex] = '\0';
	//if resultIndex < sourceIndex it means occurrence of filterValue was found at least once
	if(resultIndex < sourceIndex)
	{
		realloc(source, sizeof(char)*resultIndex);

		resultIndex = 0;
		while(result[resultIndex] != '\0')
		{
			source[resultIndex] = result[resultIndex];
			resultIndex++;
		}
		//adding the null-string terminator to specify the end of the string.
		source[resultIndex] = '\0';
		//Modifying source is also modifying sourceValue so nothing else left to do
	}
}

void readFilterXMLFileContent()
{
	/*
	RO:
	Functie care citeste, filtreaza si afiseaza continutul dintr-un fisier .xml.
	Filtrarea consta in stergerea tag-urilor xml.
	Rezolvare cerinta 32.

	EN:
	Function that reads, filters and prints the content of a given .xml file.
	The filter consist in removing the xml tags.
	Solution for exercise 32.
	*/
	#undef FILENAME
	#define FILENAME "\\database.xml"
	#undef BUFFER_SIZE
	#define BUFFER_SIZE 1000

	char FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(FILE_LOCATION, FILENAME);

	FILE* fp;
	fp=fopen(FILE_LOCATION, "r");
	if(!fp)
	{
		printf("File could not be opened!\n");
		perror("");
		printf("Check Location: %s\n", FILE_LOCATION);
	}
	else
	{
		char* lineReadFromFile = (char*) malloc(BUFFER_SIZE * sizeof(char));
		printf("File content: \n\n");

		while( fgets(lineReadFromFile, BUFFER_SIZE, fp) )
		{
			if(containsString(lineReadFromFile, xml_tags[0])) // if name tag
			{
				filterStringValue(&lineReadFromFile, xml_tags[0]);
				filterStringValue(&lineReadFromFile, xml_tags[1]);
			}
			else if(containsString(lineReadFromFile, xml_tags[2])) //if age tag
			{
				filterStringValue(&lineReadFromFile, xml_tags[2]);
				filterStringValue(&lineReadFromFile, xml_tags[3]);
			}
			else if(containsString(lineReadFromFile, xml_tags[4])) //if hiringdate tag
			{
				filterStringValue(&lineReadFromFile, xml_tags[4]);
				filterStringValue(&lineReadFromFile, xml_tags[5]);
			}
			printf("%s",lineReadFromFile);
		}
		fclose(fp);
	}
}

int convertStringToInt(char * message)
{
	/*
	RO:
	Functie care converteste un string in int
	Rezolvare cerinta 33

	EN:
	Function that convert a string to integer
	Solution for exercise 33
	*/
	unsigned int noOfElements = calculateNoOfCharsFromMessage(message);
	int value = 0;
	for(unsigned int i = 0; i < noOfElements; i++)
	{
		int digit = FromCharToInt(message[i]);
		if(digit < 10) // checking for exclusively decimal digit values
		{
			value += digit;
			value *= 10;
		}
	}
	return value/10; // undo the last multiply by 10 and return.
}

struct XML_Database_Content* readStoreFilteredXMLFileContentInStruct()
{
	/*
	RO:
	Functie care citeste si filtreaza continutul unui fisier XML, si stocheaza informatiile
	intr-o lista de structuri dinamica.
	Returneaza un element de tip struct care contine un pointer catre zona de memorie HEAP unde
	sunt stocate elementele vectorului dinamic.
	citite si filtrate din XML.
	Rezolvare cerinta 34.
	
	EN: 
	Function that read and filter the content of a given XML file, and stores the data within a list
	of structs allocated dynamically.
	Returns a struct which will hold the pointer to the dynamic array that points to the HEAP Memory
	here the elements are stored.
	Solution for exercise 34.
	*/
	#undef FILENAME
	#define FILENAME "\\database.xml" //relative filepath to the file

	#undef BUFFER_SIZE
	#define BUFFER_SIZE 1000
	#undef XML_DATABASE_SIZE
	#define XML_DATABASE_SIZE 100 //the maximum size of xml elements stored from database

	//Creating a dynamic array that will store XML elements
	struct XML_Database_Content* XML_Database = NULL;

	char FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(FILE_LOCATION, FILENAME);

	FILE* fp;
	fp=fopen(FILE_LOCATION, "r");
	if(!fp)
	{
		printf("File could not be opened!\n");
		perror("");
		printf("Check Location: %s\n", FILE_LOCATION);
	}
	else
	{
		char* lineReadFromFile = (char*) malloc(BUFFER_SIZE * sizeof(char));
		XML_Database = (struct XML_Database_Content*) malloc(sizeof(struct XML_Database_Content)*XML_DATABASE_SIZE);
		xml_db_index = 0; // this is a global variable to be used to track how many XML elements will be stored in the dynamic array

		while( fgets(lineReadFromFile, BUFFER_SIZE, fp) )
		{
			if(xml_db_index < XML_DATABASE_SIZE)
			{
				if(containsString(lineReadFromFile, xml_tags[0])) // if <name> tag
				{

					filterStringValue(&lineReadFromFile, xml_tags[0]);
					filterStringValue(&lineReadFromFile, xml_tags[1]);

					//will use different indexing variables as the line read from file
					//could contain undesirable elements.
					unsigned int indexForStructArray = 0;
					unsigned int indexForLineRead = 0;
					while(lineReadFromFile[indexForLineRead] != '\0')
					{
						if(lineReadFromFile[indexForLineRead]!='\n')
						{
							XML_Database[xml_db_index].name[indexForStructArray] = lineReadFromFile[indexForLineRead];
							indexForStructArray++;
						}
						indexForLineRead++;
						if(indexForStructArray >= CHAR_ARRAY_SIZE-2) //array goes from [0 to CHAR_ARRAY_SIZE-1] but 1 element should be reserved for null-string terminator.
						{
							//if you enter here it means the array defined inside the
							//structure to hold the name is full. Probably the name was too long
							//don't add anything else, just BREAK.

							printf("Name: %s was too long to fit entirely within %d elements array. The stored Name was truncated.\n", lineReadFromFile, CHAR_ARRAY_SIZE);
							break;
						}
					}
					//null-terminate the string
					XML_Database[xml_db_index].name[indexForStructArray] = '\0';
				}
				else if(containsString(lineReadFromFile, xml_tags[2])) //if <age> tag
				{
					filterStringValue(&lineReadFromFile, xml_tags[2]);
					filterStringValue(&lineReadFromFile, xml_tags[3]);
					XML_Database[xml_db_index].age = convertStringToInt(lineReadFromFile);
				}
				else if(containsString(lineReadFromFile, xml_tags[4])) //if <hiringDate> tag
				{
					filterStringValue(&lineReadFromFile, xml_tags[4]);
					filterStringValue(&lineReadFromFile, xml_tags[5]);

					//will use different indexing variables as the line read from file
					//could contain undesirable elements.
					unsigned int indexForStructArray = 0;
					unsigned int indexForLineRead = 0;
					while(lineReadFromFile[indexForLineRead]!='\0') //array goes from [0 to CHAR_ARRAY_SIZE-1] but 1 element should be reserved for null-string terminator.
					{
						if(lineReadFromFile[indexForLineRead]!='\n')
						{
							XML_Database[xml_db_index].hiringDate[indexForStructArray] = lineReadFromFile[indexForLineRead];
							indexForStructArray++;
						}
						indexForLineRead++;
						if(indexForStructArray >= CHAR_ARRAY_SIZE-2)
						{
							//if you enter here it means the array defined inside the
							//structure to hold the hirindDate is full. Probably the hirindDate was too long
							//don't add anything else, just BREAK.

							printf("HiringDate: %s was too long to fit entirely within %d elements array. The stored HiringDate was truncated.\n", lineReadFromFile, CHAR_ARRAY_SIZE);
							break;
						}
					}
					//null-terminate the string
					XML_Database[xml_db_index].hiringDate[indexForStructArray] = '\0';

					//This is the last piece of data for the same element that goes into this structure.
					xml_db_index++; //will increment this for the next element
					//in case there is no other element to be added, this is the reference
					//for iterating through the dynamic array.
				}
			}
			else
			{
				printf("The buffer is full. Only the first %d elements from the XML were stored. ", XML_DATABASE_SIZE);
				break;
			}
		}
		fclose(fp);
	}
	return XML_Database;
}

void displayStructuraObtainedFromXML(struct XML_Database_Content* structura)
{
	/*
	RO:
	Functie care afiseaza elementele stocate in vectorul dinamic de structuri

	EN:
	Function that prints the elements stored within the dynamic struct array
	*/

	//Displaying the structure;
	printf("Name: \t\t Age: \t Hiring Date:\n");
	printf("-------------------------------------------\n");
	unsigned int index = 0;
	//treating structura as pointer in order to be able to compare with NULL
	while(index < xml_db_index)
	{
		printf("%s -> %d -> %s\n", structura[index].name, structura[index].age, structura[index].hiringDate);
		index++;
	}
	printf("-------------------------------------------\n");
}

void sortXmlContentStoredStruct(struct XML_Database_Content* structura)
{
	/*
	 RO:
	 Functie care citeste continutul unui fisier .xml il stocheaza intern intr-un
	 vector dinamic de structuri corespunzatoare si sorteaza continutul crescator
	 in functie de varsta.
	 Rezolvare cerinta 35.

	 EN:
	 Function that reads the content of an .xml file stores it internally within a
	 dynamic array of corresponding structures and sorts its content in ascending order
	 according to the age.
	 Solution for exercise 35.
	 */

	//Sorting the structure dynamic array

	for(unsigned int i = 0 ; i < xml_db_index; i++)
	{
		for(unsigned int j = 0; j < xml_db_index; j++)
		{
			//Sorting the structure ascending order by age.
			if(structura[i].age < structura[j].age)
			{
				//Interchanging values with auxiliar variable
				struct XML_Database_Content temp;

				//handing *pointer to struct as array of structs also handles
				//the dereferencing
				temp = structura[i];
				structura[i] = structura[j];
				structura[j] = temp;

			}
		}
	}
}

void saveSortedXmlStructContentInHTML(struct XML_Database_Content* structura)
{
	/*
	 RO:
	 Functie care salveaza intr-un document HTML continutul filtrat si sortat din fisierul XML prin intermediul
	 structurilor create la cerintele 34,35.
	 Rezolvare cerinta 36.

	 EN:
	 Function that saves to an HTML document the filtered and sorted content of an XML file through the
	 structure created at exercises 34,35.
	 Solution for exercise 36.
	 */
	#undef FILENAME
	#define FILENAME "\\saved_sorted_database.html"
	#undef BUFFER_SIZE
	#define BUFFER_SIZE 1000

	FILE* fp;
	char FILE_LOCATION [MAX_FILEPATH_SIZE] = {'\0'};
	createRelativePathToFile(FILE_LOCATION, FILENAME);

	fp=fopen(FILE_LOCATION, "w");
	if(!fp)
	{
		printf("File could not be opened!\n");
		perror("");
		printf("Check Location: %s\n", FILE_LOCATION);
	}
	else
	{
		fprintf(fp,"<html>");
		fprintf(fp,"<h2>File generated from C Program.</h2>");
		fprintf(fp,"<h2>-------------------------------</h2>");
		fprintf(fp,"<table cellspacing=\"2\" border=\"3\" cellpadding=\"3\" padding=\"3\">");
		fprintf(fp,"<tr>");
		fprintf(fp,"<th><b>Crt.</b></th>");
		fprintf(fp,"<th><b>Name</b></th>");
		fprintf(fp,"<th><b>Age</b></th>");
		fprintf(fp,"<th><b>Hiring Date</b></th>");
		fprintf(fp,"</tr>");

		//Saving the structure content to the HTML file.
		unsigned int index = 0;
		//treating structura as pointer in order to be able to compare with NULL
		while(index < xml_db_index)
		{
			fprintf(fp,"<tr>");
			//Add some different style on the uneven row
			if(index%2==0)
			{
				fprintf(fp,"<td>%d</td>", index);
				fprintf(fp,"<td>%s</td>", structura[index].name);
				fprintf(fp,"<td>%d</td>", structura[index].age);
				fprintf(fp,"<td>%s</td>", structura[index].hiringDate);
				fprintf(fp,"</tr>");
			}
			else
			{
				fprintf(fp,"<td bgcolor=\"#eeeeee\">%d</td>", index);
				fprintf(fp,"<td bgcolor=\"#eeeeee\">%s</td>", structura[index].name);
				fprintf(fp,"<td bgcolor=\"#eeeeee\">%d</td>", structura[index].age);
				fprintf(fp,"<td bgcolor=\"#eeeeee\">%s</td>", structura[index].hiringDate);
				fprintf(fp,"</tr>");
			}
			index++;
		}
		//END: saving the structure content to the HTML file.
		fprintf(fp,"</table>");
		fprintf(fp,"</html>");
		printf("HTML file created successfully.\n");
		fclose(fp);
	}
}

void readCountElementWithinString()
{
	/*
	RO:
	Functie care citeste un string, si un sir de caractere si apeleaza functia
	care verifica de cate ori sir-ul de caractere apare in string.
	Rezolvare cerinta 37.

	EN:
	Function that reads a string and a sequence of characters and calls
	the function that checks how many times the sequence of characters appears within the string.
	Solution for exercise 37
	*/
	#undef BUFFER_SIZE
	#define BUFFER_SIZE 100
	char sourceInput[BUFFER_SIZE];
	char elementToCountInput[BUFFER_SIZE];
	printf("Enter the source string: \n");
	fflush(stdin);
	gets(sourceInput);
	printf("Enter element to count: \n");
	fflush(stdin);
	gets(elementToCountInput);

	//Converting from arrays to char*
	char * pointerToSource = &sourceInput[0];
	char * pointerToElementToCount = &elementToCountInput[0];

	printf("\nSource: %s\n", sourceInput);
	printf("Element: %s\n", elementToCountInput);
	printf("--------------------------------------------------\n");

	unsigned int occurences = countStringOccurences(pointerToSource, pointerToElementToCount);

	printf("Element: '%s' appears within the source string %d times.\n",elementToCountInput, occurences);
}

unsigned int countStringOccurences(char* source, const char* elementToCount)
{
	/*
	RO:
	Functie care verifica de cate ori apare un sir de caractere intr-un string.
	Returneaza ca valoare un unsigned int continand numarul de aparitii
	Functie folosita in rezolvarea cerintei 37.

	EN:
	Function that checks how many times a word will appear within a string
	Returns a value of type unsigned int containing the number of occurences
	Function used in solving exercise 37.
	*/
	unsigned int sourceIndex = 0;
	unsigned int Length_of_elementToCount = calculateNoOfCharsFromMessage(elementToCount);
	unsigned int occurences = 0;

	//while the end of the source string is not reached
	while(source[sourceIndex] != '\0')
	{
		//for every character in the source check if its identical to the filter
		for(unsigned int filIndex = 0; filIndex < Length_of_elementToCount; filIndex++)
		{
			//in this loop, if element n in the source == element i in the filter
			//keep looking until either the element compared is not equal, or the whole word is found.
			if(elementToCount[filIndex] == source[sourceIndex+filIndex])
			{
				if(filIndex == Length_of_elementToCount-1)
				{
					//you have found what I was looking for
					occurences++;
				}
				continue; // can be or or cannot be, but let it be.
			}
			else
			{
				//enter here when you found the first mismatch and end the loop
				break;
			}
		}
		sourceIndex++;
	}
	return occurences;
}

int multiplyWoStarOp(int number, int multiplier)
{
	/*
	 RO:
	 Functie care inmulteste un numar cu un multiplicator fara a folosi operatorul de inmultire *.

	 EN:
	 Function that multiplies a number with a multiplier without using the * operator.
	 */
	int result = 0;
	for(unsigned int i = 0 ; i<multiplier; i++)
	{
		result+=number;
	}
	return result;
}

float divideWoDivisionOp(int number, int divider)
{
	/*
	 RO:
	 Functie care imparte un numar la un divizor fara a folosi operatorul de devizie /.

	 EN:
	 Function that devides a number with a divider without using the division operator /.
	 */
	float result;
	result = (float)number * 1.0f/divider;
	return result;
}

void createAddElementsOnLinkedList()
{
	/*
	 RO: Functie care creaza o lista inlantuita si ofera posibilitatea de a adauga un numar variabil de elemente
	 de tip intreg, afisandu-le ulterior.

	 EN: Function that creates a linked-list of elements offering the possibility of storing a variable number of
	 elements into it, and printing it afterwards.
	 */

	//Linked list definition:
	struct LinkedList{
		int value; // this will store the value
		struct LinkedList * previous; // this will store the address of the previous block of memory
		struct LinkedList * next; // this will store the address of the next block of memory
	};

	char userInput[CHAR_ARRAY_SIZE]; //store the input from keyboard in this array
	printf("Enter integer values. Press Q to exit. \n");

	struct LinkedList* list = NULL; // creating a linked list

	unsigned int counter = 0; // a counter to be able to track the number of elements introduced through the loop
	do{
		printf("Element%d = ", counter);
		fflush(stdin);
		scanf("%s", userInput);

		if (userInput[0]=='q' || userInput[0]=='Q') // if user press the Q key
		{
			printf("\nIn total: %d elements been introduced on the linked list.\n", counter);
			break;
		}
		else
		{

			if(list == NULL) // if this is the first element to be introduced on the linked list
			{
				list = (struct LinkedList* )malloc(sizeof(struct LinkedList)); // allocate memory.
				list->value = convertStringToInt(&userInput[0]); // convert string value to integer.
				list->previous = NULL; // there is no previous element.
				list->next = NULL; // we don't know if there will be a next element.
			}
			else //enter here after the first element was added.
			{

				list->next = (struct LinkedList* ) malloc(sizeof(struct LinkedList)); // allocate space for the next element
				list->next->previous = list; // we're still on the previous element, so assign the link to the next element.previous
				list = list->next; // next element become current element
				list->value = convertStringToInt(&userInput[0]); // convert the string value to integer
				list->next = NULL;  // we don't know if there will be a next element.
			}
		}
		counter++;

	}while(1); // infinite loop, with possibility to break out.

	printf("\nPrinting the elements of Linked-List:\n");
	printf("[ ");
	//printing the linked list
	while(list != NULL) // list is currently pointing to the last element. So we will display it from last to first.
	{
		printf("%d ", list->value);
		list = list->previous; // go to the previous
	}
	printf("]\n");
}

void printRomanianMenu()
{
	/*
	 RO:
	 Functie care sa printeze meniul in limba romana.

	 EN:
	 Function to print the menu in english.
	 */
	printf(" 1. Apartenenta unui simbol la intervalul dat.\n");
	printf(" 2. Calculul numarului de cifre a unei variabile de tip intreg.\n");
	printf(" 3. Recursivitate pentru Cerinta 2.\n");
	printf(" 4. Calculul numarului de caractere dintr-un cuvant.\n");
	printf(" 5. Apartenenta unui sir de caractere la intervalul dat.\n");
	printf(" 6. Concatenarea a 3 cifre intr-un numar.\n");
	printf(" 7. Verificarea divizibilatii si puterii lui 16.\n");
	printf(" 8. Reconstruirea unui numar in oglinda.\n");
	printf(" 9. Convertor de numere hexadecimal to decimal.\n");
	printf(" 10. Convertor de numere decimal to binary.\n");
	printf(" 11. Negarea unui bit specificat pentru o variabila de tip intreg.\n");
	printf(" 12. Interschimbarea unei cifre intr-un numar dat.\n");
	printf(" 13. Citire continut fisier si calcularea numarului de cuvinte.\n");
	printf(" 14. Citire 2 matrici si interschimbare linie coloana.\n");
	printf(" 15. Introducere \\ Stergere element vector dinamic.\n");
	printf(" 16. Rotirea a 2 matrici.\n");
	printf(" 17. Convertirea din double in string.\n");
	printf(" 18. Crearea diagonalei principala a unei matrici din elementele min.\n");
	printf(" 19. Citire \\ stocare matrice patratica de numere intregi dintr-un fisier.\n");
	printf(" 20. Citirea si transpunerea unei matrici.\n");
	printf(" 21. Produsul a 2 matrici patratice.\n");
	printf(" 22. Calcularea coloanei cu suma cea mai mica a elementelor unei matrici.\n");
	printf(" 23. Convertor fahrenheit to celsius \\ celsius to fahrenheit.\n");
	printf(" 24. Afisare tabel ASCII.\n");
	printf(" 25. Afisare valori random cu delay de 10 secunde.\n");
	printf(" 26. Concatenarea a 4 chars intr-un unsigned int.\n");
	printf(" 27. Codificator pentru mesajul dintr-un fisier text.\n");
	printf(" 28. Decodificator pentru mesajul codat anterior din fisierul text.\n");
	printf(" 29. Afisarea iterativa a unui mesaj.\n");
	printf(" 30. Verificarea unui substring intr-un string.\n");
	printf(" 31. Filtrarea unui string.\n");
	printf(" 32. Filtrarea continutului unui fisier XML dat.\n");
	printf(" 33. Convertirea unui string in int.\n");
	printf(" 34. Stocarea continutuil unui XML dat intr-un vector de structuri.\n");
	printf(" 35. Sortarea vectorului de structuri de la cerinta 34.\n");
	printf(" 36. Stocarea / convertirea din XML in HTML.\n");
	printf(" 37. Calcularea numarului de aparitii ale unui cuvant in string.\n");
	printf(" 38. Impartirea si inmultirea fara operator.\n");
	printf(" 39. Crearea unei liste inlantuite.\n");
}

void printEnglishMenu()
{
	/*
	 RO:
	 Functie care sa printeze Meniul in limba engleza.

	 EN:
	 Function to print the menu in english.
	 */
	printf(" 1. Validation of a symbol within a given interval.\n");
	printf(" 2. Calculation of the number of digits of an integer type variable.\n");
	printf(" 3. Recursiveness for Exercise 2.\n");
	printf(" 4. Calculation of the number of characters in a word.\n");
	printf(" 5. Validation of characters within a string for a given interval.\n");
	printf(" 6. Concatenation of 3 digits within a number.\n");
	printf(" 7. Checking the divisibility and power of 16.\n");
	printf(" 8. Reconstruction of a number in the mirror.\n");
	printf(" 9. Hexadecimal to decimal number converter.\n");
	printf(" 10. Decimal to binary number converter.\n");
	printf(" 11. Negating a specified bit for an integer variable.\n");
	printf(" 12. Interchanging a digit within a given number.\n");
	printf(" 13. Reading file content and calculating the number of words.\n");
	printf(" 14. Reading 2 matrices and exchanging line and column.\n");
	printf(" 15. Insert \\ Delete dynamic array element.\n");
	printf(" 16. Rotation of 2 matrices.\n");
	printf(" 17. Conversion from double to string.\n");
	printf(" 18. Creating the main diagonal of a matrix from the min elements.\n");
	printf(" 19. Reading \\ storing of square matrix of integers from a file.\n");
	printf(" 20. Reading and transposing a matrix.\n");
	printf(" 21. The product of 2 square matrices.\n");
	printf(" 22. Calculation of the column with the smallest sum of the elements of a matrix.\n");
	printf(" 23. Converter fahrenheit to celsius \\ celsius to fahrenheit.\n");
	printf(" 24. ASCII table display.\n");
	printf(" 25. Display random values with a delay of 10 seconds.\n");
	printf(" 26. Concatenation of 4 chars within an unsigned int.\n");
	printf(" 27. Encoding a the message from a text file.\n");
	printf(" 28. Decodin the previously encoded message from the text file.\n");
	printf(" 29. Iterative display of a message.\n");
	printf(" 30. Checking a substring within a string.\n");
	printf(" 31. Filtering a string.\n");
	printf(" 32. Filtering the content of a given XML file.\n");
	printf(" 33. Converting a string to int.\n");
	printf(" 34. Storing the content of a given XML within an array of structures.\n");
	printf(" 35. Sorting the array of structures from exercise 34.\n");
	printf(" 36. Storage / conversion from XML to HTML.\n");
	printf(" 37. Calculation of the number of occurrences of a word in the string.\n");
	printf(" 38. Division and multiplication without an operator.\n");
	printf(" 39. Creating a chained list.\n");
}

void createRelativePathToFile(char source_array [], char filename[])
{
	/*
	 RO:
	 Functie care sa creeze calea relativa catre un fisier.

	 EN:
	 Function to create the relative filepath to a file.
	*/
	strcat(source_array, ROOT_DIRECTORY);
	if(containsString(source_array, EXE_RELATIVE_DIRECTORY_PATH) == false)
	{
		//this will help finding the relative locations of files to open
		//the root directory when running from the debbuger is the same as .c file
		//but the .exe is generated in a different directory.

		strcat(source_array, EXE_RELATIVE_DIRECTORY_PATH);
	}
	strcat(source_array, filename);
}
