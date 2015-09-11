/*
 Navicat Premium Data Transfer

 Source Server         : words
 Source Server Type    : SQLite
 Source Server Version : 3008001
 Source Database       : main

 Target Server Type    : SQLite
 Target Server Version : 3008001
 File Encoding         : utf-8

 Date: 08/30/2015 18:17:36 PM
*/

PRAGMA foreign_keys = false;

-- ----------------------------
--  Table structure for sample
-- ----------------------------
DROP TABLE IF EXISTS "sample";
CREATE TABLE "sample" (
 "w_id" integer NOT NULL,
 "sentences" TEXT,
 "explain" TEXT,
CONSTRAINT "w_id" FOREIGN KEY ("w_id") REFERENCES "words" ("w_id") ON UPDATE SET DEFAULT DEFERRABLE INITIALLY DEFERRED
);

-- ----------------------------
--  Records of sample
-- ----------------------------
BEGIN;
INSERT INTO "sample" VALUES (1, 'to be dependent on or upon [somebody]/[something]', '依靠某人/某物生活');
INSERT INTO "sample" VALUES (1, 'dependent relatives', '受扶养的亲属');
INSERT INTO "sample" VALUES (2, 'to feel refreshed', '感到又有精神了');
COMMIT;

-- ----------------------------
--  Table structure for words
-- ----------------------------
DROP TABLE IF EXISTS "words";
CREATE TABLE "words" (
	 "w_id" INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
	 "w_word" text NOT NULL,
	 "w_explain" TEXT,
	 "w_memory_time" integer NOT NULL DEFAULT 0,
	 "w_memorize" integer NOT NULL DEFAULT 0,
	 "w_edit_count" integer NOT NULL DEFAULT 0,
	UNIQUE ("w_word" ASC)
);
INSERT INTO "main".sqlite_sequence (name, seq) VALUES ("words", '3');

-- ----------------------------
--  Records of words
-- ----------------------------
BEGIN;
INSERT INTO "words" VALUES (1, 'dependent', '依靠的,取决于', 75, 0, 0);
INSERT INTO "words" VALUES (2, 'refresh', '刷新,激发', 10, 0, 0);
INSERT INTO "words" VALUES (3, 'domain', '领域', 0, 0, 0);
COMMIT;

-- ----------------------------
--  View structure for word_sample
-- ----------------------------
DROP VIEW IF EXISTS "word_sample";
CREATE VIEW "word_sample" AS SELECT words.w_id, 
words.w_word, 
sample.sentences, 
sample."explain", 
words.w_memory_time
FROM sample, words
WHERE words.w_id=sample.w_id;

PRAGMA foreign_keys = true;
