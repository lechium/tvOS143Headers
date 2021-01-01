/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSData;

@interface MPUUserActivityContext : NSObject <NSCopying, NSMutableCopying> {

	NSArray* _containerItems;
	long long _originatorType;
	long long _originatorVersion;

}

@property (nonatomic,copy,readonly) NSArray * containerItems;                 //@synthesize containerItems=_containerItems - In the implementation block
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
@property (nonatomic,readonly) long long originatorType;                      //@synthesize originatorType=_originatorType - In the implementation block
@property (nonatomic,readonly) long long originatorVersion;                   //@synthesize originatorVersion=_originatorVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(long long)originatorType;
-(NSArray *)containerItems;
-(long long)originatorVersion;
-(id)containerItemFollowingContainerItem:(id)arg1 ;
-(id)contextByInsertingContainerItem:(id)arg1 afterContainerItem:(id)arg2 ;
-(id)contextByRemovingContainerItem:(id)arg1 ;
@end

