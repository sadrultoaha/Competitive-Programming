/** Treap **/
/** 
Solved:
1. SPOJ - QMAX3VN

 **/
struct item {
    int prior, value, cnt,res;
    bool rev;
    item *l, *r;
    item(){}
	item(int value) {
		cnt = 1;
		this->value = value;
		res = value;
		prior = rand();
		l = r = NULL;
		rev = false;
	}
}*t;

typedef struct item * pitem;

int cnt (pitem it) {
    return it ? it->cnt : 0;
}

void upd_cnt (pitem it) {
    if (it)
        it->cnt = cnt(it->l) + cnt(it->r) + 1;
}
void reset(pitem t){
   if(t) t->res = t->value;//lazy already propagated
}
void combine(pitem& t,pitem l,pitem r){//combine segtree ranges
    if(!l || !r)return void(t = l?l:r);
    t->res = max(l->res, r->res) ;
}
void operation(pitem t){//operation of segtree
    if(!t)return;
    reset(t);//node represents single element of array
    combine(t,t->l,t);combine(t,t,t->r);
}

void push (pitem it) {
    if (it && it->rev) {
        it->rev = false;
        swap (it->l, it->r);
        if (it->l)  it->l->rev ^= true;
        if (it->r)  it->r->rev ^= true;
    }
}


void merge (pitem & t, pitem l, pitem r) {

    if (!l || !r)
        t = l ? l : r;
    else if (l->prior > r->prior)
        merge (l->r, l->r, r),  t = l;
    else
        merge (r->l, l, r->l),  t = r;
    upd_cnt (t);
    operation(t);
}

void split (pitem t, pitem & l, pitem & r, int key, int add = 0) {
    if (!t)
        return void( l = r = 0 );
    int cur_key = add + cnt(t->l);
    if (key < cur_key)
        split (t->l, l, t->l, key, add),  r = t;
    else
        split (t->r, t->r, r, key, add + 1 + cnt(t->l)),  l = t;
    upd_cnt (t);
    operation(t);
}
void reverse (pitem t, int l, int r) {
    pitem t1, t2, t3;
    split (t, t1, t2, l);
    split (t2, t2, t3, r-l+1);
    t2->rev ^= true;
    merge (t, t1, t2);
    merge (t, t, t3);
}

void output (pitem t) {
    if (!t)  return;
    push (t);
    output (t->l);
    printf ("%d ", t->value);
    output (t->r);
}