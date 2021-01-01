/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NAIdentity : NSObject <NSCopying> {

	NSArray* _characteristics;

}

@property (nonatomic,copy) NSArray * characteristics;              //@synthesize characteristics=_characteristics - In the implementation block
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSArray *)characteristics;
-(unsigned long long)hashOfObject:(id)arg1 ;
-(BOOL)isObject:(id)arg1 equalToObject:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg1 ;
@end
