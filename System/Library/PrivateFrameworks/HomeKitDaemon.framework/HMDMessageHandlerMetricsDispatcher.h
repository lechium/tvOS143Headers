/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSUUID, HMDLogEventDispatcher;

@interface HMDMessageHandlerMetricsDispatcher : HMFObject {

	NSUUID* _identifier;
	HMDLogEventDispatcher* _logEventDispatcher;

}

@property (copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;              //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
+(id)logCategory;
-(NSUUID *)identifier;
-(id)privateDescription;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 ;
-(void)submitFailureEventOfType:(unsigned long long)arg1 message:(id)arg2 ;
@end

