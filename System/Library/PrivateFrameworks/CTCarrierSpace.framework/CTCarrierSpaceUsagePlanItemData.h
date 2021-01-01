/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceUsagePlanItemData : NSObject <NSSecureCoding> {

	long long _units;
	NSString* _capacity;
	NSString* _maxDataBeforeThrottling;
	NSString* _thisDeviceDataUsed;
	NSString* _sharedDataUsed;
	NSString* _sharedPlanIdentifier;

}

@property (assign,nonatomic) long long units;                                 //@synthesize units=_units - In the implementation block
@property (nonatomic,retain) NSString * capacity;                             //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,retain) NSString * maxDataBeforeThrottling;              //@synthesize maxDataBeforeThrottling=_maxDataBeforeThrottling - In the implementation block
@property (nonatomic,retain) NSString * thisDeviceDataUsed;                   //@synthesize thisDeviceDataUsed=_thisDeviceDataUsed - In the implementation block
@property (nonatomic,retain) NSString * sharedDataUsed;                       //@synthesize sharedDataUsed=_sharedDataUsed - In the implementation block
@property (nonatomic,retain) NSString * sharedPlanIdentifier;                 //@synthesize sharedPlanIdentifier=_sharedPlanIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)capacity;
-(long long)units;
-(NSString *)maxDataBeforeThrottling;
-(NSString *)thisDeviceDataUsed;
-(NSString *)sharedDataUsed;
-(NSString *)sharedPlanIdentifier;
-(void)setUnits:(long long)arg1 ;
-(void)setCapacity:(NSString *)arg1 ;
-(void)setMaxDataBeforeThrottling:(NSString *)arg1 ;
-(void)setThisDeviceDataUsed:(NSString *)arg1 ;
-(void)setSharedDataUsed:(NSString *)arg1 ;
-(void)setSharedPlanIdentifier:(NSString *)arg1 ;
@end

