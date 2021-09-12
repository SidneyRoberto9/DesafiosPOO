import java.util.Scanner;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Principal {

	public static void main(String[] args) throws InterruptedException {
		Scanner leia = new Scanner(System.in);
		
		int esc = 0, op = 1;
		String str, linha;

		File arquivo = new File("../Manipulação_de_Arquivo_TXT-PROJETO 1/src/extensão.txt"); 
		
		try {
			if(!arquivo.exists()) arquivo.createNewFile();
			
			while(op > 0) {
				System.out.println("-----# MENU #-----");
				System.out.println(" 1 - Inserir Nome no Arquivo");
				System.out.println(" 2 - Exibir todos os Nomes do Arquivo");
				System.out.println(" 3 - Apagar todo Arquivo");
				System.out.println(" 4 - Sair do Programa");
				System.out.print(" --> ");
		
				esc = leia.nextInt();
				leia.nextLine();
				switch (esc) {
					case 1:
						FileWriter fw = new FileWriter(arquivo, true);	
						//construtor que recebe também como argumento se o conteúdo será acrescentado
						//ao invés de ser substituído (append)

						BufferedWriter bw = new BufferedWriter(fw);
						//construtor recebe como argumento o objeto do tipo FileWriter
						
						System.out.print("Escreva Oque deseja inserir: ");
						str = leia.nextLine();
						
						bw.write(str);
						//escreve o conteúdo no arquivo
						bw.newLine();
						//quebra de linha
						
						bw.close();
						fw.close();
						break;
						
					case 2:
						FileReader fr = new FileReader(arquivo);
						//construtor que recebe o objeto do tipo arquivo
						BufferedReader br = new BufferedReader(fr);
						//construtor que recebe o objeto do tipo FileReader
		
						System.out.println("Conteudo txt: ");
						while(br.ready()){
							//enquanto houver mais linhas
							linha = br.readLine();
							//lê a proxima linha
							System.out.println(linha);
						}
						
						br.close();
						fr.close();

						break;
						
					case 3:
						arquivo.delete();
						//exclui o arquivo
						System.out.println("Arquivo deletado com Sucesso");
						
						FileWriter fq = new FileWriter(arquivo, true);	
						BufferedWriter bq = new BufferedWriter(fq);
				
						bq.close();
						fq.close();
						break;
						
					case 4:
						op = 0;
						break;
						
					default:
						System.out.println("Opção invalida, tente novamente...");
				}
				System.out.println("\nPressione (Enter) para continuar");
				leia.nextLine();
				limpar_tela();
			}
				
		}catch (IOException ex) {
			ex.printStackTrace();
		}
		leia.close();
	}
	
	
	public static void limpar_tela(){
		for(int i = 0; i < 100; i++)System.out.println();
	}
}