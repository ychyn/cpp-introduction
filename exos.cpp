#include <iostream>

void exo3(){
    int count {0};
    int num;
    for(int c =0; c<5; c++){
        if(c==0){
            std::cout << "Le 1er nombre est : ";
        }
        else{
        std::cout << "Le " << c+1 << "eme nombre est : ";
        }
        std::cin >> num;
        count = count + num;
    }
    std::cout << "La moyenne c'est: " << count / 5 << std::endl;
}

void exo4(){
    float prix;
    int nb_elements;
    float taxe;
    std::cout << "Rentrez le prix HT du produit: ";
    std::cin >> prix;
    std::cout << "Combien t'en veux ???" << std::endl;
    std::cin >> nb_elements;
    std::cout << "Et la taxe elle est a combien?"<< std::endl;
    std::cin >> taxe;

    std::cout << "Va falloir passer à la caisse, paye la modique somme de " << prix * nb_elements * (100 + taxe) / 100 << " lereles" << std::endl;
}

void exo1_stcontr(){
    long int N;
    std::cout << "Calcul de la somme des N premiers nombres où N = ";
    std::cin >> N;
    long int somme_pas_bien = N*(N+1)/2;
    std::cout << somme_pas_bien << std::endl; 
    // Et non je déconne
    long int sum{0};
    for (int i = 0; i<=N; i++){
        // if(i%1000000 == 0){
        //     std::cout << i << " termes, et on est a " << sum << std::endl;
        // }
        sum += i;
    }
    std::cout << "La somme (calculée de manière itérative, évidemment) vaut: " << sum << std::endl;
}
void exo2_stcontr(){
    int N;
    int sum;
    int num;
    std::cout << "Nombre de nombres: ";
    std::cin >> N;
    for (int i = 0; i<N;i++){
        std::cout << "Entre un numero stp ";
        std::cin >> num;
        sum += num;
        std::cout << "C'est bien continue comme ça ! "<<std::endl;
    }
    std::cout << "la magnifique somme vaut la modique somme de: " << sum << std::endl;
}

void exo3_stcontr(){
    int n ;
    std::cin >> n;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < i; j++) {
            std::cout << ' ';
        }
        for(int j = 0; j < n-i; j++){
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

int main(int argc, char **argv){
    exo3_stcontr();
    return 0;
}