#include <iostream>
#include <string>
#include<stack>
/*pile est un type de conteneur*/
/*pile, type lifou; on peut empiler et dépiler; dans une pile on ne peut lire que le dernier élément ajouté (pour lire ceux en dessous il faut dépiler)

méthode :   taille : size()
            vide : empty()
            entrer valeur pile : push()
            voir valeur pile : top()
            retirer valeur pile : pop()*/

int main()
{
    std::stack<int> st; /*déclaration de la pile*/

    st.push(25);

    std::cout << "Taille de la pile : " << st.size() << std::endl;
    std::cout << "Top : " << st.top() << std::endl;

    st.push(30);

    std::cout << "Taille de la pile : " << st.size() << std::endl;
    std::cout << "Top : " << st.top() << std::endl;

    st.pop();/*on enlève le dernier élément ajouter à la pile (ici 30)*/

    std::cout << "Taille de la pile : " << st.size() << std::endl;
    std::cout << "Top : " << st.top() << std::endl;

    st.push(65);
    st.push(84);

    while (!st.empty())
    {
        std::cout << "\nTaille de la pile : " << st.size() << std::endl;
        std::cout << "depilage de : " << st.top() << std::endl;
        st.pop();
    }

    std::cout << "\nTaille de la pile : " << st.size() << std::endl;
    std::cout << "la pile est vide" << std::endl;
    return 0;
}