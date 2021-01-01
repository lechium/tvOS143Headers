/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSData, NSNumber;

@interface EDAMData : FATObject {

	NSData* _bodyHash;
	NSNumber* _size;
	NSData* _body;

}

@property (nonatomic,retain) NSData * bodyHash;              //@synthesize bodyHash=_bodyHash - In the implementation block
@property (nonatomic,retain) NSNumber * size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSData * body;                  //@synthesize body=_body - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)size;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(NSData *)bodyHash;
-(void)setBodyHash:(NSData *)arg1 ;
@end

