/**
 * @file bubble_sort.c
 * @author FrantiĹˇek PĂˇrtl (fpartl@kiv.zcu.cz)
 * @brief Implementace algoritmu bubble sort.
 * @version 1.0
 * @date 2020-09-24
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>		/* PotĹ™ebuju nÄ›co ÄŤĂ­m budu seedovat generĂˇtor nĂˇhodnĂ˝ch ÄŤĂ­sel. */

/**
 * @brief PoÄŤet prvkĹŻ pole, kterĂ© bude generovĂˇno a nĂˇslednÄ› Ĺ™azeno bubble sortem.
 */
#define ARR_LEN 20

/**
 * @brief Styl vĂ˝pisu vygenerovanĂ˝ch poloĹľek generovanĂ˝ch polĂ­ ÄŤĂ­sel.
 */
#define PRINT_STYLE "[%02d] %12d\n"

/**
 * @brief Tohle jenom na ukĂˇzku na konec. Kdyby tĹ™eba Ĺ™adĂ­cĂ­ algoritmy implementovali jako
 *        samostatnou knihovnu -> homework.
 */
typedef enum _sort_order_t {	/* Tady vĹŻbec nemusĂ­ bĂ˝t hodnotu u vĂ˝ÄŤtu. */
    ASCENDING = 0,	/** VzestupnĂ© poĹ™adĂ­. */
    DESCENDING = 1	/** SestupnĂ© poĹ™adĂ­. */
} sort_order_t;

/**
 * @brief Funkce provede vĂ˝pis zadanĂ©ho pole s danĂ˝m popiskem. VĂ˝pis prvkĹŻ pole se Ĺ™Ă­dĂ­ stylem PRINT_STYLE.
 * @param label Popisek pole.
 * @param array Ukazatel na prvky pole.
 * @param array_size PoÄŤet prvkĹŻ pole.
 */
void print_array(const char *label, const int array[], const unsigned int array_size) {


    unsigned int i;

    if(!label && label == NULL || !array || array_size == 0)
    {
        printf("Chyba");
        return;
    }
/**
    int a = 10,b;

    b = ++a;
    b = a++;
*/
    printf("%s:\n",label);
    for(i=0;i<array_size;i++){
        printf(PRINT_STYLE,i+1,array[i]);

    }
}

/**
 * @brief Funkce naplnĂ­ zadanĂ© pole array_size nĂˇhodnĂ˝mi ÄŤĂ­sly z intervalu <0, RAND_MAX>.
 * @param array Pole, kterĂˇ bude plnÄ›no nĂˇhodnĂ˝mi hodnotami.
 * @param array_size PoÄŤet generovanĂ˝ch nĂˇhodnĂ˝ch ÄŤĂ­sel.
 */
void generate_array(int array[], const unsigned int array_size) {
    unsigned int i;

    if (!array || array_size ==0 ){
        return;
    }
    for (int i = 0; i < array_size; ++i) {
        array[i] = rand();
    }
}

/**
 * @brief Funkce seĹ™adĂ­ zadanĂ© pole pomocĂ­ algoritmu bubble sort.
 * @param array Pole ÄŤĂ­sel, kterĂ© bude Ĺ™azeno.
 * @param array_size PoÄŤet prvkĹŻ pole.
 * @param order PĹ™Ă­znak, kterĂ˝ urÄŤuje zda je poĹ™adĂ­ sestupnĂ© nebo vzestupnĂ©.
 */
void bubble_sort(int array[], const unsigned int array_size, sort_order_t order) {

}

/**
 * @brief HlavnĂ­ pĹ™Ă­stpovĂ˝ bod aplikace, kterĂ˝ vygeneruje ARR_LEN celĂ˝ch kladnĂ˝ch ÄŤĂ­sel. Tato ÄŤĂ­sla budou
 *        nĂˇslednÄ› seĹ™azena algoritmem bublinkovĂ©ho Ĺ™azenĂ­.
 * @return int Funkce vĹľdy vracĂ­ hodnotu EXIT_SUCCESS.
 */
int main() {
    int array[ARR_LEN] = { 0 };	/* Pole ÄŤĂ­sel. */

    /* Vygeneruje pole nĂˇhodnĂ˝ch prvkĹŻ. */
    generate_array(array, ARR_LEN);
    print_array("Vygenerovane prvky", array, ARR_LEN);

    /* SeĹ™adĂ­m jej pomocĂ­ algoritmu bubble sort. */
    /* bubble_sort(array, ARR_LEN, DESCENDING); */
    print_array("Serazene prvky", array, ARR_LEN);

    return EXIT_SUCCESS;
}