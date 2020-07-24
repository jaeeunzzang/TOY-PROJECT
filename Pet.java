package Damagocchi;

public class Pet {
	private String pet1 = "£Þ¡©¡©¡©£Þ\n(¥Õ ¥ø ¥Õ)\n";
	private String pet2 = "£Þ¡©¡©¡©£Þ\n(¥Õ ¥ø ¥Õ)\n   ¡ú     ¡ú ";
	private String pet3 = "£Þ¡©¡©¡©£Þ\t  ¦£\n(¥Õ ¥ø ¥Õ)¦¡¦¡¦¡¦©\n   ¡ú     ¡ú   ¡ú     ¡ú";
	private static int gold;
	private String name;
	
	static {
		gold = 1000;
	}

	public int getGold() {
		return gold;
	}

	public void setGold(int gold) {
		Pet.gold = gold;
	}

	public String getPet(int i) {
		if (i == 1)
			return pet1;
		if (i == 2)
			return pet2;
		if (i == 3)
			return pet3;

		return null;
	}

	public String getPet1() {
		return pet1;
	}

	public void setPet1(String pet1) {
		this.pet1 = pet1;
	}

	public String getPet2() {
		return pet2;
	}

	public void setPet2(String pet2) {
		this.pet2 = pet2;
	}

	public String getPet3() {
		return pet3;
	}

	public void setPet3(String pet3) {
		this.pet3 = pet3;
	}

	public void disp(String pet) {
		System.out.println(pet);
	}

	public void pet1() {
	}

	public void pet2() {
	}

	public void pet3() {
	}

}
