/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol DADataclassLockWatcher;
@interface DAWaiterWrapper : NSObject {

	id<DADataclassLockWatcher> _waiter;
	long long _dataclasses;
	/*^block*/id _completionHandler;
	int _waiterNum;

}

@property (nonatomic,retain) id<DADataclassLockWatcher> waiter;              //@synthesize waiter=_waiter - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long dataclasses;                          //@synthesize dataclasses=_dataclasses - In the implementation block
@property (nonatomic,readonly) int waiterNum;                                //@synthesize waiterNum=_waiterNum - In the implementation block
-(id)description;
-(id)init;
-(id<DADataclassLockWatcher>)waiter;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(long long)dataclasses;
-(void)setWaiter:(id<DADataclassLockWatcher>)arg1 ;
-(void)setDataclasses:(long long)arg1 ;
-(int)waiterNum;
@end
