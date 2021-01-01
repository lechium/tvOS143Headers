/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <StoreServices/StoreServices-Structs.h>
@interface SSVFairPlaySAPContext : NSObject {

	BOOL _complete;
	FPSAPContextOpaque_Ref _context;
	FairPlayHWInfo_ _hardwareInfo;
	long long _version;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete;              //@synthesize complete=_complete - In the implementation block
-(void)dealloc;
-(BOOL)isComplete;
-(id)signData:(id)arg1 error:(id*)arg2 ;
-(void)_teardownSession;
-(id)initWithSAPVersion:(long long)arg1 ;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
-(id)primingSignatureForData:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2 ;
-(BOOL)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3 ;
@end

