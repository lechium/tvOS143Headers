/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AMSPromise;

@interface AMSBinaryPromise : NSObject {

	AMSPromise* _backingPromise;

}

@property (nonatomic,retain) AMSPromise * backingPromise;              //@synthesize backingPromise=_backingPromise - In the implementation block
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithAny:(id)arg1 ;
+(id)promiseWithSuccess;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithPromise:(id)arg1 ;
+(id)promiseWithAll:(id)arg1 ;
+(id)promiseWithFlattenedPromises:(id)arg1 ;
-(id)init;
-(void)waitUntilFinished;
-(BOOL)cancel;
-(BOOL)resultWithError:(id*)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(BOOL)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithSuccess;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(AMSPromise *)backingPromise;
-(void)_removeFromGlobalPromiseStorage;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(id)promiseAdapter;
-(void)setBackingPromise:(AMSPromise *)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithPromise:(id)arg1 ;
-(BOOL)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)continueWithBlock:(/*^block*/id)arg1 ;
@end
