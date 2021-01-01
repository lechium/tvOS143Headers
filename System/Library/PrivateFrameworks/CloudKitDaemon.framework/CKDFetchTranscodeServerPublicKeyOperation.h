/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDOperation.h>

@class CKPublicKey, NSString, NSURL;

@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation {

	CKPublicKey* _transcodeServerPublicKey;
	NSString* _transcodeServerHostname;
	NSURL* _transcodeServerPublicKeyURL;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,readonly) NSString * transcodeServerHostname;              //@synthesize transcodeServerHostname=_transcodeServerHostname - In the implementation block
@property (nonatomic,retain) NSURL * transcodeServerPublicKeyURL;               //@synthesize transcodeServerPublicKeyURL=_transcodeServerPublicKeyURL - In the implementation block
@property (retain) CKPublicKey * transcodeServerPublicKey;                      //@synthesize transcodeServerPublicKey=_transcodeServerPublicKey - In the implementation block
+(SecPolicyRef)createTranscodeServerTrustPolicy;
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(NSString *)transcodeServerHostname;
-(void)setTranscodeServerPublicKeyURL:(NSURL *)arg1 ;
-(NSURL *)transcodeServerPublicKeyURL;
-(void)setTranscodeServerPublicKey:(CKPublicKey *)arg1 ;
-(void)determineTranscodeServerPublicKeyURL;
-(void)fetchCachedTranscodePublicKey;
-(CKPublicKey *)transcodeServerPublicKey;
-(void)fetchRemoteTranscodePublicKey;
@end

