{
    "targets": [
        {
            "target_name": "fortuna",
            "sources": [ "src/main.cpp", "src/libfortuna.cpp",
                "src/libfortuna/blf.c", "src/libfortuna/fortuna.c", "src/libfortuna/internal.c", "src/libfortuna/md5.c", 
                "src/libfortuna/px.c", "src/libfortuna/random.c", "src/libfortuna/rijndael.c", "src/libfortuna/sha1.c", 
                "src/libfortuna/sha2.c" ],
            "include_dirs" : [
 	 			"<!(node -e \"require('nan')\")"
			]
        }
    ],
}