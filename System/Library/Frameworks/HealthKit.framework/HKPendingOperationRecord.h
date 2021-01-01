/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKPendingOperationRecord : NSObject {

	/*^block*/id _operationHandler;
	/*^block*/id _completionHandler;
	long long _errorCount;

}

@property (nonatomic,copy,readonly) id operationHandler;               //@synthesize operationHandler=_operationHandler - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long errorCount;                     //@synthesize errorCount=_errorCount - In the implementation block
+(id)pendingOperation:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)completionHandler;
-(void)setErrorCount:(long long)arg1 ;
-(long long)errorCount;
-(id)operationHandler;
@end

