struct Rect {
	ll x1, y1, x2, y2;
	ll area() { 
		return (y2 - y1) * (x2 - x1); 
	}
};

Rect intersect(Rect a, Rect b) {
//
//		______(x2, y2)
//		|    |
//		|    |
//		|    |
//		------
// (x1, y1)
//
	ll lf, rg, up, dn;
	lf = max(min(a.x1, a.x2), min(b.x1, b.x2));
	rg = min(max(a.x1, a.x2), max(b.x1, b.x2));
	up = min(max(a.y1, a.y2), max(b.y1, b.y2));
	dn = max(min(a.y1, a.y2), min(b.y1, b.y2));

	if (rg <= lf || up <= dn) {
		Rect k;
		k.x1=0, k.x2=0, k.y1=0, k.y2=0;
		return k;
	}
	Rect inter;
	inter.x1=lf;
	inter.y1=dn;
	inter.x2=rg;
	inter.y2=up;

	return inter;
}
