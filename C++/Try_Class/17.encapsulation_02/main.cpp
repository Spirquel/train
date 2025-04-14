#include "Rectangle2/Rectangle2.hpp"

int main()
{
    Rectangle2 re{10.5, 15.656365, "rouge"};
    re.get();
    re.setLongueur(13.0);
    re.setLargeur(65.255435456);
    re.setCouleur("bleu");
    re.get();

    return 0;
}