
DROP TABLE IF EXISTS "words";
DROP TABLE IF EXISTS "sample";
DROP VIEW IF EXISTS "word_sample";


CREATE TABLE "words" (
	 "w_id" INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
	 "w_word" text NOT NULL,
	 "w_explain" TEXT,
	 "w_memory_time" integer NOT NULL DEFAULT 0,
	 "w_memorize" integer NOT NULL DEFAULT 0,
	 "w_edit_count" integer NOT NULL DEFAULT 0,
	UNIQUE ("w_word" ASC)
);

CREATE TABLE "sample" (
 "w_id" integer NOT NULL,
 "sentences" TEXT,
 "explain" TEXT,
CONSTRAINT "w_id" FOREIGN KEY ("w_id") REFERENCES "words" ("w_id") ON UPDATE SET DEFAULT DEFERRABLE INITIALLY DEFERRED
);

CREATE VIEW "word_sample" AS SELECT words.w_id, 
words.w_word, 
sample.sentences, 
sample."explain", 
words.w_memory_time
FROM sample, words
WHERE words.w_id=sample.w_id;