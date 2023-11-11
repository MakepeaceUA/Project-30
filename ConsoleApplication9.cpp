#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
using namespace std;


//Задание 1
//#define MAX_SIZE 100
//void Func(FILE* Text)
//{
//    int MaxLength = 0;
//    char word[MAX_SIZE];
//    while (fscanf(Text, "%s", word) == 1)
//    {
//        if (strlen(word) > MaxLength)
//            MaxLength = strlen(word);
//    }
//    cout << "Длина самой длинной строки: " << MaxLength;
//    fclose(Text);
//}
//       
//   
//int main() {
//    setlocale(0, "RU");
//    FILE* file = fopen("text.txt", "w");
//    fprintf(file, "Съешь же ещё этих мягких французских булок, да выпей чаю");
//    fclose(file);
//    file = fopen("text.txt", "r");
//    
//    Func(file);
//}





//Задание 2
//#define MAX_SIZE 100
//void Func(FILE* Text, char* word)
//{
//    int count = 0;
//    char str[MAX_SIZE];
// 
//    while (fscanf(Text, "%s", str) != EOF) 
//    {
//        for (int i = 0; i <= strlen(str) - strlen(word); i++) 
//        {
//            bool Bl = true;
//            for (int j = 0; j < strlen(word); j++) 
//            {
//                if (str[i + j] != word[j]) 
//                {
//                    Bl = false;
//                    break;
//                }
//            }
//            if (Bl) 
//            {
//                count++;
//            }
//        }
//
//    }
//    cout << "Количество вхождений слова " << word << ":" << count;
//    fclose(Text);
//}
//
//
//int main() {
//    setlocale(0, "RU");
//    FILE* file = fopen("text.txt", "w");
//    char word[MAX_SIZE];
//    cout << "Введите слово для поиска: ";
//    cin >> word;
//    
//    fprintf(file, "Hello,World. Hello,friend. Hello,friends");
//    fclose(file);
//    
//    file = fopen("text.txt", "r");
//
//    Func(file,word);
//}

