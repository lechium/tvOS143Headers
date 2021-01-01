/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSLocalMessageTimedOutMetric : NSObject <CUTCoreAnalyticsMetric> {

	BOOL _isToDefaultPairedDevice;
	NSString* _service;
	unsigned long long _messageSize;
	unsigned long long _linkType;
	unsigned long long _deliveryError;
	unsigned long long _RTT;
	unsigned long long _priority;

}

@property (nonatomic,readonly) NSString * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL isToDefaultPairedDevice;                  //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned long long messageSize;                //@synthesize messageSize=_messageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long linkType;                   //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) unsigned long long deliveryError;              //@synthesize deliveryError=_deliveryError - In the implementation block
@property (nonatomic,readonly) unsigned long long RTT;                        //@synthesize RTT=_RTT - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(unsigned long long)priority;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)service;
-(unsigned long long)linkType;
-(BOOL)isToDefaultPairedDevice;
-(unsigned long long)messageSize;
-(unsigned long long)deliveryError;
-(unsigned long long)RTT;
-(id)initWithService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 deliveryError:(unsigned long long)arg5 RTT:(unsigned long long)arg6 priority:(unsigned long long)arg7 ;
@end

