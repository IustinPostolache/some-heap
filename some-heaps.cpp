#include<iostream>
#include<math.h>
using namespace std;
int main()
int node;
int NULL;
int my_left, my_right,my_info,*awesome_tree;
class node{
                 public :
                 double my_info;
                 class node *my_left;
                 class node *my_right;
                 };

node *awesome_tree=NULL;
node *make_some_tree(node *this_one,double new_one)
{// ...
}
node *find_devil_node(node *this_tree,int tricky_value,node *macho_father)
{//...
}
int RSD(node *this_one)
{
if (this_one!=NULL) {
                            return 1+RSD(this_one.my_left);
                            return 1+RSD(this_one.my_right);
                                  }
return 0;
}

int main()
{
int n=5;
int values[10]={235,55,889,31,67};
for(int i=0;i<n;i++)
awesome_tree=make_some_tree(awsome_tree,values[i]);
node *forked;
node *macho_father;
forked=find_devil_node(awesome_tree,55,macho_father);
cout<<"Dezechilibrium "<<abs(RSD(forked->left)-RSD(forked->right));
// afisam 0
}  [31]   [67]

RSD(1): 235,55,31,67,889
SRD(1): 31,55,67,235,889
SDR(1): 31,67,55,889,235

/*
1) - make it ( with repeated insertion )
    ( prove it  with 3 traverse method )

2) - find some value

---------------------------------------

3) - delete some value
4) - update some value
5) - echilibrium methods ( ... some theory )  <-----------------

Puncte de dezechilibrare in arbori binari de cautare

Idee  :  Arborele pe anumite zone poate fi echilibrat
             dar in anumite zone  poate fi dezchilibrat

Vrem :  Sa depistam "inceputul zonelor problema"

Cum  :   Pentru fiecare nod calculam gradul de dezechilibru
              al subarborelui a carui radacina este
              ( obs : in cazul unui arbore binar echilibrat pentru orice nod
                          avem o valoare in multimea {0,1} )

Pentru a obtine informatia dorita trebuie sa aflam :
- pasii ( muchiile pe care merg ) pana la cel mai indepartat
  nod al subarborelui stang
- pasii ( muchiile pe care merg ) pana la cel mai indepartat
  nod al subarborelui drept

Urmand ca modulul diferentei celor doua valori sa insemne gradul
de dezechilibru

Testing zone :

Prerequizities

  - avem arborele binar de cautare

functioneaza rutina  :
node *make_some_tree(node *this_one,double new_one)

  - avem adresa unui anumit

functioneaza rutina  :
node *finddevilnode(node *this_tree,int tricky_value,node *macho_father)

   - avem metode de parcurgere implementate

functioneaza rutinele  :
int RSD(node *this_one)

Task :
int RSD(node *this_one)
{if (this_one!=NULL) {
 //                       cout<<this_one.my_info<<" ";
                            return 1+RSD(this_one.my_left);
                            return 1+RSD(this_one.my_right);
                                  }
return 0;}
intoarce numarul tuturor nodurilor vizitate
Deci ceea ce cautam este :
*/

#include<math.h>
class node{
                 public :
                 double my_info;
                 class node *my_left;
                 class node *my_right;
                 };

node *awesome_tree=NULL;
node *make_some_tree(node *this_one,double new_one)
{// ...
}
node *find_devil_node(node *this_tree,int tricky_value,node *macho_father)
{//...
}
int RSD(node *this_one)
{
if (this_one!=NULL) {
                            return 1+RSD(this_one.my_left);
                            return 1+RSD(this_one.my_right);
                                  }
return 0;
}

int main()
{
int n=5;
int values[10]={235,55,889,31,67};
for(int i=0;i<n;i++)
awesome_tree=make_some_tree(awsome_tree,values[i]);
node *forked;
node *macho_father;
forked=find_devil_node(awesome_tree,55,macho_father);
cout<<"Dezechilibrium "<<abs(RSD(forked->left)-RSD(forked->right));
// afisam 0
}
