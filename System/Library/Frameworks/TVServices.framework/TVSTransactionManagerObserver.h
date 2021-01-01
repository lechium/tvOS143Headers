/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVSTransactionManagerObserver;
#import <TVServices/TVServices-Structs.h>
@interface TVSTransactionManagerObserver : NSObject {

	struct {
		BOOL willBeginTransaction;
		BOOL didCompleteTransaction;
	}  _observerFlags;
	id<TVSTransactionManagerObserver> _observer;

}

@property (assign,nonatomic,__weak) id<TVSTransactionManagerObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setObserver:(id<TVSTransactionManagerObserver>)arg1 ;
-(id)_initWithObserver:(id)arg1 ;
-(id<TVSTransactionManagerObserver>)observer;
-(id)initWithObserver:(id)arg1 ;
-(void)transactionManager:(id)arg1 willBeginTransaction:(id)arg2 ;
-(void)transactionManager:(id)arg1 didCompleteTransaction:(id)arg2 ;
@end
