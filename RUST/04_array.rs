/*
 Array: [T; N] T: type, N: element insert number
 Cast type: use 'as type_name'
*/

fn print_array(array:[i32; 3])
{
    println!("{:?}", array);
}

fn looper(array:[i32; 3], title: &str)
{
    for value in array
    {
        println!("{title}: {}", value);
    }
}

fn main()
{
    let simple_array = [1, 2, 3];

    // add 3 i32 with value '6'
    let many_values_array = [6i32; 3];

    //initialisation of array
    let mut array_init = [0i32; 3];
    for i in 0..3 {
        array_init[i] = i as i32; //cast usize to i32 type
    }

    let titles = [  
                    "add manual values", 
                    "many values with one line",
                    "initialisation array"
                 ];

    let all_array = [
                        simple_array, 
                        many_values_array,
                        array_init
                    ];

    let mut idx : usize = 0;
    for array in all_array
    {
        print_array(array);
        looper(array, titles[idx]);
        idx += 1;
    }
}
