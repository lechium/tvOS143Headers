/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_PFResultString.h>

@interface _PFResultASCIIString : _PFResultString {

	unsigned _length;

}
+(void)initialize;
+(unsigned long long)bufferOffset;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)length;
-(const char*)UTF8String;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(BOOL)_isCString;
-(unsigned long long)cStringLength;
-(void)getCharacters:(unsigned short*)arg1 ;
-(void)getCString:(char*)arg1 ;
@end

