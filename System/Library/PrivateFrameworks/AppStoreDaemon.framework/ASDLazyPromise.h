/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/ASDPromise.h>

@protocol ASDTaskScheduler;
@interface ASDLazyPromise : ASDPromise {

	/*^block*/id _executor;
	id<ASDTaskScheduler> _scheduler;

}
-(void)thenPerform:(/*^block*/id)arg1 orCatchError:(/*^block*/id)arg2 onScheduler:(id)arg3 ;
-(id)initOnScheduler:(id)arg1 withExecutor:(/*^block*/id)arg2 ;
-(id)joinWithPromise:(id)arg1 ;
@end

