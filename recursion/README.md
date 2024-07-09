# Récursion et Factoriels

Ce guide présente une explication simple de la récursion et des factoriels, leur utilité, et des exemples en C pour illustrer leur fonctionnement.

## Qu'est-ce que la récursion ?

**Récursion** est une technique où une fonction s'appelle elle-même pour résoudre un problème. Cela permet de décomposer un problème complexe en sous-problèmes plus simples.

- **Définition** : Découper un problème en petits morceaux, les résoudre individuellement, puis combiner les solutions pour résoudre le problème complet. Comme des poupées russes, on ne peut résoudre le grand problème qu'après avoir résolu les petits.

- **Cas de base** : C’est la condition qui met fin à la récursion, empêchant une boucle infinie. Par exemple, dans le calcul du factoriel, `0! = 1` est le cas de base.

### Exemple en C

```c
#include <stdio.h>

void print(int nb) {
    printf("%d", nb);
    nb--;
    if (nb > 0) {
        print(nb);
    }
}
```
```c
int main(void) {
    print(2);
    return 0;
}
```

## Modèle pour Implémenter la Récursion en C

```c
/** 1. Déclaration de la fonction récursive */
type_de_retour nom_de_la_fonction(type paramètre) 
{
	/** 2. Cas de base : condition qui termine la récursion */
	if (condition) 
	{
		 return valeur_de_retour; // Valeur qui arrête la récursion
	}
    /** 3. Cas récursif : appel de la fonction avec des paramètres modifiés */
    return opération(nom_de_la_fonction(modification_du_paramètre));
}
```
```c
// 4. Fonction main pour tester la récursion
int main(void) {
    type resultat = nom_de_la_fonction(valeur_initiale);
    // Affichage ou utilisation du résultat
    return 0;
}
```