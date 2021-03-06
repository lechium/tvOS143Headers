/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLStructType.h>

@class NSDictionary, NSArray;

@interface MTLStructTypeInternal : MTLStructType {

	unsigned long long _dataType;
	NSDictionary* _dictionary;
	NSArray* _members;
	BOOL _isIndirectArgumentBuffer;

}

@property (assign) BOOL isIndirectArgumentBuffer;              //@synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(id)members;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(BOOL)isIndirectArgumentBuffer;
-(id)initWithMembers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)setMembers:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)setIsIndirectArgumentBuffer:(BOOL)arg1 ;
-(id)memberByName:(id)arg1 ;
@end

