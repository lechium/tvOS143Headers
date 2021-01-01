/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, HAPTLVUnsignedNumberValue, NSString;

@interface HAPDataStreamHAPControllerPayload : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _payload;
	HAPTLVUnsignedNumberValue* _sessionIdentifier;
	HAPTLVUnsignedNumberValue* _forceClose;

}

@property (nonatomic,retain) NSData * payload;                                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * forceClose;                     //@synthesize forceClose=_forceClose - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(HAPTLVUnsignedNumberValue *)sessionIdentifier;
-(void)setSessionIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setForceClose:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)forceClose;
-(id)initWithPayload:(id)arg1 sessionIdentifier:(id)arg2 forceClose:(id)arg3 ;
@end

