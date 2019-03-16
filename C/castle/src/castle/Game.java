package castle;

import java.util.Scanner;

public class Game {
    private Room currentRoom;
        
    public Game() 
    {
        createRooms();
    }

    private void createRooms()
    {
        Room outside, lobby, pub, study, bedroom;
      
        //	鍒堕�犳埧闂�
        outside = new Room(" outside of castle.");
        lobby = new Room(" lobby in castle.");
        pub = new Room(" pub near by castle.");
        study = new Room(" study in castle.");
        bedroom = new Room(" bedroom in castle.");
        
        //	鍒濆鍖栨埧闂寸殑鍑哄彛
        outside.setExits(null, lobby, study, pub);
        lobby.setExits(null, null, null, outside);
        pub.setExits(null, outside, null, null);
        study.setExits(outside, bedroom, null, null);
        bedroom.setExits(null, null, null, study);

        currentRoom = outside;  //	Start from gate of castle
    }

    private void printWelcome() {
        System.out.println();
        System.out.println("Welcome to castle!");
        System.out.println("This is a extrimely boring game.");
        System.out.println("If you need help,please enter'help'");
        System.out.println();
        System.out.println("Now,you arrive at" + currentRoom);
        System.out.print("Exit(s) has(have):");
        if(currentRoom.northExit != null)
            System.out.print("north ");
        if(currentRoom.eastExit != null)
            System.out.print("east ");
        if(currentRoom.southExit != null)
            System.out.print("south ");
        if(currentRoom.westExit != null)
            System.out.print("west ");
        System.out.println();
    }

    // user enter

    private void printHelp() 
    {
        System.out.print("You can enter\"go bye help\"to do what you want to do.");
        System.out.println("Fox example:\tgo east");
    }

    private void goRoom(String direction) 
    {
        Room nextRoom = null;
        if(direction.equals("north")) {
            nextRoom = currentRoom.northExit;
        }
        if(direction.equals("east")) {
            nextRoom = currentRoom.eastExit;
        }
        if(direction.equals("south")) {
            nextRoom = currentRoom.southExit;
        }
        if(direction.equals("west")) {
            nextRoom = currentRoom.westExit;
        }

        if (nextRoom == null) {
            System.out.println("閭ｉ噷娌℃湁闂紒");
        }
        else {
            currentRoom = nextRoom;
            System.out.println("浣犲湪" + currentRoom);
            System.out.print("鍑哄彛鏈�: ");
            if(currentRoom.northExit != null)
                System.out.print("north ");
            if(currentRoom.eastExit != null)
                System.out.print("east ");
            if(currentRoom.southExit != null)
                System.out.print("south ");
            if(currentRoom.westExit != null)
                System.out.print("west ");
            System.out.println();
        }
    }
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		Game game = new Game();
		game.printWelcome();

        while ( true ) {
        		String line = in.nextLine();
        		String[] words = line.split(" ");
        		if ( words[0].equals("help") ) {
        			game.printHelp();
        		} else if (words[0].equals("go") ) {
        			game.goRoom(words[1]);
        		} else if ( words[0].equals("bye") ) {
        			break;
        		}
        }
        
        System.out.println("鎰熻阿鎮ㄧ殑鍏変复銆傚啀瑙侊紒");
        in.close();
	}

}
