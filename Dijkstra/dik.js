adj=[];
adj['A']=[['B',3],['C',4]];
adj['B']=[['E',7]];
adj['C']=[['B',2],['F',4],['D',1]];
adj['F']=[['E',3],['X',1]];
adj['E']=[['D',6],['G',9]];
adj['D']=[['G',4]];
adj['G']=[['X',-2]];
adj['X']=[];

dist=[];
dist['A']=0;
dist['B']=100;
dist['C']=100;
dist['F']=100;
dist['E']=100;
dist['D']=100;
dist['G']=100;
dist['X']=100;

prev=[];
prev['A']='';
prev['B']='';
prev['C']='';
prev['F']='';
prev['E']='';
prev['D']='';
prev['G']='';
prev['X']='';

// console.log(adj);

q=[];q.push(['A',0]);

while(q.length>0){
    curr = q.splice(0,1)[0];

    adj[curr[0]].forEach(child => {
        if(dist[curr[0]]+child[1]<dist[child[0]]){
            dist[child[0]]=child[1]+dist[curr[0]];
            prev[child[0]]=curr[0]
        }
        q.push(child);
    });
}

console.log(dist);

start = 'A';end='X';

recPath=(target,path)=>{
    if(prev[target]=='A')
        console.log(String(path+','+prev[target]).split("").reverse().join(''));
    else recPath(prev[target],path+','+prev[target]);
}

recPath('X','');




// class node{};

// done=[];
// map=[];
// map.push(['A',adj['A']]);
// var curr = null;
// while(map.length>0){
//     curr = map.splice(0,1)[0];
//     n=new node();
//     n.d = curr[0];
//     done[curr[0]]=true;

//     curr[1].forEach((e,i)=>{
//         ch = new node();
//         ch.d = adj[e[0][0]];
//         n.i = ch;
//         map.push([e[0],adj[e[0]]]);
//     });
// }

// console.log(curr);