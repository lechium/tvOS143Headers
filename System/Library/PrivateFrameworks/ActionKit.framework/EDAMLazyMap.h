/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/FATObject.h>

@class NSSet, NSDictionary;

@interface EDAMLazyMap : FATObject {

	NSSet* _keysOnly;
	NSDictionary* _fullMap;

}

@property (nonatomic,retain) NSSet * keysOnly;                    //@synthesize keysOnly=_keysOnly - In the implementation block
@property (nonatomic,retain) NSDictionary * fullMap;              //@synthesize fullMap=_fullMap - In the implementation block
+(id)structName;
+(id)structFields;
-(NSSet *)keysOnly;
-(void)setKeysOnly:(NSSet *)arg1 ;
-(NSDictionary *)fullMap;
-(void)setFullMap:(NSDictionary *)arg1 ;
@end
