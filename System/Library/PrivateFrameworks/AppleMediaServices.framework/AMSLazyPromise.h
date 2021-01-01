/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSPromise.h>

@interface AMSLazyPromise : AMSPromise {

	BOOL _executedBlock;
	/*^block*/id _block;
	double _timeout;

}

@property (nonatomic,copy) id block;                          //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL executedBlock;              //@synthesize executedBlock=_executedBlock - In the implementation block
@property (assign,nonatomic) double timeout;                  //@synthesize timeout=_timeout - In the implementation block
-(void)setTimeout:(double)arg1 ;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)resultWithError:(id*)arg1 ;
-(double)timeout;
-(void)setBlock:(id)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(BOOL)_runBlock;
-(BOOL)executedBlock;
-(void)setExecutedBlock:(BOOL)arg1 ;
-(id)initWithTimeout:(double)arg1 block:(/*^block*/id)arg2 ;
@end

