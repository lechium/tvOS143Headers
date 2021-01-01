/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFNaming.h>

@class NSString, NSMeasurement, WFTimeInterval;

@interface WFTripInfo : NSObject <NSSecureCoding, WFNaming> {

	NSString* _routeName;
	NSMeasurement* _distance;
	WFTimeInterval* _expectedTravelTime;

}

@property (nonatomic,readonly) NSString * routeName;                             //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,readonly) NSMeasurement * distance;                         //@synthesize distance=_distance - In the implementation block
@property (nonatomic,readonly) WFTimeInterval * expectedTravelTime;              //@synthesize expectedTravelTime=_expectedTravelTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMeasurement *)distance;
-(NSString *)routeName;
-(WFTimeInterval *)expectedTravelTime;
-(NSString *)wfName;
-(id)initWithMKRoute:(id)arg1 ;
@end

