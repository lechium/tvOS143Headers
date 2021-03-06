/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface TVHKRentalItem : NSObject <NSCopying> {

	NSString* _name;
	NSNumber* _rentalKeyID;
	NSNumber* _userID;
	NSNumber* _DAAPPersistentItemID;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * rentalKeyID;                       //@synthesize rentalKeyID=_rentalKeyID - In the implementation block
@property (nonatomic,copy) NSNumber * userID;                            //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSNumber * DAAPPersistentItemID;              //@synthesize DAAPPersistentItemID=_DAAPPersistentItemID - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)userID;
-(void)setUserID:(NSNumber *)arg1 ;
-(void)setRentalKeyID:(NSNumber *)arg1 ;
-(NSNumber *)rentalKeyID;
-(void)setDAAPPersistentItemID:(NSNumber *)arg1 ;
-(NSNumber *)DAAPPersistentItemID;
@end

