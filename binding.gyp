{
    "targets": [
        {
            "target_name": "libfortuna",
            "sources": [ "src/main.cpp", "src/libfortuna.cpp",
                "src/blf.c", "src/fortuna.c", "src/internal.c", "src/md5.c", "src/px.c", "src/random.c", "src/rijndael.c", "src/sha1.c", "src/sha2.c" ],
            "include_dirs" : [
 	 			"<!(node -e \"require('nan')\")"
			]
        }
    ],
}