// Checks that we get completion edges for explicit function template specs.
//- @id defines PrimDecl
template <typename T> T id(T x);
//- @id defines Decl1
template <> int id(int x);
//- @id defines PrimDefn
//- @id completes/uniquely PrimDecl
template <typename T> T id (T x) { }
//- @id defines Defn
//- @id completes/uniquely Decl2
//- @id completes/uniquely Decl1
template <> int id(int x) { return x; }
//- @id defines Decl2
template <> int id(int x);
//- Decl2 specializes TAppPrimDecl
//- Decl1 specializes TAppPrimDecl
//- Defn specializes TAppPrimDecl
//- TAppPrimDecl param.0 PrimDecl
