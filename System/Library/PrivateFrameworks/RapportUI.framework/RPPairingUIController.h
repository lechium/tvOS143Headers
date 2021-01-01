/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RPPairingUIController : NSObject {

	/*^block*/id _invalidationHandler;
	/*^block*/id _retryHandler;
	/*^block*/id _tryPINHandler;

}

@property (nonatomic,copy) id invalidationHandler;              //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id retryHandler;                     //@synthesize retryHandler=_retryHandler - In the implementation block
@property (nonatomic,copy) id tryPINHandler;                    //@synthesize tryPINHandler=_tryPINHandler - In the implementation block
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)activate;
-(id)invalidationHandler;
-(void)pairingError:(id)arg1 ;
-(void)promptWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(id)retryHandler;
-(void)setRetryHandler:(id)arg1 ;
-(id)tryPINHandler;
-(void)setTryPINHandler:(id)arg1 ;
@end

