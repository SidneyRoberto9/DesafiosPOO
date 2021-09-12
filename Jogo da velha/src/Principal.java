import java.util.Random;
import java.util.Scanner;

public class Principal {

    public static void campo(int matriz[][]) {
        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[0].length; j++) {
                if (matriz[i][j] == 0) {
                    System.out.print(" #");
                } else if (matriz[i][j] == 1) {
                    System.out.print(" X");
                } else if (matriz[i][j] == 2) {
                    System.out.print(" O");
                }
                if (j < 2) System.out.print(" |");
            }
            if (i < 2) System.out.println("\n-----------");
        }
    }

    public static int modificar(int matriz[][], int pos, int jogador) {
        if (jogador == 1) {
            if (pos == 1) {
                if (matriz[2][0] == 1 || matriz[2][0] == 2) return 0;
                else matriz[2][0] = 1;

            } else if (pos == 2) {
                if (matriz[2][1] == 1 || matriz[2][1] == 2) return 0;
                else matriz[2][1] = 1;

            } else if (pos == 3) {
                if (matriz[2][2] == 1 || matriz[2][2] == 2) return 0;
                else matriz[2][2] = 1;

            } else if (pos == 4) {
                if (matriz[1][0] == 1 || matriz[1][0] == 2) return 0;
                else matriz[1][0] = 1;

            } else if (pos == 5) {
                if (matriz[1][1] == 1 || matriz[1][1] == 2) return 0;
                else matriz[1][1] = 1;

            } else if (pos == 6) {
                if (matriz[1][2] == 1 || matriz[1][2] == 2) return 0;
                else matriz[1][2] = 1;

            } else if (pos == 7) {
                if (matriz[0][0] == 1 || matriz[0][0] == 2) return 0;
                else matriz[0][0] = 1;

            } else if (pos == 8) {
                if (matriz[0][1] == 1 || matriz[0][1] == 2) return 0;
                else matriz[0][1] = 1;

            } else if (pos == 9) {
                if (matriz[0][2] == 1 || matriz[0][2] == 2) return 0;
                else matriz[0][2] = 1;
            }
        } else if (jogador == 2) {
            if (pos == 1) {
                if (matriz[2][0] == 1 || matriz[2][0] == 2) return 0;
                else matriz[2][0] = 2;

            } else if (pos == 2) {
                if (matriz[2][1] == 1 || matriz[2][1] == 2) return 0;
                else matriz[2][1] = 2;

            } else if (pos == 3) {
                if (matriz[2][2] == 1 || matriz[2][2] == 2) return 0;
                else matriz[2][2] = 2;

            } else if (pos == 4) {
                if (matriz[1][0] == 1 || matriz[1][0] == 2) return 0;
                else matriz[1][0] = 2;

            } else if (pos == 5) {
                if (matriz[1][1] == 1 || matriz[1][1] == 2) return 0;
                else matriz[1][1] = 2;

            } else if (pos == 6) {
                if (matriz[1][2] == 1 || matriz[1][2] == 2) return 0;
                else matriz[1][2] = 2;

            } else if (pos == 7) {
                if (matriz[0][0] == 1 || matriz[0][0] == 2) return 0;
                else matriz[0][0] = 2;

            } else if (pos == 8) {
                if (matriz[0][1] == 1 || matriz[0][1] == 2) return 0;
                else matriz[0][1] = 2;

            } else if (pos == 9) {
                if (matriz[0][2] == 1 || matriz[0][2] == 2) return 0;
                else matriz[0][2] = 2;

            }
        }
        return 1;
    }

    public static void jogador(int matriz[][], int player) {
        Scanner leia = new Scanner(System.in);
        Random random = new Random();
        int pos, saida;

        while (true) {
            if (player == 1) {
                campo(matriz);
                System.out.println("\n\n");
                System.out.print("Qual posi��o deseja jogar X?\n");
                pos = leia.nextInt();
                if (pos < 1 || pos > 9) System.out.println("Posi��o Invalida...\n");
                else {
                    saida = modificar(matriz, pos, 1);
                    if (saida == 0) System.out.println("Posi��o Invalida...\n");
                    else if (saida == 1) break;
                }

            } else if (player == 2) {
                pos = random.nextInt(9) + 1;
                saida = modificar(matriz, pos, 2);
                if (saida == 1) break;
            }
        }
    }

    public static int verificar(int matriz[][]) {
        if (matriz[0][0] == 1 && matriz[0][1] == 1 && matriz[0][2] == 1) return 1;
        else if (matriz[0][0] == 2 && matriz[0][1] == 2 && matriz[0][2] == 2) return 2;

        else if (matriz[1][0] == 1 && matriz[1][1] == 1 && matriz[1][2] == 1) return 1;
        else if (matriz[1][0] == 2 && matriz[1][1] == 2 && matriz[1][2] == 2) return 2;

        else if (matriz[2][0] == 1 && matriz[2][1] == 1 && matriz[2][2] == 1) return 1;
        else if (matriz[2][0] == 2 && matriz[2][1] == 2 && matriz[2][2] == 2) return 2;

        else if (matriz[0][0] == 1 && matriz[1][0] == 1 && matriz[2][0] == 1) return 1;
        else if (matriz[0][0] == 2 && matriz[1][0] == 2 && matriz[2][0] == 2) return 2;

        else if (matriz[0][1] == 1 && matriz[1][1] == 1 && matriz[2][1] == 1) return 1;
        else if (matriz[0][1] == 2 && matriz[1][1] == 2 && matriz[2][1] == 2) return 2;

        else if (matriz[0][2] == 1 && matriz[1][2] == 1 && matriz[2][2] == 1) return 1;
        else if (matriz[0][2] == 2 && matriz[1][2] == 2 && matriz[2][2] == 2) return 2;

        else if (matriz[0][0] == 1 && matriz[1][1] == 1 && matriz[2][2] == 1) return 1;
        else if (matriz[0][0] == 2 && matriz[1][1] == 2 && matriz[2][2] == 2) return 2;

        else if (matriz[2][0] == 1 && matriz[1][1] == 1 && matriz[0][2] == 1) return 1;
        else if (matriz[2][0] == 2 && matriz[1][1] == 2 && matriz[0][2] == 2) return 2;

        else return 0;

    }

    public static void main(String[] args) {
        int jogo[][] = new int[3][3];
        int end = 0, jogada = 1, vencedor = 0;

        for (int l = 0; l < jogo.length; l++) {
            for (int c = 0; c < jogo[0].length; c++) {
                jogo[l][c] = 0;
            }
        }

        System.out.println("(As posi��es das jogadas variam entre 1 e 9 Como um teclado Numerico)");

        while (end != 9) {
            System.out.println("\n");
            jogador(jogo, jogada);

            if (jogada == 1) jogada++;
            else if (jogada == 2) jogada = 1;

            end++;
            vencedor = verificar(jogo);
            if (vencedor == 1 || vencedor == 2) break;
        }

        System.out.println("\n\n");

        if (vencedor == 1) System.out.println("Parabens pela Vitoria Jogador X!!");
        else if (vencedor == 2) System.out.println("Parabens pela Vitoria Jogador O!!");
        else System.out.println("Empate!!");

    }
}
