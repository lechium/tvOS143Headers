/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchStreamEventsResultObject : CATTaskResultObject {

	NSArray* _eventStatuses;

}

@property (nonatomic,copy) NSArray * eventStatuses;              //@synthesize eventStatuses=_eventStatuses - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)eventStatuses;
-(void)setEventStatuses:(NSArray *)arg1 ;
@end
