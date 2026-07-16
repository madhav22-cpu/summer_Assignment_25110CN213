#include <stdio.h>

struct Ticket {
    int seatNo;
    int booked;
};

int main() {
    struct Ticket seats[5];
    int choice, seat, i;

    // Initialize seats
    for (i = 0; i < 5; i++) {
        seats[i].seatNo = i + 1;
        seats[i].booked = 0;
    }

    while (true) {
        printf("\n Ticket Booking System \n");
        printf("1. Show Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nSeat Status\n");
            for (i = 0; i < 5; i++) {
                printf("Seat %d : ", seats[i].seatNo);

                if (seats[i].booked == 0)
                    printf("Available\n");
                else
                    printf("Booked\n");
            }
            break;

        case 2:
            printf("Enter Seat Number to Book (1-5): ");
            scanf("%d", &seat);

            if (seat >= 1 && seat <= 5) {
                if (seats[seat - 1].booked == 0) {
                    seats[seat - 1].booked = 1;
                    printf("Ticket Booked Successfully!\n");
                } else {
                    printf("Seat Already Booked!\n");
                }
            } else {
                printf("Invalid Seat Number!\n");
            }
            break;

        case 3:
            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seat);

            if (seat >= 1 && seat <= 5) {
                if (seats[seat - 1].booked == 1) {
                    seats[seat - 1].booked = 0;
                    printf("Ticket Cancelled Successfully!\n");
                } else {
                    printf("Seat is Already Available!\n");
                }
            } else {
                printf("Invalid Seat Number!\n");
            }
            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}