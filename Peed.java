package Damagocchi;

public class Peed {
	Pet p = new Pet();

	public void peed(int grow) {
		if (p.getGold() < 100) {
			System.out.println("");
		}
		if (p.getGold() >= 100) {
			System.out.println("          <')>))<");
			System.out.println(p.getPet(grow));
		}

	}

	public static void main(String[] args) {
		Peed pe = new Peed();
		pe.peed(1);
	}
}
