/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class KTApplicationPublicKeyStore, NSString;

@interface KTInclusionProofVerifier : NSObject {

	KTApplicationPublicKeyStore* _keyStore;
	NSString* _application;

}

@property (readonly) KTApplicationPublicKeyStore * keyStore;              //@synthesize keyStore=_keyStore - In the implementation block
@property (retain) NSString * application;                                //@synthesize application=_application - In the implementation block
-(KTApplicationPublicKeyStore *)keyStore;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(id)initWithKeyStore:(id)arg1 application:(id)arg2 ;
-(unsigned long long)verifyInclusionProofWithMapEntry:(id)arg1 perAppLogEntry:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id*)arg4 ;
-(void)setInclusionVerifiedForMapHead:(id)arg1 ;
-(unsigned long long)verifyPerApplicationTreeEntry:(id)arg1 mapHead:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id*)arg4 ;
@end

