/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface NEIKEv2Payload : NSObject {

	BOOL _isInbound;
	NSData* _payloadData;

}

@property (assign) BOOL isInbound;                         //@synthesize isInbound=_isInbound - In the implementation block
@property (readonly) BOOL hasRequiredFields; 
@property (retain) NSData * payloadData;                   //@synthesize payloadData=_payloadData - In the implementation block
@property (readonly) BOOL isValid; 
@property (readonly) unsigned long long type; 
+(id)copyTypeDescription;
+(id)createPayloadWithType:(unsigned long long)arg1 fromData:(id)arg2 ;
-(id)init;
-(BOOL)isValid;
-(unsigned long long)type;
-(id)copyPayloadData;
-(BOOL)isInbound;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(void)setPayloadData:(NSData *)arg1 ;
-(void)setIsInbound:(BOOL)arg1 ;
-(BOOL)parsePayloadData;
-(NSData *)payloadData;
@end

