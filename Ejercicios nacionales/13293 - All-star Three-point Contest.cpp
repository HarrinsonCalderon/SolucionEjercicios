
    #include<bits/stdc++.h>
    using namespace std;
    bool caso1=false;
    struct s{
    string nombre="";
    int total=0;
    }v[105];
    int it=0;
    void separar(string cad){
        string aux="";
        int i=0;
    for(i=0;i<cad.length();i++){
    if(cad[i]==';'){
        v[it].nombre=cad.substr(0,i);
        break;
    }
    }


    int it2=0;
    int n;
    for(i;i<cad.length();i++){
        if(cad[i]==';'){
        if(cad[i+1]=='1'){
            v[it].total++;
        }
        if( cad[i+3]=='1'){
        v[it].total++;
        }
        if(cad[i+5]=='1'){
        v[it].total++;
        }
        if( cad[i+7]=='1'){
        v[it].total++;
        }
        if(cad[i+9]=='1'){
            v[it].total+=2;
        }
        i+=5;
        }


    }
    //cout<<v[it].nombre<< " "<<v[it].total<<"\n";
    if(it>=1){
        if(v[it-1].total==v[it].total){
            caso1=true;
        }else{
        false;
        }
    }

    }
    string lower(string a) {
	for (int i = 0; i < a.length(); i++)
		a[i] = tolower(a[i]);
	return a;
}
    bool cmp1(string a,string b){
    return lower(a)<lower(b);
    }
    bool cmp(s a,s b){
     if(a.total!=b.total)
        return a.total>b.total;
     return cmp1(a.nombre,b.nombre);
    }
    main(){
    int sa=1;
    int n,n1=0;
    while(cin>>n){
            n1=n;
    getchar();
    while(n--){
    string cad;
    getline(cin,cad);
    separar(cad);
    it++;
    }

    sort(v,v+n1,cmp);

    cout<<"Case "<<sa<<":\n";
      for(int i=0;i<it;i++){
      cout<<v[i].nombre<<" "<<v[i].total<<"\n";
    }
    for(int i=0;i<it;i++){
        v[i].nombre="";
        v[i].total=0;
    }
    it=0;
    sa++;
    caso1=false;
    }
    return 0;
    }
