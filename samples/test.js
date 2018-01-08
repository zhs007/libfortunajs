const libfortuna = require('../index');

libfortuna.addEntropyInt(123456);
// randomInt is random int32
console.log(libfortuna.randomInt(4000000000));

const STR_DEF = '0123456789abcdef';
var uint8arr = libfortuna.randomBuf(256);
var strout = '';
for (let i = 0; i < uint8arr.length; ++i) {
    let ch = Math.floor(uint8arr[i] / 16);
    let cl = uint8arr[i] % 16;

    strout += STR_DEF.charAt(ch);
    strout += STR_DEF.charAt(cl);
}

console.log(strout);