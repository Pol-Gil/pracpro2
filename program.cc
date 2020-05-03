#ifndef NO_DIAGRAM

#include <iostream>
#include <string>
#include "especie.hh"
#endif

#include "cjt_especies.hh"

using namespace std;

int main() {

   // cout.setf(ios::fixed);
    //cout.precision(4);
        
    string s; 
    bool fin = false;
    //cluster clu;
    cjt_especies c;
    //cjt_clusters clusters;
    int k;
    cin >> k;
    especie::insertar_k(k);

    while (cin >> s and not fin) {

      /*  if (s == "crea_especie") {
            bool existe;
            string id, gen;
            cin >> id >> gen;
            existe = c.existe_especie(e.consultar_id());
            if (not existe) {
                c.insertar_especie(e);
            }
        }
        else if (s == "obtener_gen") {
            string s;
            especie e;
            bool existe;
            cin >> s;
            existe = c.existe_especie(s);
            if (existe) {
                e = c.obtener_especie(s);
                cout << e.consultar_gen();
            }
        }
        */
        /*
        if (s == "distancia") {
            string id1,id2;
            bool existe, existe2;
            cin >> id1 >> id2;
            existe = c.existe_especie(id1);
            existe2 = c.existe_especie(id2);
            if (existe and existe2) {
               cout << c.consultar_distancia(id1,id2);
            }
        }
        */
        /*
        else if (s == "elimina_especie") {
            bool existe;
            string id;
            cin >> id;
            existe = c.existe_especie(id);
            if (existe) {
                c.eliminar_especie(id);
            }
        }
        else if (s == "existe_especie") {
            string id;
            cin >> id;
            if (c.existe_especie(id)) {
                cout << "existe" << endl;
            }
        }

        */
        if (s == "lee_cjt_especies") {
            cout << "# lee_cjt_especies" << endl;
            int n;
            cin >> n;
            c.borrar_conjunto();
            for (int i = 0; i < n; ++i) {
                string id, gen;
                cin >> id >> gen;
                especie e(id, gen);
                c.insertar_especie(e);
            }
        }
        else if (s == "imprime_cjt_especies") {
            cout << "# imprime_cjt_especies" << endl;;
            c.imprimir_conjunto();
        }
        /*
        else if (s == "tabla_distancias") {
            c.imprimir_tabla_distancias();
        }
        */
        /*else if (s == "inicializa_clusters") {
            clusters.inicializa_clusters(c.consultar_tabla_distancias());
            clusters.imprimir_clusters();
            clusters.imprimir_tabla_distancias();
        }
        else if (s == "ejecuta_paso_wpgma") {
            clusters.fusiona_clusters();
            clusters.imprimir_tabla_distancias();
        }
        else if (s == "imprime_cluster") {
            string id;
            cin >> id;
            clusters.imprimir_cluster(id);
        }
        else if (s == "imprime_arbol_filogenetico") {
            clusters.inicializa_clusters(c.consultar_tabla_distancias()); // passar directament el conjunt
            clusters.fusiona_todos_los_clusters();
            clusters.imprimir_estructura();
        }
        */
        else if (s == "fin") {
            fin = true;
        }
    }
}