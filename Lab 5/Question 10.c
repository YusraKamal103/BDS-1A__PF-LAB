#include <stdio.h>
#include <math.h>

int main() {
    double accuracy, confidence, modelScore;
    long datasetSize;
    int userRole, modelStatus, permission;
    int hasDeployPermission, isDeploymentReady;
    char roleName[20], statusName[20];



    printf("Enter model accuracy (0-100): ");
    scanf("%lf", &accuracy);

    printf("Enter model confidence score (0-100): ");
    scanf("%lf", &confidence);

    printf("Enter dataset size: ");
    scanf("%ld", &datasetSize);

    printf("Enter user role (1=Admin, 2=Developer, 3=Researcher): ");
    scanf("%d", &userRole);

    printf("Enter model status (1=Ready, 2=Testing, 3=Training): ");
    scanf("%d", &modelStatus);

    printf("Enter user permission value (bitwise: View=1,Train=2,Test=4,Deploy=8): ");
    scanf("%d", &permission);

    printf("\n");

    if (accuracy < 0 || accuracy > 100) {
        printf("Error: Accuracy must be between 0 and 100.\n");
        return 1;
    } else {
        if (confidence < 0 || confidence > 100) {
            printf("Error: Confidence must be between 0 and 100.\n");
            return 1;
        } else {
            if (datasetSize < 0) {
                printf("Error: Dataset size cannot be negative.\n");
                return 1;
            }
        }
    }

    switch (userRole) {
        case 1:
            switch (modelStatus) {
                case 1:
                    printf("Role: Admin | Status Context: Reviewing a READY model\n");
                    break;
                case 2:
                    printf("Role: Admin | Status Context: Reviewing a TESTING model\n");
                    break;
                case 3:
                    printf("Role: Admin | Status Context: Reviewing a TRAINING model\n");
                    break;
                default:
                    printf("Role: Admin | Status Context: UNKNOWN status\n");
                    break;
            }
            break;

        case 2:
            switch (modelStatus) {
                case 1:
                    printf("Role: Developer | Status Context: Reviewing a READY model\n");
                    break;
                case 2:
                    printf("Role: Developer | Status Context: Reviewing a TESTING model\n");
                    break;
                case 3:
                    printf("Role: Developer | Status Context: Reviewing a TRAINING model\n");
                    break;
                default:
                    printf("Role: Developer | Status Context: UNKNOWN status\n");
                    break;
            }
            break;

        case 3:
            switch (modelStatus) {
                case 1:
                    printf("Role: Researcher | Status Context: Reviewing a READY model\n");
                    break;
                case 2:
                    printf("Role: Researcher | Status Context: Reviewing a TESTING model\n");
                    break;
                case 3:
                    printf("Role: Researcher | Status Context: Reviewing a TRAINING model\n");
                    break;
                default:
                    printf("Role: Researcher | Status Context: UNKNOWN status\n");
                    break;
            }
            break;

        default:
            printf("Invalid user role.\n");
            return 1;
    }

    sprintf(roleName, "%s",
        (userRole == 1) ? "Admin" :
        (userRole == 2) ? "Developer" :
        (userRole == 3) ? "Researcher" : "Unknown");

    sprintf(statusName, "%s",
        (modelStatus == 1) ? "Ready" :
        (modelStatus == 2) ? "Testing" :
        (modelStatus == 3) ? "Training" : "Unknown");

    hasDeployPermission = (permission & 8) ? 1 : 0;

    modelScore = (accuracy + confidence) / 2;
    modelScore = round(modelScore * 100) / 100;

    isDeploymentReady =
        (accuracy >= 80.0) &&
        (confidence >= 75.0) &&
        (datasetSize >= 1000) &&
        (modelStatus == 1) &&
        (hasDeployPermission == 1);


    printf("User Role         : %s\n", roleName);
    printf("Model Status      : %s\n", statusName);
    printf("Accuracy          : %.2lf%%\n", accuracy);
    printf("Confidence        : %.2lf%%\n", confidence);
    printf("Dataset Size      : %ld records\n", datasetSize);
    printf("Model Score       : %.2lf\n", modelScore);
    printf("Deploy Permission : %s\n", hasDeployPermission ? "YES" : "NO");

    printf("View    : %s\n", (permission & 1) ? "Allowed" : "Not Allowed");
    printf("Train   : %s\n", (permission & 2) ? "Allowed" : "Not Allowed");
    printf("Test    : %s\n", (permission & 4) ? "Allowed" : "Not Allowed");
    printf("Deploy  : %s\n", (permission & 8) ? "Allowed" : "Not Allowed");

   
    printf("Deployment Ready  : %s\n", isDeploymentReady ? "YES - Model can be deployed" : "NO - Model is NOT ready");

    if (!isDeploymentReady) {
        printf("\nReasons for rejection:\n");
        if (accuracy < 80.0)
            printf(" - Accuracy below 80%%\n");
        if (confidence < 75.0)
            printf(" - Confidence below 75%%\n");
        if (datasetSize < 1000)
            printf(" - Dataset size below 1000 records\n");
        if (modelStatus != 1)
            printf(" - Model status is not 'Ready'\n");
        if (!hasDeployPermission)
            printf(" - User lacks Deploy permission\n");
    }

    
    printf("sizeof(accuracy)     [double] : %zu bytes\n", sizeof(accuracy));
    printf("sizeof(confidence)   [double] : %zu bytes\n", sizeof(confidence));
    printf("sizeof(datasetSize)  [long]   : %zu bytes\n", sizeof(datasetSize));
    printf("sizeof(userRole)     [int]    : %zu bytes\n", sizeof(userRole));
    printf("sizeof(modelStatus)  [int]    : %zu bytes\n", sizeof(modelStatus));
    printf("sizeof(permission)   [int]    : %zu bytes\n", sizeof(permission));
    printf("sizeof(modelScore)   [double] : %zu bytes\n", sizeof(modelScore));
    printf("sizeof(roleName)     [char array, %d chars]\n", (int)sizeof(roleName));

    return 0;
}