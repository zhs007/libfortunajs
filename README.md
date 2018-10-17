# fortuna random algorithm

libfortunajs has been certified by iTech's random algorithm.

### libfortuna

libfortuna uses code from the [PostgreSQL](http://www.postgres.org/) database project.

The original source location (in the postgres source tree) is contrib/pgcrypto. Also, parts of src/include/postgres.h and src/include/c.h.

### libfortunajs

[libfortunajs](https://github.com/zhs007/libfortunajs) is a nodejs c++ addon project. 

This library can be compiled with [node-gyp](https://github.com/nodejs/node-gyp) .

[libfortunajs](https://github.com/zhs007/libfortunajs) export some functions, which in our game only use ```randomInt``` .

### Install or Compile libfortunajs

[libfortunajs](https://github.com/zhs007/libfortunajs) has been publish to [npm](https://www.npmjs.com/) , all projects base nodejs can be download source code to compile and use.

```
npm i libfortuna --save
``` 

Nodejs version 8.x is recommended.

[libfortunajs](https://github.com/zhs007/libfortunajs) compile with [node-gyp](https://github.com/nodejs/node-gyp) .

except nodejs, you need to python 2.x, gcc 4.9 (on linux), and on mac osx also need xcode, on windows recommended to [node-gyp](https://github.com/nodejs/node-gyp) installation instructions.

### game

```
const libfortuna = require('libfortuna');

function randomInt(max) {
    return libfortuna.randomInt(max);
}

exports.randomInt = randomInt;
```

When the actual game wheel is random, we call it this way

```
for (let ii = 0; ii < this.axisnums; ++ii) {
    lstLastSymbol[ii] = base.randomInt(lstSymbol[ii].length);
}
```

### update

- 1.2.15 - fix scaling of rng bug
- 1.2.13 - fix scaling of rng bug
- 1.2.12 - fix scaling of rng bug
- 1.2 - add randomBuf
- 1.1 - add addEntropy
- 1.0 - add random/randomInt
