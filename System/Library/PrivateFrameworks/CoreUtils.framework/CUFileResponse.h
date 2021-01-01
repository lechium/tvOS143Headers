/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUDictionaryCodable.h>

@class NSArray;

@interface CUFileResponse : NSObject <CUDictionaryCodable> {

	unsigned _flags;
	NSArray* _fileItems;

}

@property (nonatomic,copy) NSArray * fileItems;              //@synthesize fileItems=_fileItems - In the implementation block
@property (assign,nonatomic) unsigned flags;                 //@synthesize flags=_flags - In the implementation block
-(id)description;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithDictionary:(id)arg1 ;
-(NSArray *)fileItems;
-(void)setFileItems:(NSArray *)arg1 ;
@end

