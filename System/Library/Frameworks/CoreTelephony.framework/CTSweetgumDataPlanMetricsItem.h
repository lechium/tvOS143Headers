/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTSweetgumDataPlanMetricsItem : NSObject <NSSecureCoding> {

	NSNumber* _capacityBytes;

}

@property (nonatomic,retain) NSNumber * capacityBytes;              //@synthesize capacityBytes=_capacityBytes - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)capacityBytes;
-(void)setCapacityBytes:(NSNumber *)arg1 ;
@end

