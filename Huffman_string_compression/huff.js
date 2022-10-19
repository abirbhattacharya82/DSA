class node{
    left = null;
    right = null;
    data = null;
    frq = null;
}

let fr = {P : 11 ,R  : 7,E : 14,Q  : 8,A:  9,I : 5,O : 3}

// let fr = {      
//        b  : 2,
//        e:  3,
//        c : 5,f : 7,d  : 13,a : 70 
        
// }

fr = Array.from(Object.entries(fr));

fr.sort((a,b)=>{return a[1]-b[1]});

var queue = [];

fr.forEach(e=>{
    n = new node();
    n.data = e[0];
    n.frq = e[1];
    queue.push(n);
});

console.log(queue,'tt');

ans = null;


    while(queue.length>1){
        var a=queue.splice(0,1)[0];
        var b=queue.splice(0,1)[0];
        var z = new node();
        z.left=a;
        z.right=b;
        z.data='z';
        z.frq=a.frq+b.frq;
        if(a.frq<b.frq){
            z.left=a;
            z.right=b;
        }
        else if(a.frq>b.frq){
            z.left = b;
            z.right = a;
        }
        queue.splice(0,0,z);
        console.log(queue,queue.length);
    }
console.log(queue[0]);

rec=(str,node)=>{
    if(node.data!='z')console.log(str,node.data);
    else{
        rec(str+'0',node.left);
        rec(str+'1',node.right);
    }
}

rec('',queue[0]);