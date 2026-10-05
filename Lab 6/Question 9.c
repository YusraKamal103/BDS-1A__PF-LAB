#include <stdio.h>
int main(){
   char word[100];
    printf("Enter the word: ");
    scanf("%s", word);
    
    int count = 0;
    do{
        count++;    

    }while(word[count]!='\0');

    printf("The length of the word is: %d\n", count);

   //reverses the word
    int rev[count];
    for (int i = 0; i < count; i++){
        rev[i] = word[count - 1 - i];
    }

    printf("The reversed word is: ");
    for (int i = 0; i < count; i++){
        printf("%c", rev[i]);
    }

    for (int i = 0; i < count; i++){
        if (word[i] != rev[i]){
            printf("\nThe word is not a palindrome.\n");
            break;
        }
    }
    printf("\nThe word is a palindrome.\n");
    

    int vowel = 0, consonant = 0;
    for(int i=0;i<count;i++){
        if (word[i]== 'a' || word[i]== 'e' || word[i]== 'i' || word[i]== 'o' || word[i]== 'u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    printf("The word contains %d vowels and %d consonants.\n", vowel, consonant);

    return 0;
}