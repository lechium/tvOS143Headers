/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCharacteristicEventBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDCharacteristicEvent : HMDCharacteristicEventBase <NSSecureCoding> {

	id _eventValue;

}

@property (nonatomic,retain) id eventValue;              //@synthesize eventValue=_eventValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEventValue:(id)arg1 ;
-(id)eventValue;
-(id)dumpState;
-(id)emptyModelObject;
-(void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)_transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)createPayload;
-(id)initWithModel:(id)arg1 home:(id)arg2 ;
-(void)_handleUpdateRequest:(id)arg1 ;
-(id)analyticsTriggerEventData;
-(BOOL)_compareEventValue:(id)arg1 ;
-(BOOL)_evaluateNewValue:(id)arg1 ;
@end

