/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSOperationQueue;

@interface VSErrorRecoveryAttempter : NSObject {

	NSArray* _options;
	NSOperationQueue* _recoveryAttemptingQueue;

}

@property (nonatomic,retain) NSOperationQueue * recoveryAttemptingQueue;              //@synthesize recoveryAttemptingQueue=_recoveryAttemptingQueue - In the implementation block
@property (nonatomic,copy) NSArray * options;                                         //@synthesize options=_options - In the implementation block
-(id)init;
-(NSArray *)options;
-(void)setOptions:(NSArray *)arg1 ;
-(NSOperationQueue *)recoveryAttemptingQueue;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)setRecoveryAttemptingQueue:(NSOperationQueue *)arg1 ;
@end

