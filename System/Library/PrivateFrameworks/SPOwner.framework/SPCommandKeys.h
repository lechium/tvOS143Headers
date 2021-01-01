/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <SPOwner/SPNearbyToken.h>
#import <SPOwner/SPConnectionToken.h>

@class NSData, NSDateInterval, SPBeaconingKey, NSString;

@interface SPCommandKeys : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionToken> {

	SPBeaconingKey* _beaconingKey;
	NSData* _commandKey;
	NSData* _connectionToken;
	NSData* _nearbyToken;

}

@property (nonatomic,copy) SPBeaconingKey * beaconingKey;                       //@synthesize beaconingKey=_beaconingKey - In the implementation block
@property (nonatomic,copy) NSData * commandKey;                                 //@synthesize commandKey=_commandKey - In the implementation block
@property (nonatomic,copy) NSData * connectionToken;                            //@synthesize connectionToken=_connectionToken - In the implementation block
@property (nonatomic,copy) NSData * nearbyToken;                                //@synthesize nearbyToken=_nearbyToken - In the implementation block
@property (nonatomic,copy,readonly) NSData * address; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)address;
-(NSDateInterval *)dateInterval;
-(NSData *)commandKey;
-(SPBeaconingKey *)beaconingKey;
-(NSData *)connectionToken;
-(NSData *)nearbyToken;
-(void)setBeaconingKey:(SPBeaconingKey *)arg1 ;
-(void)setConnectionToken:(NSData *)arg1 ;
-(void)setNearbyToken:(NSData *)arg1 ;
-(void)setCommandKey:(NSData *)arg1 ;
-(id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4 ;
@end
