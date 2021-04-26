
import java.util.ArrayList;

public class Principal {

	public static void main(String[] args) {
		String entrada = "82 76 92 85 95 13 32 35 61 87 77 81 56 25 75 9 50 54 53 36 1 68 49 78 55 31 22 72 45 97 33 11 91 16 14 15 24 88 37 70 66 12 2 40 65 5 84 44 93 80 98 64 23 73 7 79 59 51 52 71 42 38 28 10 27 48 34 62 21 19 60 39 20 67 17 74 94 89 18 63 86 8 26 43 4 6 30 41 96 83 3 47 46 90 57 58 69 29";
        String[] str = entrada.split(" ");
        int vetor[] = new int[str.length];
        int Numeros_na_linha = 1, Numeros_por_linha = 0, sum = 0,  quant = 0;
        
        ArrayList<Integer> lista = new ArrayList<Integer>();
        ArrayList<Integer> menores = new ArrayList<Integer>();
        
        for(int i = 0; i < str.length; i++)vetor[i] = Integer.parseInt(str[i]);
        
        int menor = vetor[0];
        
        for(int i: vetor) {       
        	lista.add(i);
        	quant++;
        }
        
        System.out.println("Quantidade: "+ quant);
        System.out.println("String: " + entrada);
        System.out.println("Lista: " + lista);
        System.out.println("\n\n-----------------------\n-- PIRAMIDE --");
        
        lista.clear();
        
        for(int i: vetor) {
        	lista.add(i);
        	Numeros_por_linha++;
        	if(menor > i)menor = i;
        	if(Numeros_na_linha == Numeros_por_linha) {
        		menores.add(menor);
        		menor = i;
        		System.out.println(lista);
        		lista.clear();
        		Numeros_por_linha = 0;
        		Numeros_na_linha++;
        	
        	}
        }
        
        System.out.println("-----------------------");
        
        System.out.print("\nOs Menores Valores são : " + menores);
        for(int i: menores)sum +=i;
       
        System.out.println("\nSoma de todos os menores " + sum);
        
	}
}
