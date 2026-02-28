// ======================
// 1️⃣ Arrays / Utilities
// ======================
function arrayUtils() {
    // Reverse array
    let arr = [1,2,3];
    arr.reverse(); // [3,2,1]

    // Remove duplicates
    arr = [...new Set(arr)];

    // Flatten 2D array
    let arr2D = [[1,2],[3,4]];
    let flat = arr2D.flat(); // [1,2,3,4]

    // Custom sort
    arr.sort((a,b)=>a-b); // ascending
    arr.sort((a,b)=>b-a); // descending
}

// ======================
// 2️⃣ HashMap / Set
// ======================
function mapAndSetExamples() {
    // Map
    let map = new Map();
    map.set("key", 123);
    console.log(map.get("key"));
    console.log(map.has("key"));
    map.delete("key");

    // Set
    let set = new Set();
    set.add(5);
    console.log(set.has(5));
    set.delete(5);
}

// ======================
// 3️⃣ Stack & Queue
// ======================
function stackAndQueue() {
    // Stack
    let stack = [];
    stack.push(1);
    stack.pop();
    let top = stack[stack.length-1];

    // Queue (with shift)
    let queue = [];
    queue.push(1);
    queue.shift();

    // Efficient Queue class
    class Queue {
        constructor(){ this.q = []; this.head=0; }
        enqueue(x){ this.q.push(x); }
        dequeue(){ return this.q[this.head++]; }
        front(){ return this.q[this.head]; }
        size(){ return this.q.length-this.head; }
    }
}

// ======================
// 4️⃣ Max Heap
// ======================
class MaxHeap {
    constructor(){ this.heap=[]; }
    swap(i,j){ [this.heap[i], this.heap[j]] = [this.heap[j], this.heap[i]]; }
    push(val){
        this.heap.push(val);
        this.bubbleUp();
    }
    bubbleUp(){
        let idx=this.heap.length-1;
        while(idx>0){
            let parent=Math.floor((idx-1)/2);
            if(this.heap[parent]>=this.heap[idx]) break;
            this.swap(parent,idx);
            idx=parent;
        }
    }
    pop(){
        if(this.heap.length===1) return this.heap.pop();
        const max=this.heap[0];
        this.heap[0]=this.heap.pop();
        this.bubbleDown();
        return max;
    }
    bubbleDown(){
        let idx=0, length=this.heap.length;
        while(true){
            let left=2*idx+1, right=2*idx+2, largest=idx;
            if(left<length && this.heap[left]>this.heap[largest]) largest=left;
            if(right<length && this.heap[right]>this.heap[largest]) largest=right;
            if(largest===idx) break;
            this.swap(idx,largest);
            idx=largest;
        }
    }
    peek(){ return this.heap[0]; }
}

// ======================
// 5️⃣ Linked List
// ======================
class ListNode {
    constructor(val, next=null){
        this.val = val;
        this.next = next;
    }
}

// ======================
// 6️⃣ Trie
// ======================
class TrieNode {
    constructor(){ this.children={}; this.isEnd=false; }
}
class Trie {
    constructor(){ this.root = new TrieNode(); }
    insert(word){
        let node=this.root;
        for(let c of word){
            if(!node.children[c]) node.children[c]=new TrieNode();
            node=node.children[c];
        }
        node.isEnd=true;
    }
    search(word){
        let node=this.root;
        for(let c of word){
            if(!node.children[c]) return false;
            node=node.children[c];
        }
        return node.isEnd;
    }
    startsWith(prefix){
        let node=this.root;
        for(let c of prefix){
            if(!node.children[c]) return false;
            node=node.children[c];
        }
        return true;
    }
}

// ======================
// 7️⃣ Union Find / DSU
// ======================
class DSU {
    constructor(n){
        this.parent = Array.from({length:n}, (_,i)=>i);
        this.rank = Array(n).fill(1);
    }
    find(x){
        if(this.parent[x]!==x) this.parent[x]=this.find(this.parent[x]);
        return this.parent[x];
    }
    union(x,y){
        let px=this.find(x), py=this.find(y);
        if(px===py) return false;
        if(this.rank[px]<this.rank[py]) [px,py]=[py,px];
        this.parent[py]=px;
        this.rank[px]+=this.rank[py];
        return true;
    }
}

// ======================
// 8️⃣ Graph BFS / DFS
// ======================
function graphTraversalExample(graph, start){
    // BFS
    let queue=[start], visited=new Set([start]);
    while(queue.length){
        let node=queue.shift();
        for(let nei of graph[node]||[]){
            if(!visited.has(nei)){
                visited.add(nei);
                queue.push(nei);
            }
        }
    

    // DFS
    function dfs(node, visited=new Set()){
        visited.add(node);
        for(let nei of graph[node]||[]){
            if(!visited.has(nei)) dfs(nei,visited);
        }
    }
}

// ======================
// 9️⃣ Binary Search Template
// ======================
function binarySearch(arr,target){
    let l=0,r=arr.length-1;
    while(l<=r){
        let m=Math.floor((l+r)/2);
        if(arr[m]===target) return m;
        else if(arr[m]<target) l=m+1;
        else r=m-1;
    }
    return -1;
}