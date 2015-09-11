/*
 Navicat Premium Data Transfer

 Source Server         : words
 Source Server Type    : SQLite
 Source Server Version : 3008001
 Source Database       : main

 Target Server Type    : SQLite
 Target Server Version : 3008001
 File Encoding         : utf-8

 Date: 08/30/2015 16:56:09 PM
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

PRAGMA foreign_keys = true;
