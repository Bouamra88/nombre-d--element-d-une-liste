#include<stdio.h>
#include<stdlib.h>
typedef struct element element;
 struct element{
 	int val;
 	element*suivant;};
typedef element*liste;
 liste creer();
 void affiche(liste);
 int nombre( liste);
 main(){
 	printf(" liste chain \n\t ");
 	liste l ;int  nomb;
 	l=creer();
 	affiche(l);
 	nomb=nombre(l);
printf(" n= %d",nomb);
 	getchar();getchar(); }
  liste creer(){
 liste l,p; int n;
	l=(element*)malloc(sizeof(element));
p=l;
	do{
	printf ("enter un element de la liste ");
	scanf("%d",&p->val);
	printf(" \n enter un autre element?  \n 1 oui \n 2 non ")	;
	scanf("%d",&n);
	if(n==1)
	{p->suivant=(element*)malloc(sizeof(element));
	p=p->suivant;}
else
	p->suivant=NULL;
	}	while(n!=2)	;
	return(l);
 }
 void affiche(liste l){
 	while(l!=NULL)
	 {
	 printf(" \n %d",l->val);
	l=l->suivant;}	}
 int nombre(liste l){
     	liste p ,v ,q; int i=0,c;
  p=l;
  q=l;
  // trier la chaine
 while(p!=NULL)
	 {
	 v=p->suivant;
 		while(v!=NULL)
		{
			if (p->val<=v->val)
	{
		c=p->val;
		p->val=v->val;
		v->val=c;
	}
	v=v->suivant;

 	}
       p=p->suivant;
	   }
	// affiche(l);
	// creer une chaine sans repetition
	;
liste o=(element*)malloc(sizeof(element));
liste m=o;
m->val=q->val;
do
 {   if(q->val == m->val)

	    q=q->suivant;
else {
	   m->suivant=(element*)malloc(sizeof(element));
	    m = m->suivant;
		    m->val=q->val;q=q->suivant;    }

	        } while(q!= NULL );
         m->suivant=NULL;
		 while(o!=NULL )
    { i++;
     o=o->suivant;  }
		 return(i);
 }
