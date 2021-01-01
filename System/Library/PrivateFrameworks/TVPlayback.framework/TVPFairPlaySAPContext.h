/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVPlayback/TVPlayback-Structs.h>
@interface TVPFairPlaySAPContext : NSObject {

	BOOL _setupComplete;
	FPSAPContextOpaque_Ref _fairPlaySAPContext;
	FairPlayHWInfo_* _fairPlayHardwareInfo;

}

@property (assign,getter=isSetupComplete,nonatomic) BOOL setupComplete;              //@synthesize setupComplete=_setupComplete - In the implementation block
@property (assign,nonatomic) FPSAPContextOpaque_Ref fairPlaySAPContext;              //@synthesize fairPlaySAPContext=_fairPlaySAPContext - In the implementation block
@property (assign,nonatomic) FairPlayHWInfo_* fairPlayHardwareInfo;                  //@synthesize fairPlayHardwareInfo=_fairPlayHardwareInfo - In the implementation block
+(id)_digestForData:(id)arg1 ;
-(void)dealloc;
-(id)encryptData:(id)arg1 ;
-(id)signatureForData:(id)arg1 ;
-(BOOL)isSetupComplete;
-(id)decryptData:(id)arg1 ;
-(void)setSetupComplete:(BOOL)arg1 ;
-(FPSAPContextOpaque_Ref)fairPlaySAPContext;
-(void)setFairPlaySAPContext:(FPSAPContextOpaque_Ref)arg1 ;
-(FairPlayHWInfo_*)fairPlayHardwareInfo;
-(BOOL)validateData:(id)arg1 encryptedSignature:(id)arg2 ;
-(long long)setupWithInputData:(id)arg1 outputData:(id*)arg2 ;
-(id)signatureForString:(id)arg1 ;
-(BOOL)validateString:(id)arg1 encryptedSignature:(id)arg2 ;
-(void)setFairPlayHardwareInfo:(FairPlayHWInfo_*)arg1 ;
@end

