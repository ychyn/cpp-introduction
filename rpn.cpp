//Calculatrice polonaise inversée
/*L'énoncé est:
Écrire un programme C++ qui évalue une expression arithmétique fournie en notation polonaise 
inversée en argument à votre programme (i.e. sur la ligne de commande le programme), et 
affiche le résultat sur la sortie standard.

En notation polonaise inversée (**R**everse **P**olish **N**otation) les opérateurs suivent 
leurs opérandes et il n'est donc pas nécessaire de parenthéser les sous-expressions. Par 
exemple, 3+4*5 devient 3 4 5 x + en polonaise inversée et 2*5+4/2 devient 2 5 x 4 2 / +

Supposons que votre exécutable s'appelle rpn_cpp.

La première expression sera évaluée comme cela:
$ ./rpn_cpp 3 4 5 x +
> 23

La seconde comme cela:
$ ./rpn_cpp 2 5 x 4 2 / +
> 12
*/

#include <iostream>
#include <vector>

std::vector<std::string> convertArg(int argc, char **argv)
{
  std::vector<std::string> args(argc - 1);
  for (int i = 0; i < argc - 1; i++)
  {
    args[i] = argv[i + 1];
  }
  return args;
}

int main(int argc, char **argv){
    auto args = convertArg(argc,argv);
    std::vector<int> queue(0);
    for(int i{0}; i < args.size(); i++){
        if(args[i] == "+"){
            int b = queue.back(); 
            queue.pop_back();
            int a = queue.back(); 
            queue.pop_back();
            queue.push_back(a+b);
        }
        else if (args[i] == "-"){
            int b = queue.back(); 
            queue.pop_back();
            int a = queue.back(); 
            queue.pop_back();
            queue.push_back(a-b);
        }
        else if (args[i] == "x"){
            int b = queue.back(); 
            queue.pop_back();
            int a = queue.back(); 
            queue.pop_back();
            queue.push_back(a*b);
        }
        else if (args[i] == "/"){
            int b = queue.back(); 
            queue.pop_back();
            int a = queue.back(); 
            queue.pop_back();
            queue.push_back(a/b);
        }
        else if (args[i] == "!"){
            int a = queue.back(); 
            queue.pop_back();
            queue.push_back(-a);
        }
        else{
            queue.push_back(std::stoi(args[i])); 
        }
    } 
    std::cout << queue.back() << std::endl;
    return 0;
}