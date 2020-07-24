package Damagocchi;

import java.util.InputMismatchException;
import java.util.Scanner;

public class StartGameMain {
	Scanner sc = new Scanner(System.in);
	Pet p = new Pet();
	int grow_Level;

	public void peed(int grow, int food) {
		if (food == 1) {
			if (p.getGold() < 100) {
				System.out.println("");
			}
			if (p.getGold() >= 100) {
				System.out.println("          <')>))<");
				System.out.println(p.getPet(grow));
			}
		}
	}

	public void menu() {

	}

	public void mainMenu() {
		try {
			System.out.println("┌──────────────────┐");
			System.out.println("│ 1. START 2. QUIT │");
			System.out.println("└──────────────────┘");
			System.out.print(">>");

			while (true) {
				switch (sc.nextInt()) {
				case 1:
					menu();
					continue;
				case 2:
					break;
				default:
					continue;
				}
				break;
			}
		} catch (InputMismatchException e) {
			System.out.println("숫자로 입력");
		}
	}

	public static void main(String[] args) {
		StartGameMain sgm = new StartGameMain();
		sgm.mainMenu();
	}
}
