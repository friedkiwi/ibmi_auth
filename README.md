# ibmi_auth PHP extension

This extension adds a `ibmi_auth` function to PHP that can be used to validate IBM i usernames and passwords. This module functions both as a useful tool (for me at least) and as an example on how to create a PHP extension that calls into the ILE world from within the runtime to fetch data.

## Usage

`ibmi_auth` takes two parameters, username and password, and will return `true` if the credentials are correct and `false` if they aren't.

Example:

    <?php
    if (ibmi_auth('user', 'pass')) {
        echo 'Correct!';
    } else {
        echo 'Incorrect!';
    }
    ?>

## Installation

Make sure to set the environment variable `OBJECT_MODE` to `64`, eg using:

    export OBJECT_MODE=64

Then configure and build using: 

   ./configure --build=powerpc-ibm-aix6.1.9.0  CC=gcc-6
   gmake 
   gmake install

After the module is installed, make sure it is loaded in PHP.ini using the `extension=/path/to/ibmi_auth.so` parameter.

## Testing

You can quickly test the module interactively after building using: 

   $ php -d extension=.libs/ibmi_auth.so -a
     Interactive mode enabled
    
     php > var_dump(extension_loaded('ibmi_auth'));
       bool(true)
     php > var_dump(ibmi_auth());
       NULL
     php > var_dump(ibmi_auth('user', 'pass'));
       bool(false)
     php > 
