//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSScanner.h>

@interface NSScanner (SQLiteSQLParsingAdditions)
+ (id)SQLParsingScannerWithSQL:(id)arg1;	// IMP=0x00000001001e75c4
- (_Bool)_scanThroughQuoteWithDelimiter:(id)arg1 appendToString:(id)arg2;	// IMP=0x00000001001e81a4
- (_Bool)_scanBalancedSubstringFromCharacter:(unsigned short)arg1 appendToString:(id)arg2;	// IMP=0x00000001001e801c
- (_Bool)_scanUpToTopLevelDelimiters:(id)arg1 intoString:(id *)arg2;	// IMP=0x00000001001e7dac
- (_Bool)_scanSQLiteIdentifierCharactersIntoString:(id *)arg1;	// IMP=0x00000001001e7d28
- (_Bool)_scanSQLiteIdentifierIntoString:(id *)arg1;	// IMP=0x00000001001e7bf8
- (_Bool)_scanTableSQLConstraint:(id *)arg1;	// IMP=0x00000001001e7be0
- (_Bool)_scanTableSQLColumn:(id *)arg1;	// IMP=0x00000001001e7a0c
- (_Bool)scanTableSQLColumns:(id *)arg1 constraints:(id *)arg2;	// IMP=0x00000001001e77f8
- (_Bool)scanTableSQLPreambleAndTableName:(id *)arg1;	// IMP=0x00000001001e764c
@end

