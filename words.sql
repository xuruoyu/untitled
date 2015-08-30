/*
 Navicat Premium Data Transfer

 Source Server         : words
 Source Server Type    : SQLite
 Source Server Version : 2008017
 Source Database       : main

 Target Server Type    : SQLite
 Target Server Version : 2008017
 File Encoding         : utf-8

 Date: 08/30/2015 13:52:38 PM
*/

PRAGMA foreign_keys = false;

-- ----------------------------
--  Table structure for words
-- ----------------------------
DROP TABLE "words";
CREATE TABLE "words" (
	 "w_id" INTEGER NOT NULL,
	 "w_word" text NOT NULL,
	 "w_explain" TEXT,
	 "w_memory_time" integer NOT NULL,
	 "w_memorize" integer NOT NULL DEFAULT 0,
	PRIMARY KEY("w_id")
);

-- ----------------------------
--  Records of words
-- ----------------------------
BEGIN;
INSERT INTO "words" VALUES (1, 'increasingly', 'adverb
①(more and more)越来越
increasingly fierce competition
日益激烈的竞争
②(more and more frequently)越来越频繁地
increasingly, companies are having to put up prices
各家公司不得不愈加频繁地涨价', 1, 0);
INSERT INTO "words" VALUES (2, 'dependent', 'adjective
①(reliant)依靠的
to be dependent on or upon [somebody]/[something]
依靠某人/某物生活
dependent relatives
受扶养的亲属
a drug-dependent patient
依赖药物的病人
②predicative(determined by)
to be dependent on [something]
取决于‹event, action›
受…影响 ‹emotion›
③Linguistics 从属的 ‹phrase, word›
a dependent clause
从句
adjective
①(reliant)依靠的
to be dependent on or upon [somebody]/[something]
依靠某人/某物生活
dependent relatives
受扶养的亲属
a drug-dependent patient
依赖药物的病人
②predicative(determined by)
to be dependent on [something]
取决于‹event, action›
受…影响 ‹emotion›
③Linguistics 从属的 ‹phrase, word›
a dependent clause
从句
', 1, 0);
COMMIT;

PRAGMA foreign_keys = true;
