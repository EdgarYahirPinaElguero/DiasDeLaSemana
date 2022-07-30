package Clase3;

public class DiasSemana {
	public static void main (String[] args) {
		String dia;
		dia="Viernes"; //solo_escribe_el_dia_de_la_semana_y_saldra_el_mensaje.:)
		
		switch (dia){
			case "Lunes":
				System.out.println("Odio los lunes");
				break;
			case "Martes":
				System.out.println("Odio los martes");
				break;
			case "Miercoles":
				System.out.println("Ya es miercoles");
				break;
			case "Jueves":
				System.out.println("Ya casi fin de semana");
				break;
			case "Viernes":
				System.out.println("Feliz fin de semana.:)");
				break;
			case "Sabado":
				System.out.println("Gracias a dios ya es sabado");
				break;
			case "Domindo":
				System.out.println("Ya acabo el fin de semana hasta el otro fin de semana");
				break;
				default:
				System.out.println("Mes no valido");


		}
	}

}
