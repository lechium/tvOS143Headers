/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSData;

@interface HMDStreamDataChunk : HMFObject {

	BOOL _isLast;
	NSNumber* _sequenceNumber;
	NSData* _data;

}

@property (copy,readonly) NSNumber * sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (readonly) BOOL isLast;                                 //@synthesize isLast=_isLast - In the implementation block
@property (copy,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(NSNumber *)sequenceNumber;
-(BOOL)isLast;
-(id)attributeDescriptions;
-(id)initWithStreamDataDictionary:(id)arg1 ;
-(id)initWithSequenceNumber:(id)arg1 data:(id)arg2 isLast:(BOOL)arg3 ;
@end

