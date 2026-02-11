/*
 in Rust, write "s2 = s1" for heap type is not a copy,
 s1 give/move his value in s2, so s1 became empty
 use ".clone()" or "&" for copy this value.
 But if the type is a stack, write "s2 = s1" work.
*/

/*
 Stack (type with small size): i(8-128), f(32/64), bool, char, array, tuples, &type (ptr)
 Heap (complexe type): string, vector, HashMap, Box, Rc/Arc (shared_ptr)
*/

fn main() 
{
    let s1 = String::from("hello");
    let s2 = &s1; //s1.clone();

    println!("s1 value: {s1}");
    println!("s2 value: {s2}");

    let s3 : i32 = 24;
    let s4 : i32 = s3;

    println!("s3 value: {s3}");
    println!("s4 value: {s4}");
}