/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSBigMutableString : NSMutableString {

	struct {
		unsigned isStorage : 1;
		unsigned isUnicode : 1;
		unsigned hasBOM : 1;
		unsigned swap : 1;
		unsigned immutable : 1;
		unsigned  : 27;
	}  flags;
	unsigned long long length;
	SCD_Union_NS7* contents;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)length;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)_isCString;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(id)_createSubstringWithRange:(NSRange)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)_checkForInvalidMutationWithSelector:(SEL)arg1 ;
-(BOOL)_copyDataFrom:(id)arg1 range:(NSRange)arg2 ;
-(BOOL)_copyStorage:(_CFStorage*)arg1 encoding:(unsigned long long*)arg2 ;
-(BOOL)_setStorage:(CFStorageRef)arg1 encoding:(unsigned long long)arg2 ;
-(BOOL)_setData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithStorage:(CFStorageRef)arg1 length:(unsigned long long)arg2 isUnicode:(BOOL)arg3 ;
-(void)_markAsImmutable;
-(id)_newSmallImmutableSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(id)_newBigSubstringWithRange:(NSRange)arg1 wantsMutable:(BOOL)arg2 zone:(NSZone*)arg3 ;
-(BOOL)_isMarkedAsImmutable;
-(BOOL)_getData:(id*)arg1 encoding:(unsigned long long*)arg2 ;
@end

