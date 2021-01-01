/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>

@protocol HAP2AccessoryServerTransportRequestEndpoint;
@class NSString, NSData;

@interface HAP2AccessoryServerTransportRequest : HAP2LoggingObject {

	BOOL _forReading;
	BOOL _encrypted;
	id<HAP2AccessoryServerTransportRequestEndpoint> _endpoint;
	NSString* _mimeType;
	NSData* _data;
	unsigned long long _identifier;

}

@property (nonatomic,readonly) id<HAP2AccessoryServerTransportRequestEndpoint> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
@property (getter=isForReading,nonatomic,readonly) BOOL forReading;                                   //@synthesize forReading=_forReading - In the implementation block
@property (getter=isForWriting,nonatomic,readonly) BOOL forWriting; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted;                                     //@synthesize encrypted=_encrypted - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                                                   //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSData * data;                                                         //@synthesize data=_data - In the implementation block
+(id)new;
-(id)debugDescription;
-(id)description;
-(id)init;
-(NSData *)data;
-(id<HAP2AccessoryServerTransportRequestEndpoint>)endpoint;
-(BOOL)isEncrypted;
-(NSString *)mimeType;
-(id)initForReadingWithEndpoint:(id)arg1 data:(id)arg2 encrypted:(BOOL)arg3 mimeType:(id)arg4 ;
-(id)initForWritingWithEndpoint:(id)arg1 data:(id)arg2 encrypted:(BOOL)arg3 mimeType:(id)arg4 ;
-(BOOL)isForReading;
-(BOOL)isForWriting;
@end

