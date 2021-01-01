/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSData;

@interface WFSSHKeyPair : NSObject <NSSecureCoding> {

	NSNumber* _keySize;
	NSString* _comment;
	NSData* _privateKeyData;
	NSData* _publicKeyData;
	Class _format;

}

@property (nonatomic,readonly) NSData * privateKeyData;                      //@synthesize privateKeyData=_privateKeyData - In the implementation block
@property (nonatomic,readonly) NSData * publicKeyData;                       //@synthesize publicKeyData=_publicKeyData - In the implementation block
@property (nonatomic,retain) Class format;                                   //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) NSNumber * keySize;                           //@synthesize keySize=_keySize - In the implementation block
@property (nonatomic,readonly) NSString * comment;                           //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) NSString * localizedType; 
@property (nonatomic,readonly) NSString * localizedDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3 ;
+(id)keyFormats;
+(id)sharedKeyPair;
+(void)setSharedKeyPair:(id)arg1 ;
+(id)knownHostFileURL;
+(id)defaultKeyComment;
+(BOOL)parsePublicKey:(id)arg1 type:(id*)arg2 data:(id*)arg3 comment:(id*)arg4 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)comment;
-(id)publicKey;
-(Class)format;
-(void)setFormat:(Class)arg1 ;
-(NSNumber *)keySize;
-(NSData *)publicKeyData;
-(id)initWithFormat:(Class)arg1 privateKeyData:(id)arg2 publicKeyData:(id)arg3 keySize:(id)arg4 comment:(id)arg5 ;
-(id)privateKeyPEM;
-(NSString *)localizedType;
-(id)publicKeyFingerprintWithType:(unsigned long long)arg1 ;
-(NSData *)privateKeyData;
@end
