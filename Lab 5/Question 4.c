#include <stdio.h>

int main() {
    int category, choice, again;

    

    do {
        printf("\nSelect a Conversation Category:\n");
        printf("1. Greeting\n");
        printf("2. Study\n");
        printf("3. Weather\n");
        printf("4. Help\n");
        printf("Enter choice (1-4): ");
        scanf("%d", &category);

        switch (category) {

            case 1: // Greeting
                printf("\nGreeting Options:\n");
                printf("1. Hello\n2. How are you\n3. Goodbye\n");
                printf("Enter choice (1-3): ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("\nBot: Hello! Nice to see you.\n");
                        break;
                    case 2:
                        printf("\nBot: How are you?\n");
                        break;
                    case 3:
                        printf("\nBot: Goodbye! \n");
                        break;
                    default:
                        printf("\nBot: Sorry, Invalid choice.\n");
                }
                break;

            case 2: // Study
                printf("\nStudy Options:\n");
                printf("1. Programming\n2. Mathematics\n3. AI\n");
                printf("Enter choice (1-3): ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("\nBot: Programming is about writing instructions for computers. Want a tip?\n");
                        break;
                    case 2:
                        printf("\nBot: Mathematics builds logical thinking. \n");
                        break;
                    case 3:
                        printf("\nBot: AI is about building systems that mimic intelligent behavior, like this chatbot!\n");
                        break;
                    default:
                        printf("\nBot: Sorry, I don't have info on that study topic.\n");
                }
                break;

            case 3: // Weather
                printf("\nWeather Options:\n");
                printf("1. Today\n2. Tomorrow\n3. Forecast\n");
                printf("Enter choice (1-3): ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("\nBot: Today's weather looks clear with mild temperatures.\n");
                        break;
                    case 2:
                        printf("\nBot: Tomorrow is expected to be partly cloudy.\n");
                        break;
                    case 3:
                        printf("\nBot: This week's forecast shows a mix of sun and occasional clouds.\n");
                        break;
                    default:
                        printf("\nBot: Sorry, I don't have that weather info.\n");
                }
                break;

            case 4: // Help
                printf("\nHelp Options:\n");
                printf("1. About Chatbot\n2. Commands\n3. Exit\n");
                printf("Enter choice (1-3): ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("\nBot: I'm a simple rule-based chatbot built in C using nested switch-case logic.\n");
                        break;
                    case 2:
                        printf("\nBot: You can choose from Greeting, Study, Weather, or Help categories.\n");
                        break;
                    case 3:
                        printf("\nBot: Exiting chatbot.\n");
                        printf("\n=====================================\n");
                        return 0; // ends program immediately
                    default:
                        printf("\nBot: Sorry, that help option isn't recognized.\n");
                }
                break;

            default:
                printf("\nBot: Sorry, that's not a valid category.\n");
        }

        printf("\nDo you want to continue chatting? (1 = Yes, 0 = No): ");
        scanf("%d", &again);

    } while (again == 1);

    printf("\nBot: End of chat\n");
    

    return 0;
}