#include<bits/stdc++.h>
using namespace std;

//Function to explain vectors:
void explainVectors(){
    vector<int> v1; // Creates an empty container v.
    v1.push_back(1); 
    v1.emplace_back(3);
  // vector of pair:
    vector<pair<int,int>> v2 ; 
  // push_back in pair require curly braces:
  v2.push_back({1,3});
  // whereas emplace_back works without them only:
  v2.emplace_back(1,2);
  // declare a container which is already filled:
  vector<int> v3(5,100); // this means -> [100,100,100,100,100];
/* so container with 5 size all declared with 100 . Also even 
  if you have defined size 5 , you can push any element and it will
   modift it;s sizr relatively*/
  /* if you dont want to declare this with 100 you can do this */
vector<int> v4;
/* what it does is declared vector of size 5 with all 5 instances
declared with 0 or any garbadge value (depends on compiler)*/
/* what if we want to copy this vecotr v3 in some othe vector say 
   "vec" then we can do it like, */
   vector<int>vec(v3);
    /* it will be another container a copy of it not the same */

/*How to acces vector elements*/
/* Way 1: Same as we were doing with arrays */
     cout<<v1[1]<<endl; // it will give us 3 since v1 is [1,3] above.
     cout<<v1.at(0); // this is not used so ignore this. good to know.
    
/* Way 2: by iterator we can access vector elements */

// ITERATOR : It means a variable that points to the memory of the  
// value . Syntax is : vector<int>::iterator iterator_name = v.begin();
// now here itrator_name could be anything and we have to use * to access the value 
// stored inside that memory which iterator is pointing to :

vector<int>::iterator itr = v1.begin();
cout<<*(itr)<<endl; // above v1.begin() pointing to the memory where 
// first element of v1 vector sitting is. Now to access the value of that
// start position. we used * as shown above. Also we can increase iterator
// like below:
itr+=2;
//this increases iterator by 2 and we can use it now to access that 
//second index value in vector as we know vectors are also contigous
cout<<*(itr);

/* Other iterators */

vector<int>::iterator itr = v1.end(); // Does not point to the memory location of 
// the last element. It will point to right next to the end location.
vector<int>::iterator itr = v1.rend(); // end is first now but never used.
vector<int>::iterator itr = v1.rbegin(); // first is end and not used.

// Last element:
cout<<v1.back()<<" ";

//Printing the vector:
vector<int>v5(5); // size 5 vector is initialized.
for(vector<int>::iterator it = v5.begin() ; it != v5.end() ; it++ ){
    cout<<*it<<" ";
}
// Another short form:
for(auto it = v5.begin() ; it!=v5.end(); it++){
    cout<<*it<<" ";
}
//Another short form:
for(auto it:v5){
    cout<<it<<" ";
}

// Deletion in vector:
v5.erase(v5.begin()+1) // removes the second element
v5.erase(v5.begin()+2 , v5.begin()+4) // delete the range 2 and 3 both.
// But note that at end it;s not included it iwill delete the 3rd 
// element not 4th one okay!

/* INSERT */
vector<int>vect(2,100); //{100,100} okay
vect.insert(vect.begin() , 300); // {300,100,100} okay
vect.insert(vect.begin()+2 , 500); // {300 , 100 , 500 , 100} okay
vect.insert(vect.begin()+1 , 2, 150); // {300 , 150 , 150 , 100 ,500 ,100}
vector<int> copy(2,30); // {30,30}
//now if we want to insert copy vector inside vect vector at any position:
vect.insert(vect.begin() , copy.begin() , copy.end());

// SIZE;
cout<<vect.size();
//Pop:
vect.pop_back(); // removes the last element

//Swap: va = {10,20} & vb = {30,40} then 
va.swap(vb) ; // va = {30,40} and vb = {10 , 20};

//clear :
va.clear(); // erases the entire vector
// is empty:
vb.empty(); // false


/* List */
















    }

int main() {
    
    return 0;
}