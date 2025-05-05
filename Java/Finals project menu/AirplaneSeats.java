//Written by: Marcin Pascua

import java.util.Scanner;

public class AirplaneSeats {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char[][] seats = new char[13][6];
        
        //call the methods
        initializeSeats(seats);
        Menu(seats, scanner);        
    }
    
    //Method for menu
    public static void Menu(char[][] seats, Scanner scanner) {
        while (true) {
            System.out.println("\n1. Assign a seat");
            System.out.println("2. Seating Plan");
            System.out.println("3. End Program");
            System.out.print("Please enter your choice (1 - 3): ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    assignDesiredSeat(scanner, seats); // Call method to assign seats
                    break;
                case 2:
                    seatingPlan(seats); // Call method to view seating plan
                    break;
                case 3:
                    System.out.println("\n********************Exit******************");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice! Please enter again. Thank you.");
                    break;
            }
        }
     }

    //Method to initialize seats to '*'
    public static void initializeSeats(char[][] seats) {
        for (int i = 0; i < seats.length; i++) {
            for (int j = 0; j < seats[i].length; j++) {
                seats[i][j] = '*';
            }
        }
    }

    //Method to assign the user's chosen seat
    public static void assignDesiredSeat(Scanner scanner, char[][] seats) {
        System.out.print("\nPlease enter ticket type (1: First class, 2: Business class, 3: Economy class): ");
        int ticketType = scanner.nextInt();
        int row;
        char seat;
        
        while(true) {
           switch (ticketType) {
               case 1:
                   System.out.print("FIRST CLASS: Please choose your row from 1 to 2: ");
                   row = scanner.nextInt();
                   if (row < 1 || row > 2) {
                     System.out.println("Invalid row choice for the selected ticket type!");
                   } 
                   else {
                     System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                     seat = scanner.next().toUpperCase().charAt(0);
                     
                     if (seat < 'A' || seat > 'F' ) {
                         System.out.println("Invalid seat letter! Please try again.");
                         System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                         seat = scanner.next().toUpperCase().charAt(0);
                     }
                              
                     if (seats[row - 1][seat - 'A'] == 'X') {
                         System.out.println("Seat is already taken! Please select a vacant seat.");
                         System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                         seat = scanner.next().toUpperCase().charAt(0);
                     }
                   seats[row - 1][seat - 'A'] = 'X';
                   System.out.println("Congratulations! Seat assigned successfully. Thank you.");
                   seatingPlan(seats); 
                   Menu(seats, scanner);
                   }
                   break;
               case 2:
                   System.out.print("BUSINESS CLASS: Please choose your row from 3 to 7: ");
                   row = scanner.nextInt();
                   if (row < 3 || row > 7) {
                     System.out.println("Invalid row choice for the selected ticket type!");
                   }
                   else {
                     System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                     seat = scanner.next().toUpperCase().charAt(0);
                     
                     if (seat < 'A' || seat > 'F' ) {
                         System.out.println("Invalid seat letter! Please try again.");
                         System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                         seat = scanner.next().toUpperCase().charAt(0);
                     }
                              
                     if (seats[row - 1][seat - 'A'] == 'X') {
                         System.out.println("Seat is already taken! Please select a vacant seat.");
                         System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                         seat = scanner.next().toUpperCase().charAt(0);
                     }
                   seats[row - 1][seat - 'A'] = 'X';
                   System.out.println("Congratulations! Seat assigned successfully. Thank you.");
                   seatingPlan(seats); 
                   Menu(seats, scanner);                   
                   }
                   break;
               case 3:
                   System.out.print("ECONOMY CLASS: Please choose your row from 8 to 13: ");
                   row = scanner.nextInt();
                   if (row < 8 || row > 13) {
                     System.out.println("Invalid row choice for the selected ticket type!");
                   }
                   else {
                     System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                     seat = scanner.next().toUpperCase().charAt(0);
                     
                     if (seat < 'A' || seat > 'F' ) {
                         System.out.println("Invalid seat letter! Please try again.");
                         System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                         seat = scanner.next().toUpperCase().charAt(0);
                     }
                              
                     if (seats[row - 1][seat - 'A'] == 'X') {
                         System.out.println("Seat is already taken! Please select a vacant seat.");
                         System.out.print("\nPlease enter desired seat (A-F or a-f): ");
                         seat = scanner.next().toUpperCase().charAt(0);
                     }
                   seats[row - 1][seat - 'A'] = 'X';
                   System.out.println("Congratulations! Seat assigned successfully. Thank you.");
                   seatingPlan(seats); 
                   Menu(seats, scanner);  
                   }
                   break;                         
               default:
                   System.out.println("Invalid ticket type! Please try again.");
                   System.out.print("\nPlease enter ticket type (1: First class, 2: Business class, 3: Economy class): ");
                   ticketType = scanner.nextInt();
                   break;
           }       
        }
    }

    //Method to view seating plan
    public static void seatingPlan(char[][] seats) {
        System.out.println("\nSeating Plan:");
        System.out.println("FIRST CLASS    (row 1 - 2)");
        System.out.println("BUSINESS CLASS (row 3 - 7)");
        System.out.println("ECONOMY CLASS  (row 8 - 13)" +"\n");
        System.out.println("            A  B  C     D  E  F");
        for (int i = 0; i < seats.length; i++) {
            System.out.print("Row " + (i + 1 + " ") + "\t\t");
            for (int j = 0; j < seats[i].length; j++) {
                System.out.print(seats[i][j] + "\t");
                if(j == 2){
                  System.out.print("\t");
                }
            }
            System.out.println();
        }
    }
}
