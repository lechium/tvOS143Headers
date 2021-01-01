/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SigningPublicKey, NGMPublicPreKey;

@interface NGMPublicDeviceIdentity : NSObject {

	SigningPublicKey* _signingKey;
	NGMPublicPreKey* _prekey;

}

@property (nonatomic,retain) SigningPublicKey * signingKey;              //@synthesize signingKey=_signingKey - In the implementation block
@property (nonatomic,retain) NGMPublicPreKey * prekey;                   //@synthesize prekey=_prekey - In the implementation block
+(id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(BOOL)verifySignature:(id)arg1 formatter:(id)arg2 ;
-(SigningPublicKey *)signingKey;
-(id)identityData;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3 ;
-(id)initWithPrekey:(id)arg1 signingKey:(id)arg2 ;
-(id)prekeyData;
-(NGMPublicPreKey *)prekey;
-(void)setSigningKey:(SigningPublicKey *)arg1 ;
-(void)setPrekey:(NGMPublicPreKey *)arg1 ;
-(id)sealMessage:(id)arg1 withEncryptedAttributes:(id)arg2 signedByFullIdentity:(id)arg3 error:(id*)arg4 ;
-(BOOL)isValidSigningDestination;
@end

