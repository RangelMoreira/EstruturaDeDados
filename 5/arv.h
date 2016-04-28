#include <stdio.h>
#include <stdlib.h>

//PROGRAMA:  abb2
//arvore binaria
struct arv
{
    int info;
    struct arv* esq;
    struct arv* dir;
};
typedef struct arv Arv;

//cria arvore vazia
Arv*  abb_cria()
{
      return NULL;
}

//verifica se a arvore está vazia
int abb_vazia(Arv* a)
{
    return a == NULL;
}    
      
//insere elemento interativamente
Arv  *abb_insere(Arv* a,int c)
{
     Arv *p,*q,*r;
     p=(Arv*)malloc(sizeof(Arv));
     p->info = c;
     p->esq = p->dir = NULL;
     
     if (abb_vazia(a))//primeiro elemento da árvore
         a=p;
     else
     {
         q=a;
         while(q!=NULL)
         {
             r=q;
             if(c < q->info)
                  q=q->esq;
             else
                  q=q->dir;
         }
         if(c < r->info)
            r->esq=p;
         else
            r->dir=p;
     }
     return a;
 }   

//retira elemento
Arv* abb_retira(Arv *r, int v)
{
     if (r==NULL) return NULL;
     if(r->info > v) r->esq = abb_retira(r->esq, v);
     else if (r->info < v) r->dir = abb_retira(r->dir, v);
          else {
               //achou o elemento 
                if ( r->esq ==NULL && r->dir ==NULL) { // no sem filhos
                     free(r);
                     r=NULL;
                     } 
                else  if (r->esq ==NULL) { //filho a direita            
                          Arv *t = r;
                          r=r->dir;
                          free(t);
                          }
                      else if( r->dir ==NULL) { //filho a esquerda
                               Arv *t=r;
                               r=r->esq;
                               free(t);
                               }
                            else { //tem 2 filhos     
                                     Arv *f=r->esq;
                                     while (f->dir != NULL)f=f->dir;
                                     r->info =f->info;
                                     f->info=v;
                                     r->esq=abb_retira(r->esq,v);
                                   }
                    }
                    return r;                           
}

//percurso em pre-ordem
void abb_imprime1(Arv* a)
{
     if(!abb_vazia(a)) 
     {
         printf("%d ", a->info); //visita a raiz, arvore esquerda e arvore direita
         abb_imprime1(a->esq);
         abb_imprime1(a->dir);
     }                
}

//percurso em ordem
void abb_imprime2(Arv* a)
{
     if(!abb_vazia(a)) 
     {
         abb_imprime2(a->esq); //visita a arvore esquerda,  a raiz e depois a arvore direita
         printf("%d ", a->info);
         abb_imprime2(a->dir);
      }                
}

//percurso em pós-ordem
void abb_imprime3(Arv* a)
{
     if (!abb_vazia(a)) 
     {
         abb_imprime3(a->esq);//visita a arvore esquerda, a arvore direita e depois a raiz
         abb_imprime3(a->dir);
         printf("%d ", a->info);
      }                
}

//soma todos os nós da arvore
int abb_somaarv(Arv* a){
    if(a==NULL)  return 0;  
      
       return (a->info + abb_somaarv(a->esq)+abb_somaarv(a->dir));
}         

//soma todos os nós da arvore
int abb_conta(Arv* a){
    int tot=0;
    if(a!=NULL){
        tot=tot+abb_conta(a->esq);
        tot=tot+1;
        tot=tot+abb_conta(a->dir);
    } 
     return tot;
  }
int abb_contapares(Arv* a){
    int tot=0;
    if(a!=NULL){
        tot=tot+abb_contapares(a->esq);
        if(a->info%2==0)
           tot=tot+1;
        tot=tot+abb_contapares(a->dir);
    } 
     return tot;
  }

int abb_mostrapares(Arv *a){
      if(a!=NULL){
       abb_mostrapares(a->esq);
       if(a->info %2==0)//se for par
           printf("%d\t",a->info);
       abb_mostrapares(a->dir);
      }
}                 

//operação de busca
Arv* abb_busca(Arv *a, int v)
{
     if (abb_vazia(a)) return NULL;
     if(a->info > v) return abb_busca(a->esq,v);
     else 
        if (a->info < v) return abb_busca (a->dir, v);
     return a;
}    

//função auxiliar usada na determinação da altura da arvore
int max2 (int a, int b)
{
       return (a>b)?a:b;
}       

//determina a altura da arvore
int abb_altura(Arv *a)
{
       if (abb_vazia(a))
           return -1;
       return 1+ max2(abb_altura(a->esq),abb_altura(a->dir));   
}