/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SigningKey, NSMutableArray;

@interface NGMFullDeviceIdentity : NSObject {

	SigningKey* _deviceSigningKey;
	NSMutableArray* _devicePrekeys;

}

@property (nonatomic,retain) SigningKey * deviceSigningKey;               //@synthesize deviceSigningKey=_deviceSigningKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * devicePrekeys;              //@synthesize devicePrekeys=_devicePrekeys - In the implementation block
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithAccess:(id)arg1 error:(id*)arg2 ;
+(id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(SigningKey *)deviceSigningKey;
-(NSMutableArray *)devicePrekeys;
-(BOOL)deleteKeyWithTag:(id)arg1 ;
-(BOOL)requiresMigration;
-(void)postMigrationKeychainCleanup;
-(id)signDataWithFormatter:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(void)setDeviceSigningKey:(SigningKey *)arg1 ;
-(void)setDevicePrekeys:(NSMutableArray *)arg1 ;
-(id)initWithSigningKey:(id)arg1 devicePrekeys:(id)arg2 ;
-(void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
-(void)unsealMessageAndAttributes:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldRollEncryptionIdentity;
-(BOOL)eraseFromKeyChain:(id*)arg1 ;
-(id)keyRollingTicketWithError:(id*)arg1 ;
-(BOOL)updateWithRegisteredTicket:(id)arg1 error:(id*)arg2 ;
@end
