/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDOperation.h>

@class NSString, NSData, CKShareMetadata;

@interface CKDCompleteParticipantVettingOperation : CKDOperation {

	/*^block*/id _verifyProgressURLReconstructedBlock;
	/*^block*/id _verifyProgressShareMetadataFetchedBlock;
	NSString* _vettingToken;
	NSString* _vettingEmail;
	NSString* _vettingPhone;
	NSString* _routingKey;
	NSData* _encryptedKey;
	NSString* _baseToken;
	NSString* _displayedHostname;
	OpaquePCSShareProtectionRef _protectionInfo;
	NSString* _shortToken;
	CKShareMetadata* _shareMetadata;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,readonly) NSString * vettingToken;                                                                    //@synthesize vettingToken=_vettingToken - In the implementation block
@property (nonatomic,readonly) NSString * vettingEmail;                                                                    //@synthesize vettingEmail=_vettingEmail - In the implementation block
@property (nonatomic,readonly) NSString * vettingPhone;                                                                    //@synthesize vettingPhone=_vettingPhone - In the implementation block
@property (nonatomic,readonly) NSString * routingKey;                                                                      //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,readonly) NSData * encryptedKey;                                                                      //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,readonly) NSString * baseToken;                                                                       //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,readonly) NSString * displayedHostname;                                                               //@synthesize displayedHostname=_displayedHostname - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef protectionInfo;                                                   //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,retain) NSString * shortToken;                                                                        //@synthesize shortToken=_shortToken - In the implementation block
@property (nonatomic,retain) CKShareMetadata * shareMetadata;                                                              //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,retain) id<CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id verifyProgressURLReconstructedBlock;                                                         //@synthesize verifyProgressURLReconstructedBlock=_verifyProgressURLReconstructedBlock - In the implementation block
@property (nonatomic,copy) id verifyProgressShareMetadataFetchedBlock;                                                     //@synthesize verifyProgressShareMetadataFetchedBlock=_verifyProgressShareMetadataFetchedBlock - In the implementation block
-(void)main;
-(NSString *)routingKey;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSString *)baseToken;
-(NSString *)displayedHostname;
-(NSString *)shortToken;
-(OpaquePCSShareProtectionRef)protectionInfo;
-(void)setProtectionInfo:(OpaquePCSShareProtectionRef)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(NSString *)vettingToken;
-(NSString *)vettingEmail;
-(NSString *)vettingPhone;
-(NSData *)encryptedKey;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setVerifyProgressURLReconstructedBlock:(id)arg1 ;
-(void)setVerifyProgressShareMetadataFetchedBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(void)_reconstructShortToken;
-(void)_performAuthKitVerification;
-(void)_forceFetchShareMetadata;
-(void)_reconstructShareURL;
-(void)_verifyOONParticipant;
-(id)shortSharingTokenFromFullToken:(id)arg1 ;
-(void)setShortToken:(NSString *)arg1 ;
-(id)verifyProgressShareMetadataFetchedBlock;
-(id)verifyProgressURLReconstructedBlock;
-(id)shortSharingTokenFromData:(id)arg1 ;
@end

