/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class VRFPublicKey, TransparencyTrustedKeyStore, NSDate, NSString, NSData, NSDictionary, NSArray;

@interface KTApplicationPublicKeyStore : NSObject {

	int _vrfType;
	VRFPublicKey* _vrfKey;
	TransparencyTrustedKeyStore* _appSmtKeyStore;
	TransparencyTrustedKeyStore* _appSthKeyStore;
	TransparencyTrustedKeyStore* _tltKeyStore;
	unsigned long long _patLogBeginningMs;
	unsigned long long _tltLogBeginningMs;
	NSDate* _receiptTime;
	NSString* _application;
	NSData* _patConfigProof;
	NSData* _tltConfigProof;
	NSDictionary* _trustedAppSigningKeys;
	NSArray* _trustedAppLeafs;
	NSDictionary* _trustedTltSigningKeys;
	NSArray* _trustedTltLeafs;
	NSArray* _trustedIntermediates;

}

@property (retain) NSString * application;                                    //@synthesize application=_application - In the implementation block
@property (retain) NSData * patConfigProof;                                   //@synthesize patConfigProof=_patConfigProof - In the implementation block
@property (retain) NSData * tltConfigProof;                                   //@synthesize tltConfigProof=_tltConfigProof - In the implementation block
@property (retain) VRFPublicKey * vrfKey;                                     //@synthesize vrfKey=_vrfKey - In the implementation block
@property (assign) int vrfType;                                               //@synthesize vrfType=_vrfType - In the implementation block
@property (retain) NSDictionary * trustedAppSigningKeys;                      //@synthesize trustedAppSigningKeys=_trustedAppSigningKeys - In the implementation block
@property (retain) NSArray * trustedAppLeafs;                                 //@synthesize trustedAppLeafs=_trustedAppLeafs - In the implementation block
@property (retain) NSDictionary * trustedTltSigningKeys;                      //@synthesize trustedTltSigningKeys=_trustedTltSigningKeys - In the implementation block
@property (retain) NSArray * trustedTltLeafs;                                 //@synthesize trustedTltLeafs=_trustedTltLeafs - In the implementation block
@property (retain) NSArray * trustedIntermediates;                            //@synthesize trustedIntermediates=_trustedIntermediates - In the implementation block
@property (retain) TransparencyTrustedKeyStore * appSmtKeyStore;              //@synthesize appSmtKeyStore=_appSmtKeyStore - In the implementation block
@property (retain) TransparencyTrustedKeyStore * appSthKeyStore;              //@synthesize appSthKeyStore=_appSthKeyStore - In the implementation block
@property (retain) TransparencyTrustedKeyStore * tltKeyStore;                 //@synthesize tltKeyStore=_tltKeyStore - In the implementation block
@property (assign) unsigned long long tltLogBeginningMs;                      //@synthesize tltLogBeginningMs=_tltLogBeginningMs - In the implementation block
@property (assign) unsigned long long patLogBeginningMs;                      //@synthesize patLogBeginningMs=_patLogBeginningMs - In the implementation block
@property (readonly) BOOL ready; 
@property (readonly) BOOL inResetWindow; 
@property (retain) NSDate * receiptTime;                                      //@synthesize receiptTime=_receiptTime - In the implementation block
-(BOOL)ready;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(void)clearState:(id*)arg1 ;
-(TransparencyTrustedKeyStore *)tltKeyStore;
-(NSDate *)receiptTime;
-(int)vrfType;
-(VRFPublicKey *)vrfKey;
-(TransparencyTrustedKeyStore *)appSthKeyStore;
-(unsigned long long)patLogBeginningMs;
-(void)setReceiptTime:(NSDate *)arg1 ;
-(BOOL)inResetWindow;
-(NSDictionary *)trustedAppSigningKeys;
-(NSDictionary *)trustedTltSigningKeys;
-(TransparencyTrustedKeyStore *)appSmtKeyStore;
-(void)setVrfKey:(VRFPublicKey *)arg1 ;
-(void)setPatConfigProof:(NSData *)arg1 ;
-(void)setTrustedAppSigningKeys:(NSDictionary *)arg1 ;
-(void)setTrustedTltSigningKeys:(NSDictionary *)arg1 ;
-(void)setTrustedIntermediates:(NSArray *)arg1 ;
-(void)setTltLogBeginningMs:(unsigned long long)arg1 ;
-(void)setPatLogBeginningMs:(unsigned long long)arg1 ;
-(NSData *)tltConfigProof;
-(unsigned long long)tltLogBeginningMs;
-(void)notifyTreeResetDetected:(BOOL)arg1 ;
-(BOOL)verifyConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(BOOL)arg3 error:(id*)arg4 ;
-(id)createTrustedSthKeyStoreFromProofSPKI:(id)arg1 signingKeysMap:(id)arg2 error:(id*)arg3 ;
-(void)setAppSthKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(id)copyVRFKeyFromConfigProof:(id)arg1 error:(id*)arg2 ;
-(void)setVrfType:(int)arg1 ;
-(BOOL)detectEpochChangeAndResetData:(unsigned long long)arg1 patLogBeginningMs:(unsigned long long)arg2 dataStore:(id)arg3 error:(id*)arg4 ;
-(void)setTltKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(void)setTltConfigProof:(NSData *)arg1 ;
-(BOOL)verifyCertificates:(id)arg1 intermediates:(id)arg2 application:(id)arg3 error:(id*)arg4 ;
-(void)setAppSmtKeyStore:(TransparencyTrustedKeyStore *)arg1 ;
-(BOOL)processTltConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)procesPatConfigProof:(id)arg1 dataStore:(id)arg2 saveTreeHeads:(BOOL)arg3 error:(id*)arg4 ;
-(NSData *)patConfigProof;
-(BOOL)processKeyData:(id)arg1 tltLeafs:(id)arg2 intermediates:(id)arg3 patConfigProof:(id)arg4 tltConfigProof:(id)arg5 dataStore:(id)arg6 saveTreeHeads:(BOOL)arg7 error:(id*)arg8 ;
-(BOOL)processPublicKeysResponse:(id)arg1 dataStore:(id)arg2 error:(id*)arg3 ;
-(void)startKeyStoreStateSampler;
-(BOOL)processDiskState:(id)arg1 dataStore:(id)arg2 error:(id*)arg3 ;
-(id)copyKeyStoreState;
-(id)initWithApplication:(id)arg1 dataStore:(id)arg2 response:(id)arg3 error:(id*)arg4 ;
-(id)initWithApplication:(id)arg1 dataStore:(id)arg2 diskState:(id)arg3 error:(id*)arg4 ;
-(id)createTLTApplicationPublicKeyStore;
-(NSArray *)trustedAppLeafs;
-(void)setTrustedAppLeafs:(NSArray *)arg1 ;
-(NSArray *)trustedTltLeafs;
-(void)setTrustedTltLeafs:(NSArray *)arg1 ;
-(NSArray *)trustedIntermediates;
@end

