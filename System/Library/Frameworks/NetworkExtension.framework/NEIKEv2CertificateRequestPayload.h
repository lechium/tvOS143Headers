/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload {

	unsigned long long _encoding;
	NSData* _certificateData;

}

@property (assign) unsigned long long encoding;              //@synthesize encoding=_encoding - In the implementation block
@property (retain) NSData * certificateData;                 //@synthesize certificateData=_certificateData - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)encoding;
-(NSData *)certificateData;
-(void)setEncoding:(unsigned long long)arg1 ;
-(void)setCertificateData:(NSData *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
@end

